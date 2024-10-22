﻿#include "SEITimelineContainer.h"
#include "Styling/ISlateStyle.h"
#include "Widgets/SWidget.h"
#include "Widgets/Layout/SSplitter.h"
#include "ISequencerWidgetsModule.h"
#include "FrameNumberNumericInterface.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SScrollBorder.h"
#include "Styling/AppStyle.h"
#include "Fonts/FontMeasure.h"
#include "Widgets/Layout/SGridPanel.h"
#include "Widgets/Layout/SSpacer.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Input/SButton.h"
#include "Modules/ModuleManager.h"
#include "Preferences/PersonaOptions.h"
#include "IPersonaPreviewScene.h"
#include "Animation/DebugSkelMeshComponent.h"
#include "EditorWidgetsModule.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "ScopedTransaction.h"
#include "Widgets/Input/STextEntryPopup.h"
#include "Widgets/Input/SSpinBox.h"
#include "Animation/AnimSequence.h"
#include "Animation/AnimData/IAnimationDataModel.h"
#include "Animation/AnimSequenceHelpers.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Framework/Commands/GenericCommands.h"
#include "MovieSceneFwd.h"
#include "FrameNumberDisplayFormat.h"
#include "SEITimelineControlPanel.h"
#include "SEITimelineOverlay.h"
#include "SEITimelineSplitterOverlay.h"
#include "SEITrackArea.h"
#include "SEITrackOutliner.h"
#include "SequencerWidgetsDelegates.h"
#include "TimeSliderArgs.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEIPreviewScene.h"
#include "EITimeliner/EditorComponents/FEITimeSliderController.h"
#include "Preferences/PersonaOptions.h"


#define FTF(a) FText::FromString(TEXT(a))
#define FTFs(a) FText::FromString(a)

void SEITimelineContainer::Construct(const FArguments& InArg,
		const TSharedRef<FEITimelinerContext>& InContext)
{
	Context = InContext;
	mPreviewScene = InArg._PreviewScene.Get();
	OnReceivedFocus = InArg._OnReceivedFocus;
	ViewRange = MakeAttributeLambda([this]()
		{ return Context.Pin()->EditingModel.IsValid() ?Context.Pin()->EditingModel.Pin()->ViewRange : FAnimatedRange(0.0, 0.0); });

	
	const TAttribute<EFrameNumberDisplayFormats> DisplayFormat = MakeAttributeLambda([]()
	{
		return GetDefault<UPersonaOptions>()->TimelineDisplayFormat;
	});

	const TAttribute<EFrameNumberDisplayFormats> DisplayFormatSecondary = MakeAttributeLambda([]()
	{
		return GetDefault<UPersonaOptions>()->TimelineDisplayFormat == EFrameNumberDisplayFormats::Frames ? EFrameNumberDisplayFormats::Seconds : EFrameNumberDisplayFormats::Frames;
	});

	const TAttribute<FFrameRate> TickResolution = MakeAttributeLambda([this]()
	{
		return FFrameRate(Context.Pin()->EditingModel.Pin()->GetTickResolution(),1);
	});

	const TAttribute<FFrameRate> DisplayRate = MakeAttributeLambda([this]()
	{
		return Context.Pin()->EditingModel.Pin()->GetFrameRate();
	});
	NumericTypeInterface = MakeShareable(new FFrameNumberInterface(DisplayFormat, 0, TickResolution, DisplayRate));
	SecondaryNumericTypeInterface = MakeShareable(new FFrameNumberInterface(DisplayFormatSecondary, 0, TickResolution, DisplayRate));

	FTimeSliderArgs TimeSliderArgs;
	{
		TimeSliderArgs.ScrubPosition = MakeAttributeLambda([this]()
			{ return Context.Pin()->EditingModel.Pin()?FFrameTime(
				Context.Pin()->EditingModel.Pin()->GetScrubPosition()):FFrameTime(0); });
		TimeSliderArgs.ViewRange = ViewRange;
		TimeSliderArgs.PlaybackRange = MakeAttributeLambda([this]()
			{ return Context.Pin()->EditingModel.Pin()?Context.Pin()->EditingModel.Pin()->GetPlaybackRange():TRange<FFrameNumber>(0, 0); });
		TimeSliderArgs.ClampRange = MakeAttributeLambda([this]()
			{ return Context.Pin()->EditingModel.Pin()?Context.Pin()->EditingModel.Pin()->WorkingRange:FAnimatedRange(0,0); });

		TimeSliderArgs.DisplayRate = DisplayRate;
		TimeSliderArgs.TickResolution = TickResolution;
		TimeSliderArgs.OnViewRangeChanged = FOnViewRangeChanged::CreateSP(this,
		&SEITimelineContainer::HandleViewRangeChanged);
		TimeSliderArgs.OnClampRangeChanged = FOnTimeRangeChanged::CreateSP(this,
			&SEITimelineContainer::HandleWorkingRangeChanged);
		TimeSliderArgs.IsPlaybackRangeLocked = true;
		TimeSliderArgs.PlaybackStatus = EMovieScenePlayerStatus::Stopped;
		TimeSliderArgs.NumericTypeInterface = NumericTypeInterface;
		TimeSliderArgs.OnScrubPositionChanged = FOnScrubPositionChanged::CreateSP(this
			, &SEITimelineContainer::HandleScrubPositionChanged);
	}

	TimeSliderController = Context.Pin()->SpawnCore.Pin()->CreateTimeSliderController(this,TimeSliderArgs);
	//只有Controller是在这个地方进行创建的。
	Context.Pin()->TimeSliderController = TimeSliderController;
	
	TSharedRef<FEITimeSliderController> TimeSliderControllerRef = TimeSliderController.ToSharedRef();
	
	TSharedRef<SScrollBar> ScrollBar = SNew(SScrollBar)
			.Thickness(FVector2D(5.0f, 5.0f));
	// Create the top slider
	const bool bMirrorLabels = false;
	ISequencerWidgetsModule& SequencerWidgets = FModuleManager::Get().LoadModuleChecked<ISequencerWidgetsModule>("SequencerWidgets");
	TopTimeSlider = SequencerWidgets.CreateTimeSlider(TimeSliderControllerRef, bMirrorLabels);

	// Create bottom time range slider
	TSharedRef<ITimeSlider> BottomTimeRange = SequencerWidgets.CreateTimeRange(
		FTimeRangeArgs(
			EShowRange::ViewRange | EShowRange::WorkingRange | EShowRange::PlaybackRange,
			TimeSliderControllerRef,
			EVisibility::Visible,
			NumericTypeInterface.ToSharedRef()
		),
		SequencerWidgets.CreateTimeRangeSlider(TimeSliderControllerRef)
	);

	
	//这里InModel刷新了一次Track

	//TrackArea = SNew(SEITrackArea, Context.Pin().ToSharedRef());
	TrackArea = Context.Pin()->SpawnCore.Pin()->CreateTrackArea(Context.Pin().ToSharedRef());
	//Outliner = SNew(SEITrackOutliner, TrackArea, Context.Pin().ToSharedRef())
	Outliner = Context.Pin()->SpawnCore.Pin()->CreateTrackOutliner(this);
	

	TrackArea->SetOutliner(Outliner);

	ColumnFillCoefficients[0] = 0.2f;
	ColumnFillCoefficients[1] = 0.8f;

	TAttribute<float> FillCoefficient_0, FillCoefficient_1;
	{
		FillCoefficient_0.Bind(TAttribute<float>::FGetter::CreateSP(this, &SEITimelineContainer::GetColumnFillCoefficient, 0));
		FillCoefficient_1.Bind(TAttribute<float>::FGetter::CreateSP(this, &SEITimelineContainer::GetColumnFillCoefficient, 1));
	}

	const int32 Column0 = 0, Column1 = 1;
	const int32 Row0 = 0, Row1 = 1, Row2 = 2, Row3 = 3, Row4 = 4;

	const float CommonPadding = 3.f;
	const FMargin ResizeBarPadding(4.f, 0, 0, 0);

	ChildSlot
	[
		SNew(SOverlay)
		+SOverlay::Slot()
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			[
				SNew(SOverlay)
				+SOverlay::Slot()
				[
					SNew(SGridPanel)
					.FillRow(1, 1.0f)
					.FillColumn(0, FillCoefficient_0)
					.FillColumn(1, FillCoefficient_1)

					// outliner search box
					+SGridPanel::Slot(Column0, Row0, SGridPanel::Layer(10))
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.FillWidth(1.0f)
						.VAlign(VAlign_Center)
						[
							SAssignNew(SearchBox, SSearchBox)
							.HintText(FTF("Filter"))
							.OnTextChanged(this, &SEITimelineContainer::OnOutlinerSearchChanged)
						]
						+SHorizontalBox::Slot()
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Center)
						.AutoWidth()
						.Padding(2.0f, 0.0f, 2.0f, 0.0f)
						[
							SNew(SBox)
							.MinDesiredWidth(30.0f)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							[
								// Current Play Time 
								SNew(SSpinBox<double>)
								.Style(&FAppStyle::GetWidgetStyle<FSpinBoxStyle>("Sequencer.PlayTimeSpinBox"))
								.Value_Lambda([this]() -> double
								{
									return Context.Pin()->EditingModel.Pin()->GetScrubPosition().Value;
								})
								.OnValueChanged(this, &SEITimelineContainer::SetPlayTime)
								.OnValueCommitted_Lambda([this](double InFrame, ETextCommit::Type)
								{
									SetPlayTime(InFrame);
								})
								.MinValue(TOptional<double>())
								.MaxValue(TOptional<double>())
								.TypeInterface(NumericTypeInterface)
								.Delta(this, &SEITimelineContainer::GetSpinboxDelta)
								.LinearDeltaSensitivity(25)
							]
						]
					]
					// main timeline area
					+SGridPanel::Slot(Column0, Row1, SGridPanel::Layer(10))
					.ColumnSpan(2)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						[
							SNew(SOverlay)
							+SOverlay::Slot()
							[
								SNew(SVerticalBox)
								+ SVerticalBox::Slot()
								.FillHeight(1.f)
								[
									SNew(SScrollBorder, Outliner.ToSharedRef())
									[
										SNew(SHorizontalBox)
										
										// outliner tree
										+ SHorizontalBox::Slot()
										.FillWidth(FillCoefficient_0)
										[
											SNew(SBox)
											[
												Outliner.ToSharedRef()
											]
										]

										// track area
										+ SHorizontalBox::Slot()
										.FillWidth(FillCoefficient_1)
										[
											SNew(SBox)
											.Padding(ResizeBarPadding)
											.Clipping(EWidgetClipping::ClipToBounds)
											[
												TrackArea.ToSharedRef()
											]
										]
									]
								]
							]

							+SOverlay::Slot()
							.HAlign(HAlign_Right)
							[
								ScrollBar
							]
						]
					]

					// Transport controls
					+SGridPanel::Slot(Column0, Row3, SGridPanel::Layer(10))
					.VAlign(VAlign_Center)
					.HAlign(HAlign_Center)
					[
						//SNew(SEITimelineControlPanel, Context.Pin().ToSharedRef())
						Context.Pin()->SpawnCore.Pin()->CreateTimelineControlPanel(this)
					]

					// Second column
					+SGridPanel::Slot(Column1, Row0)
					.Padding(ResizeBarPadding)
					.RowSpan(2)
					[
						SNew(SBorder)
						.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
						[
							SNew(SSpacer)
						]
					]

					+SGridPanel::Slot(Column1, Row0, SGridPanel::Layer(10))
					.Padding(ResizeBarPadding)
					[
						SNew( SBorder )
						.BorderImage( FAppStyle::GetBrush("ToolPanel.GroupBorder") )
						.BorderBackgroundColor( FLinearColor(.50f, .50f, .50f, 1.0f ) )
						.Padding(0.f)
						.Clipping(EWidgetClipping::ClipToBounds)
						[
							TopTimeSlider.ToSharedRef()
						]
					]

					// Overlay that draws the tick lines
					+SGridPanel::Slot(Column1, Row1, SGridPanel::Layer(10))
					.Padding(ResizeBarPadding)
					[
						Context.Pin()->SpawnCore.Pin()->CreateTimelineOverlay(this,1)
					]

					// Overlay that draws the scrub position
					+SGridPanel::Slot(Column1, Row1, SGridPanel::Layer(20))
					.Padding(ResizeBarPadding)
					[
						Context.Pin()->SpawnCore.Pin()->CreateTimelineOverlay(this,2)
					]

					// play range slider
					+SGridPanel::Slot(Column1, Row3, SGridPanel::Layer(10))
					.Padding(ResizeBarPadding)
					[
						SNew(SBorder)
						.BorderImage( FAppStyle::GetBrush("ToolPanel.GroupBorder") )
						.BorderBackgroundColor( FLinearColor(0.5f, 0.5f, 0.5f, 1.0f ) )
						.Clipping(EWidgetClipping::ClipToBounds)
						.Padding(0)
						[
							BottomTimeRange
						]
					]
				]
				+SOverlay::Slot()
				[
					// track area virtual splitter overlay
					SNew(SEITimelineSplitterOverlay)
					.Style(FAppStyle::Get(), "AnimTimeline.Outliner.Splitter")
					.Visibility(EVisibility::SelfHitTestInvisible)

					+ SSplitter::Slot()
					.Value(FillCoefficient_0)
					.OnSlotResized(SSplitter::FOnSlotResized::CreateSP(this, &SEITimelineContainer::OnColumnFillCoefficientChanged, 0))
					[
						SNew(SSpacer)
					]

					+ SSplitter::Slot()
					.Value(FillCoefficient_1)
					.OnSlotResized(SSplitter::FOnSlotResized::CreateSP(this, &SEITimelineContainer::OnColumnFillCoefficientChanged, 1))
					[
						SNew(SSpacer)
					]
				]
			]
		]
	];
}


FReply SEITimelineContainer::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if(MouseEvent.GetEffectingButton() == EKeys::RightMouseButton)
	{
		/*FWidgetPath WidgetPath = MouseEvent.GetEventPath() != nullptr ? *MouseEvent.GetEventPath() : FWidgetPath();

		const bool bCloseAfterSelection = true;
		FMenuBuilder MenuBuilder(bCloseAfterSelection, Model.Pin()->GetCommandList());
		
		MenuBuilder.BeginSection("SelectionEdit", LOCTEXT("TimelineSelectionEditSection", "Selection Edit"));
		{
			MenuBuilder.AddMenuEntry(FGenericCommands::Get().Paste);
		}
		MenuBuilder.EndSection();
		
		MenuBuilder.BeginSection("SnapOptions", LOCTEXT("SnapOptions", "Snapping"));
		{
			MenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().SnapToFrames);
			if (GetDefault<UPersonaOptions>()->bExposeNotifiesUICommands)
			{
				MenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().SnapToNotifies);
			}
			MenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().SnapToCompositeSegments);
			MenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().SnapToMontageSections);
		}
		MenuBuilder.EndSection();

		MenuBuilder.BeginSection("TimelineOptions", LOCTEXT("TimelineOptions", "Timeline Options") );
		{
			MenuBuilder.AddSubMenu(
				LOCTEXT("TimeFormat", "Time Format"),
				LOCTEXT("TimeFormatTooltip", "Choose the format of times we display in the timeline"),
				FNewMenuDelegate::CreateLambda([](FMenuBuilder& InMenuBuilder)
				{
					InMenuBuilder.BeginSection("TimeFormat", LOCTEXT("TimeFormat", "Time Format") );
					{
						InMenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().DisplaySeconds);
						InMenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().DisplayFrames);
					}
					InMenuBuilder.EndSection();

					InMenuBuilder.BeginSection("TimelineAdditional", LOCTEXT("TimelineAdditional", "Additional Display") );
					{
						InMenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().DisplayPercentage);
						InMenuBuilder.AddMenuEntry(FAnimSequenceTimelineCommands::Get().DisplaySecondaryFormat);
					}
					InMenuBuilder.EndSection();
				})
			);
		}
		MenuBuilder.EndSection();
		*/

		/*
		const UAnimSequence* AnimSequence = Cast<UAnimSequence>(Model.Pin()->GetAnimSequenceBase());
		if( AnimSequence )
		{
			FFrameTime MouseTime = TimeSliderController->GetFrameTimeFromMouse(MyGeometry, MouseEvent.GetScreenSpacePosition());
			const float CurrentFrameTime = static_cast<float>(MouseTime.AsDecimal() / static_cast<double>(Model.Pin()->GetTickResolution()));
			const float SequenceLength = AnimSequence->GetPlayLength();
			const uint32 NumKeys = AnimSequence->GetNumberOfSampledKeys();

			MenuBuilder.BeginSection("SequenceEditingContext", LOCTEXT("SequenceEditing", "Sequence Editing") );
			{
				float CurrentFrameFraction = CurrentFrameTime / SequenceLength;
				int32 CurrentKeyIndex = static_cast<int32>(CurrentFrameFraction * NumKeys);

				FUIAction Action;
				FText Label;

				//Menu - "Remove Before"
				//Only show this option if the selected frame is greater than frame 1 (first frame)
				if (CurrentKeyIndex > 0)
				{
					CurrentFrameFraction = static_cast<float>(CurrentKeyIndex) / static_cast<float>(NumKeys);

					//Corrected frame time based on selected frame number
					float CorrectedFrameTime = CurrentFrameFraction * SequenceLength;

					Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnCropAnimSequence, true, CorrectedFrameTime));
					Label = FText::Format(LOCTEXT("RemoveTillFrame", "Remove frame 0 to frame {0}"), FText::AsNumber(CurrentKeyIndex));
					MenuBuilder.AddMenuEntry(Label, LOCTEXT("RemoveBefore_ToolTip", "Remove sequence before current position"), FSlateIcon(), Action);
				}

				uint32 NextKeyIndex = CurrentKeyIndex + 1;

				//Menu - "Remove After"
				//Only show this option if next frame (CurrentKeyIndex + 1) is valid
				if (NextKeyIndex < NumKeys)
				{
					float NextFrameFraction = (float)NextKeyIndex / (float)NumKeys;
					float NextFrameTime = NextFrameFraction * SequenceLength;
					Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnCropAnimSequence, false, NextFrameTime));
					Label = FText::Format(LOCTEXT("RemoveFromFrame", "Remove from frame {0} to frame {1}"), FText::AsNumber(NextKeyIndex), FText::AsNumber(NumKeys));
					MenuBuilder.AddMenuEntry(Label, LOCTEXT("RemoveAfter_ToolTip", "Remove sequence after current position"), FSlateIcon(), Action);
				}

				MenuBuilder.AddMenuSeparator();

				//Corrected frame time based on selected frame number
				float CorrectedFrameTime = CurrentFrameFraction * SequenceLength;

				Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnInsertAnimSequence, true, CurrentKeyIndex));
				Label = FText::Format(LOCTEXT("InsertBeforeCurrentFrame", "Insert frame before {0}"), FText::AsNumber(CurrentKeyIndex));
				MenuBuilder.AddMenuEntry(Label, LOCTEXT("InsertBefore_ToolTip", "Insert a frame before current position"), FSlateIcon(), Action);

				Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnInsertAnimSequence, false, CurrentKeyIndex));
				Label = FText::Format(LOCTEXT("InsertAfterCurrentFrame", "Insert frame after {0}"), FText::AsNumber(CurrentKeyIndex));
				MenuBuilder.AddMenuEntry(Label, LOCTEXT("InsertAfter_ToolTip", "Insert a frame after current position"), FSlateIcon(), Action);

				MenuBuilder.AddMenuSeparator();

				//Corrected frame time based on selected frame number
				Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnShowPopupOfAppendAnimation, WidgetPath, true));
				MenuBuilder.AddMenuEntry(LOCTEXT("AppendBegin", "Append in the beginning"), LOCTEXT("AppendBegin_ToolTip", "Append in the beginning"), FSlateIcon(), Action);

				Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnShowPopupOfAppendAnimation, WidgetPath, false));
				MenuBuilder.AddMenuEntry(LOCTEXT("AppendEnd", "Append at the end"), LOCTEXT("AppendEnd_ToolTip", "Append at the end"), FSlateIcon(), Action);

				MenuBuilder.AddMenuSeparator();
				//Menu - "ReZero"
				Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnReZeroAnimSequence, CurrentKeyIndex));
				Label = FText::Format(LOCTEXT("ReZeroAtFrame", "Re-zero at frame {0}"), FText::AsNumber(CurrentKeyIndex));
				MenuBuilder.AddMenuEntry(Label, FText::Format(LOCTEXT("ReZeroAtFrame_ToolTip", "Resets the root track to (0, 0, 0) at frame {0} and apply the difference to all root transform of the sequence. It moves whole sequence to the amount of current root transform."), FText::AsNumber(CurrentKeyIndex)), FSlateIcon(), Action);

				const int32 FrameNumberForCurrentTime = INDEX_NONE;
				Action = FUIAction(FExecuteAction::CreateSP(this, &SEITimelineContainer::OnReZeroAnimSequence, FrameNumberForCurrentTime));
				Label = LOCTEXT("ReZeroAtCurrentTime", "Re-zero at current time");
				MenuBuilder.AddMenuEntry(Label, LOCTEXT("ReZeroAtCurrentTime_ToolTip", "Resets the root track to (0, 0, 0) at the animation scrub time and apply the difference to all root transform of the sequence. It moves whole sequence to the amount of current root transform."), FSlateIcon(), Action);
			}
			MenuBuilder.EndSection();
		}

		FSlateApplication::Get().PushMenu(SharedThis(this), WidgetPath, MenuBuilder.MakeWidget(), FSlateApplication::Get().GetCursorPos(), FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu));
		*/

		return FReply::Handled();
	}

	return FReply::Unhandled();
}

void SEITimelineContainer::OnCropAnimSequence( bool bFromStart, float CurrentTime )
{
	/*UAnimSingleNodeInstance* PreviewInstance = GetPreviewInstance();
	if(PreviewInstance)
	{
		float Length = PreviewInstance->GetLength();
		if (PreviewInstance->GetCurrentAsset())
		{
			UAnimSequence* AnimSequence = Cast<UAnimSequence>( PreviewInstance->GetCurrentAsset() );
			if( AnimSequence )
			{
				const FScopedTransaction Transaction( LOCTEXT("CropAnimSequence", "Crop Animation Sequence") );

				//Call modify to restore slider position
				PreviewInstance->Modify();

				//Call modify to restore anim sequence current state
				AnimSequence->Modify();
				
				const float TrimStart = bFromStart ? 0.f : CurrentTime;
				const float TrimEnd = bFromStart ? CurrentTime : AnimSequence->GetPlayLength();

				// Trim off the user-selected part of the raw anim data.
				UE::Anim::AnimationData::Trim(AnimSequence, TrimStart, TrimEnd, !bFromStart);


				//Resetting slider position to the first frame
				PreviewInstance->SetPosition( 0.0f, false );
			}
		}
	}*/
}

void SEITimelineContainer::OnAppendAnimSequence( bool bFromStart, int32 NumOfFrames )
{
	/*UAnimSingleNodeInstance* PreviewInstance = GetPreviewInstance();
	if(PreviewInstance && PreviewInstance->GetCurrentAsset())
	{
		UAnimSequence* AnimSequence = Cast<UAnimSequence>(PreviewInstance->GetCurrentAsset());
		if(AnimSequence)
		{
			const FScopedTransaction Transaction(LOCTEXT("InsertAnimSequence", "Insert Animation Sequence"));

			//Call modify to restore slider position
			PreviewInstance->Modify();

			//Call modify to restore anim sequence current state
			AnimSequence->Modify();

			// Crop the raw anim data.
			const int32 StartFrame = (bFromStart)? 0 : AnimSequence->GetDataModel()->GetNumberOfFrames() - 1;
			UE::Anim::AnimationData::DuplicateKeys(AnimSequence, StartFrame, NumOfFrames, StartFrame);
		}
	}*/
}

void SEITimelineContainer::OnInsertAnimSequence( bool bBefore, int32 CurrentFrame )
{
	/*UAnimSingleNodeInstance* PreviewInstance = GetPreviewInstance();
	if(PreviewInstance && PreviewInstance->GetCurrentAsset())
	{
		UAnimSequence* AnimSequence = Cast<UAnimSequence>(PreviewInstance->GetCurrentAsset());
		if(AnimSequence)
		{
			const FScopedTransaction Transaction(LOCTEXT("InsertAnimSequence", "Insert Animation Sequence"));

			//Call modify to restore slider position
			PreviewInstance->Modify();

			//Call modify to restore anim sequence current state
			AnimSequence->Modify();

			// Crop the raw anim data.
			const int32 StartFrame = (bBefore)? CurrentFrame : CurrentFrame + 1;
			UE::Anim::AnimationData::DuplicateKeys(AnimSequence, StartFrame, 1, CurrentFrame);
		}
	}*/
}

void SEITimelineContainer::OnReZeroAnimSequence(int32 FrameIndex)
{
	/*UAnimSingleNodeInstance* PreviewInstance = GetPreviewInstance();
	if(PreviewInstance)
	{
		UDebugSkelMeshComponent* PreviewSkelComp =  Model.Pin()->GetPreviewScene()->GetPreviewMeshComponent();

		if (PreviewInstance->GetCurrentAsset() && PreviewSkelComp )
		{
			if(UAnimSequence* AnimSequence = Cast<UAnimSequence>( PreviewInstance->GetCurrentAsset()))
			{
				const FScopedTransaction Transaction( LOCTEXT("ReZeroAnimation", "ReZero Animation Sequence"));
				if (const USkeleton* Skeleton = AnimSequence->GetSkeleton())
				{
					const FName RootBoneName = Skeleton->GetReferenceSkeleton().GetBoneName(0);

					if(AnimSequence->GetDataModel()->IsValidBoneTrackName(RootBoneName))
					{
						TArray<FVector3f> PosKeys;
						TArray<FQuat4f> RotKeys;
						TArray<FVector3f> ScaleKeys;

						TArray<FTransform> BoneTransforms;
						AnimSequence->GetDataModel()->GetBoneTrackTransforms(RootBoneName, BoneTransforms);

						PosKeys.SetNum(BoneTransforms.Num());
						RotKeys.SetNum(BoneTransforms.Num());
						ScaleKeys.SetNum(BoneTransforms.Num());

						// Find vector that would translate current root bone location onto origin.
						FVector FrameTransform = FVector::ZeroVector;
						if (FrameIndex == INDEX_NONE)
						{
							// Use current transform
							FrameTransform = PreviewSkelComp->GetComponentSpaceTransforms()[0].GetLocation();
						}
						else if(BoneTransforms.IsValidIndex(FrameIndex))
						{
							// Use transform at frame
							FrameTransform = BoneTransforms[FrameIndex].GetLocation();
						}

						FVector ApplyTranslation = -1.f * FrameTransform;

						// Convert into world space
						const FVector WorldApplyTranslation = PreviewSkelComp->GetComponentTransform().TransformVector(ApplyTranslation);
						ApplyTranslation = PreviewSkelComp->GetComponentTransform().InverseTransformVector(WorldApplyTranslation);

						for(int32 KeyIndex = 0; KeyIndex < BoneTransforms.Num(); KeyIndex++)
						{
							PosKeys[KeyIndex] = FVector3f(BoneTransforms[KeyIndex].GetLocation() + ApplyTranslation);
							RotKeys[KeyIndex] = FQuat4f(BoneTransforms[KeyIndex].GetRotation());
							ScaleKeys[KeyIndex] = FVector3f(BoneTransforms[KeyIndex].GetScale3D());
						}

						IAnimationDataController& Controller = AnimSequence->GetController();
						Controller.SetBoneTrackKeys(RootBoneName, PosKeys, RotKeys, ScaleKeys);
					}
				}
			}
		}
	}*/
}

void SEITimelineContainer::OnShowPopupOfAppendAnimation(FWidgetPath WidgetPath, bool bBegin)
{
	TSharedRef<STextEntryPopup> TextEntry =
		SNew(STextEntryPopup)
		.Label(FTF("Append"))
		.OnTextCommitted(this, &SEITimelineContainer::OnSequenceAppendedCalled, bBegin);

	// Show dialog to enter new track name
	FSlateApplication::Get().PushMenu(
		SharedThis(this),
		WidgetPath,
		TextEntry,
		FSlateApplication::Get().GetCursorPos(),
		FPopupTransitionEffect(FPopupTransitionEffect::TypeInPopup)
		);
}

void SEITimelineContainer::OnSequenceAppendedCalled(const FText & InNewGroupText, ETextCommit::Type CommitInfo, bool bBegin)
{
	// just a concern
	const static int32 MaxFrame = 1000;

	// handle only onEnter. This is a big thing to apply when implicit focus change or any other event
	if (CommitInfo == ETextCommit::OnEnter)
	{
		int32 NumFrames = FCString::Atoi(*InNewGroupText.ToString());
		if (NumFrames > 0 && NumFrames < MaxFrame)
		{
			OnAppendAnimSequence(bBegin, NumFrames);
			FSlateApplication::Get().DismissAllMenus();
		}
	}
}

TSharedRef<INumericTypeInterface<double>> SEITimelineContainer::GetNumericTypeInterface() const
{
	return NumericTypeInterface.ToSharedRef();
}

// FFrameRate::ComputeGridSpacing doesnt deal well with prime numbers, so we have a custom impl here
static bool ComputeGridSpacing(const FFrameRate& InFrameRate, float PixelsPerSecond, double& OutMajorInterval, int32& OutMinorDivisions, float MinTickPx, float DesiredMajorTickPx)
{
	// First try built-in spacing
	const bool bResult = InFrameRate.ComputeGridSpacing(PixelsPerSecond, OutMajorInterval, OutMinorDivisions, MinTickPx, DesiredMajorTickPx);
	if(!bResult || OutMajorInterval == 1.0)
	{
		if (PixelsPerSecond <= 0.f)
		{
			return false;
		}

		const int32 RoundedFPS = static_cast<int32>(FMath::RoundToInt(InFrameRate.AsDecimal()));

		if (RoundedFPS > 0)
		{
			// Showing frames
			TArray<int32, TInlineAllocator<10>> CommonBases;

			// Divide the rounded frame rate by 2s, 3s or 5s recursively
			{
				const int32 Denominators[] = { 2, 3, 5 };

				int32 LowestBase = RoundedFPS;
				for (;;)
				{
					CommonBases.Add(LowestBase);
	
					if (LowestBase % 2 == 0)      { LowestBase = LowestBase / 2; }
					else if (LowestBase % 3 == 0) { LowestBase = LowestBase / 3; }
					else if (LowestBase % 5 == 0) { LowestBase = LowestBase / 5; }
					else
					{ 
						int32 LowestResult = LowestBase;
						for(int32 Denominator : Denominators)
						{
							int32 Result = LowestBase / Denominator;
							if(Result > 0 && Result < LowestResult)
							{
								LowestResult = Result;
							}
						}

						if(LowestResult < LowestBase)
						{
							LowestBase = LowestResult;
						}
						else
						{
							break;
						}
					}
				}
			}

			Algo::Reverse(CommonBases);

			const int32 Scale     = static_cast<int32>(FMath::CeilToInt(DesiredMajorTickPx / PixelsPerSecond * InFrameRate.AsDecimal()));
			const int32 BaseIndex = FMath::Min(Algo::LowerBound(CommonBases, Scale), CommonBases.Num()-1);
			const int32 Base      = CommonBases[BaseIndex];

			const int32 MajorIntervalFrames = FMath::CeilToInt(Scale / static_cast<float>(Base)) * Base;
			OutMajorInterval  = MajorIntervalFrames * InFrameRate.AsInterval();

			// Find the lowest number of divisions we can show that's larger than the minimum tick size
			OutMinorDivisions = 0;
			for (int32 DivIndex = 0; DivIndex < BaseIndex; ++DivIndex)
			{
				if (Base % CommonBases[DivIndex] == 0)
				{
					const int32 MinorDivisions = MajorIntervalFrames/CommonBases[DivIndex];
					if (OutMajorInterval / MinorDivisions * PixelsPerSecond >= MinTickPx)
					{
						OutMinorDivisions = MinorDivisions;
						break;
					}
				}
			}
		}
	}

	return OutMajorInterval != 0;
}

bool SEITimelineContainer::GetGridMetrics(float PhysicalWidth, double& OutMajorInterval, int32& OutMinorDivisions) const
{
	const FSlateFontInfo SmallLayoutFont = FCoreStyle::GetDefaultFontStyle("Regular", 8);
	const TSharedRef<FSlateFontMeasure> FontMeasureService = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();

	const FFrameRate DisplayRate = Context.Pin()->EditingModel.Pin()->GetFrameRate();
	const double BiggestTime = ViewRange.Get().GetUpperBoundValue();
	const FString TickString = NumericTypeInterface->ToString((BiggestTime * DisplayRate).FrameNumber.Value);
	const FVector2D MaxTextSize = FontMeasureService->Measure(TickString, SmallLayoutFont);

	constexpr float MajorTickMultiplier = 2.f;

	const float MinTickPx = static_cast<float>(MaxTextSize.X) + 5.f;
	const float DesiredMajorTickPx = static_cast<float>(MaxTextSize.X) * MajorTickMultiplier;

	if (PhysicalWidth > 0 && DisplayRate.AsDecimal() > 0)
	{
		return ComputeGridSpacing(
			DisplayRate,
			static_cast<float>(PhysicalWidth / ViewRange.Get().Size<double>()),
			OutMajorInterval,
			OutMinorDivisions,
			MinTickPx,
			DesiredMajorTickPx);
	}

	return false;
}



void SEITimelineContainer::OnOutlinerSearchChanged( const FText& Filter )
{
	FilterText = Filter;

	//Outliner->RefreshFilter();
}

void SEITimelineContainer::OnColumnFillCoefficientChanged(float FillCoefficient, int32 ColumnIndex)
{
	ColumnFillCoefficients[ColumnIndex] = FillCoefficient;
}

void SEITimelineContainer::HandleKeyComplete()
{
//	Model.Pin()->RefreshTracks();
}



void SEITimelineContainer::HandleViewRangeChanged(TRange<double> InRange, EViewRangeInterpolation InInterpolation)
{
	if (Context.Pin()->EditingModel.Pin())
	{
		Context.Pin()->EditingModel.Pin()->HandleViewRangeChanged(InRange,InInterpolation);
	}
}

void SEITimelineContainer::HandleWorkingRangeChanged(TRange<double> InRange)
{
	if (Context.Pin()->EditingModel.Pin())
	{
		Context.Pin()->EditingModel.Pin()->HandleWorkingRangeChanged(InRange);
	}
}

TWeakPtr<FEITimelinerContext> SEITimelineContainer::GetPreviewInstanceExecutor() const
{
	if (mPreviewScene)
	{
		return mPreviewScene->GetPreviewInstance();
	}
//	UDebugSkelMeshComponent* PreviewMeshComponent = Model.Pin()->GetPreviewScene()->GetPreviewMeshComponent();
//	return PreviewMeshComponent && PreviewMeshComponent->IsPreviewOn()? PreviewMeshComponent->PreviewInstance : nullptr;
	return nullptr;
}
TWeakPtr<FEITimelinerContext> SEITimelineContainer::GetPreviewInstance() const
{
	return GetPreviewInstanceExecutor();
}
void SEITimelineContainer::HandleScrubPositionChanged(FFrameTime NewScrubPosition, bool bIsScrubbing, bool bEvaluate) const
{
	/*if (UAnimSingleNodeInstance* PreviewInstance = GetPreviewInstance())
	{
		if(PreviewInstance->IsPlaying())
		{
			PreviewInstance->SetPlaying(false);
		}
	}

	Model.Pin()->SetScrubPosition(NewScrubPosition);*/

	if(Context.Pin()->EditingModel.Pin())
	{
		Context.Pin()->EditingModel.Pin()->SetScrubPosition(NewScrubPosition);
	}
	
}

double SEITimelineContainer::GetSpinboxDelta() const
{
	return FFrameRate(Context.Pin()->EditingModel.Pin()->GetTickResolution(),1).AsDecimal()
	* Context.Pin()->EditingModel.Pin()->GetFrameRate().AsInterval();
}

void SEITimelineContainer::SetPlayTime(double InFrameTime)
{
	/*if (UAnimSingleNodeInstance* PreviewInstance = GetPreviewInstance())
	{
		PreviewInstance->SetPlaying(false);
		PreviewInstance->SetPosition(static_cast<float>(InFrameTime / static_cast<double>(Model.Pin()->GetTickResolution())));
	}*/
}

SEITimelineContainer::~SEITimelineContainer()
{

	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] TimelineContainer 被摧毁"))
}

#undef LOCTEXT_NAMESPACE

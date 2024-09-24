#include "EITimelinerCoreBase.h"

#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEINotifyLibrary.h"
#include "EITimeliner/EditorComponents/FEIPreviewScene.h"
#include "EITimeliner/EditorComponents/FEITimelineTrack.h"
#include "EITimeliner/EditorComponents/FEITimeSliderController.h"
#include "EITimeliner/EditorComponents/FEIViewportClient.h"
#include "EITimeliner/EditorComponents/Widgets/SEIEditorViewport.h"
#include "EITimeliner/EditorComponents/Widgets/SEINotifyPickerRow.h"
#include "EITimeliner/EditorComponents/Widgets/SEITimelineContainer.h"
#include "EITimeliner/EditorComponents/Widgets/SEITimelineControlPanel.h"
#include "EITimeliner/EditorComponents/Widgets/SEITimelineNode.h"
#include "EITimeliner/EditorComponents/Widgets/SEITimelineOverlay.h"
#include "EITimeliner/EditorComponents/Widgets/SEITimelineSplitterOverlay.h"
#include "EITimeliner/EditorComponents/Widgets/SEIToolBox.h"
#include "EITimeliner/EditorComponents/Widgets/SEITrack.h"
#include "EITimeliner/EditorComponents/Widgets/SEITrackArea.h"
#include "EITimeliner/EditorComponents/Widgets/SEITrackOutliner.h"
#include "EITimeliner/EditorComponents/Widgets/SEITrackOutlinerItem.h"

TSharedRef<SEITimelineContainer> FEITimelinerCoreBase::CreateTimelineContainer(
	TWeakPtr<FEIPreviewScene> PreviewScene,
	const TSharedRef<FEITimelinerContext> Context)
{
	return SNew(SEITimelineContainer,Context).PreviewScene(PreviewScene.Pin().Get());
}

TSharedRef<SEIEditorViewport> FEITimelinerCoreBase::CreateEditorViewPort(
	const FEIEditorViewportRequireArgs& Args, const TSharedRef<FEITimelinerContext>& InContext)
{
	return SNew(SEIEditorViewport, Args, InContext);
}

TSharedRef<SEITrackArea> FEITimelinerCoreBase::CreateTrackArea(const TSharedRef<FEITimelinerContext>& InContext)
{
	return SNew(SEITrackArea, InContext);
}

TSharedRef<SEITrackOutliner> FEITimelinerCoreBase::CreateTrackOutliner(SEITimelineContainer* Container)
{
	TSharedRef<SScrollBar> ScrollBar = SNew(SScrollBar)
		.Thickness(FVector2D(5.0f, 5.0f));

	return SNew(SEITrackOutliner, Container->TrackArea.ToSharedRef(), Container->Context.Pin().ToSharedRef())
	.ExternalScrollbar(ScrollBar)
		.Clipping(EWidgetClipping::ClipToBounds)
		.FilterText_Lambda([=](){ return Container->FilterText; });;
}

TSharedRef<SEITrackOutlinerItem> FEITimelinerCoreBase::CreateTrackOutlinerItem(SEITrackOutliner* OutLiner,
	TSharedRef<FEITimelineTrack> InTrack,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(SEITrackOutlinerItem, OwnerTable,InTrack)
	.OnGenerateWidgetForColumn(OutLiner,&SEITrackOutliner::GenerateWidgetForColumn)
	.HighlightText(OutLiner->FilterText);
}

TSharedRef<SEITimelineControlPanel> FEITimelinerCoreBase::CreateTimelineControlPanel(SEITimelineContainer* Container)
{
	return SNew(SEITimelineControlPanel,Container->Context.Pin().ToSharedRef());
}

TSharedRef<SEITimelineOverlay> FEITimelinerCoreBase::CreateTimelineOverlay(SEITimelineContainer* Container,int Type)
{
	if (Type==1)
	{
		return SNew(SEITimelineOverlay,Container->Context.Pin().ToSharedRef())
		.Visibility( EVisibility::HitTestInvisible )
		.DisplayScrubPosition( false )
		.DisplayTickLines( true )
		.Clipping(EWidgetClipping::ClipToBounds)
		.PaintPlaybackRangeArgs(FPaintPlaybackRangeArgs(FAppStyle::GetBrush("Sequencer.Timeline.PlayRange_L")
		, FAppStyle::GetBrush("Sequencer.Timeline.PlayRange_R"), 6.f));
	}
	else if (Type==2)
	{
		return SNew(SEITimelineOverlay,Container->Context.Pin().ToSharedRef())
		.Visibility( EVisibility::HitTestInvisible )
		.DisplayScrubPosition( true )
		.DisplayTickLines( false )
		.Clipping(EWidgetClipping::ClipToBounds);		
	}


	//不会走这里
	return SNew(SEITimelineOverlay,Container->Context.Pin().ToSharedRef())
		.Visibility( EVisibility::HitTestInvisible )
		.DisplayScrubPosition( true )
		.DisplayTickLines( false )
		.Clipping(EWidgetClipping::ClipToBounds);
}

TSharedRef<SEITimelineSplitterOverlay> FEITimelinerCoreBase::CreateTimelineSplitterOverlay(SEITimelineContainer* Container)
{
	return SNew(SEITimelineSplitterOverlay)
	.Style(FAppStyle::Get(), "AnimTimeline.Outliner.Splitter")
	.Visibility(EVisibility::SelfHitTestInvisible);
}

TSharedRef<SEITimelineNode> FEITimelinerCoreBase::CreateTimelineNode(
	const TSharedRef<FEITimelinerContext>& InContext, int trackIndex)
{
	return SNew(SEITimelineNode,InContext).TrackId(trackIndex);
}

TSharedRef<SEITrack> FEITimelinerCoreBase::CreateTrack(const TSharedRef<FEITimelineTrack> InTrack,
	const TSharedRef<SEITrackOutliner> InOutLiner, const TSharedRef<FEITimelinerContext>& InContext,int trackId)
{
	return SNew(SEITrack,InTrack,InOutLiner,InContext).TrackId(trackId).ViewRange(TAttribute<FAnimatedRange>::CreateLambda([=]()
			{
				return InContext->EditingModel.Pin()->GetViewRange();
			}))
		[
			 InTrack->GenerateContainerWidgetForTimeline()
		];
}
TSharedPtr<FEIViewportClient> FEITimelinerCoreBase::CreateViewportClient(SEIEditorViewport* Viewport)
{
	return MakeShareable(
		new FEIViewportClient(Viewport->Context.Pin()->PreviewScene.Pin().ToSharedRef(),
		StaticCastSharedRef<SEIEditorViewport>(Viewport->AsShared()),
		Viewport->EditorTool.Pin().ToSharedRef(),
		Viewport->Context.Pin().ToSharedRef()));
}

TSharedPtr<FEITimeSliderController> FEITimelinerCoreBase::CreateTimeSliderController(SEITimelineContainer* Container, FTimeSliderArgs& Args)
{
	return MakeShareable(new FEITimeSliderController
		(Args,
		StaticCastSharedRef<SEITimelineContainer>(Container->AsShared()),
		Container->SecondaryNumericTypeInterface,
		Container->Context.Pin()));
}

TSharedRef<FEIPreviewScene> FEITimelinerCoreBase::CreatePreviewScene()
{
	return MakeShareable(new FEIPreviewScene(FPreviewScene::ConstructionValues().
		AllowAudioPlayback(true).ShouldSimulatePhysics(true),0));
}

TSharedPtr<FEITimelineEditingModel> FEITimelinerCoreBase::CreateModel(UObject* Object,const TSharedRef<FEITimelinerContext>& Context)
{
	TSharedPtr<FEITimelineEditingModel> Model = MakeShareable(new FEITimelineEditingModel);
	Model->EditingInstacne = Object;
	Model->Context = Context;
	Model->ReconcileTracks();
	return Model;
}

TSharedPtr<FEINotifyLibrary> FEITimelinerCoreBase::CreateNotifyLibrary(const TSharedRef<FEITimelinerContext>& Context)
{
	TSharedPtr<FEINotifyLibrary> NotifyLibrary = MakeShareable(new FEINotifyLibrary);
	NotifyLibrary->Context = Context;
	NotifyLibrary->Initialize();
	return NotifyLibrary;
}
TSharedRef<SEIToolBox> FEITimelinerCoreBase::CreateToolBox(const TSharedRef<FEITimelinerContext>& Context)
{
	return SNew(SEIToolBox,Context);
}

TSharedRef<SEINotifyPickerRow> FEITimelinerCoreBase::CreateNotifyPickerRow(
	const TSharedRef<FEITimelinerContext>& Context, TSharedPtr<UEINotifyItem> Item)
{
	return SNew(SEINotifyPickerRow,Context,Item.ToSharedRef());
}

FEITimelinerCoreBase::~FEITimelinerCoreBase()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] Core 被摧毁"))
}

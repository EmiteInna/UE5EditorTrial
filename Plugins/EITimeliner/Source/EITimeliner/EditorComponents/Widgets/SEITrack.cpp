#include "SEITrack.h"

#include "SEITimelineNode.h"
#include "SEITrackOutliner.h"
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"
#include "EITimeliner/EditorComponents/FEITimelineTrack.h"

void SEITrack::Construct(const FArguments& InArgs,
                         const TSharedRef<FEITimelineTrack>& InTrack,
                         const TSharedRef<SEITrackOutliner>& InOutliner,
							const TSharedRef<FEITimelinerContext>& InContext)
{
	WeakTrack = InTrack;
	WeakOutliner = InOutliner;
	ViewRange = InArgs._ViewRange;
	Context = InContext;
	trackId = InArgs._TrackId.Get();
	
	ChildSlot
	.HAlign(HAlign_Fill)
	.Padding(0)
	[
		SNew(SOverlay)
		+SOverlay::Slot()
		[
			InArgs._Content.Widget
		]
		+SOverlay::Slot()
		[
			Context.Pin()->SpawnCore.Pin()->CreateTimelineNode(Context.Pin().ToSharedRef(),trackId)
			//SNew(SEITimelineNode,Context.Pin().ToSharedRef())	
		]
	];
}

int32 SEITrack::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	static const FName BorderName("AnimTimeline.Outliner.DefaultBorder");
	static const FName SelectionColorName("SelectionColor");

	TSharedPtr<FEITimelineTrack> Track = WeakTrack.Pin();
	if(Track.IsValid())
	{
		if (Track->IsVisible())
		{
			float TotalNodeHeight = Track->GetHeight() + Track->GetPadding().Combined();

			// draw hovered
			if (Track->IsHovered())
			{
				FSlateDrawElement::MakeBox(
					OutDrawElements,
					LayerId++,
					AllottedGeometry.ToPaintGeometry(
						FVector2D(AllottedGeometry.GetLocalSize().X, TotalNodeHeight),
						FSlateLayoutTransform()
					),
					FAppStyle::GetBrush(BorderName),
					ESlateDrawEffect::None,
					FLinearColor(1.0f, 1.0f, 1.0f, 0.05f)
				);
			}

			// Draw track bottom border
			FSlateDrawElement::MakeLines(
				OutDrawElements,
				LayerId++,
				AllottedGeometry.ToPaintGeometry(),
				TArray<FVector2D>({ FVector2D(0.0f, TotalNodeHeight), FVector2D(AllottedGeometry.GetLocalSize().X, TotalNodeHeight) }),
				ESlateDrawEffect::None,
				FLinearColor(0.1f, 0.1f, 0.1f, 0.3f)
			);
		}
	}

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId + 1, InWidgetStyle, bParentEnabled);
}

void SEITrack::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	FVector2D ThisFrameDesiredSize = GetDesiredSize();

	if (LastDesiredSize.IsSet() && ThisFrameDesiredSize.Y != LastDesiredSize.GetValue().Y)
	{
		TSharedPtr<SEITrackOutliner> Outliner = WeakOutliner.Pin();
		if (Outliner.IsValid())
		{
			Outliner->RequestListRefresh();
		}
	}

	LastDesiredSize = ThisFrameDesiredSize;
}

void SEITrack::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseEnter(MyGeometry, MouseEvent);

	TSharedPtr<FEITimelineTrack> Track = WeakTrack.Pin();
	if(Track.IsValid())
	{
		Track->SetHovered(true);
	}
}

void SEITrack::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	SCompoundWidget::OnMouseLeave(MouseEvent);

	TSharedPtr<FEITimelineTrack> Track = WeakTrack.Pin();
	if(Track.IsValid())
	{
		Track->SetHovered(false);
	}
}

FReply SEITrack::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FEITimelineTrack> Track = WeakTrack.Pin();
	TSharedPtr<SEITrackOutliner> Outliner = WeakOutliner.Pin();
	if(Track.IsValid() && Track->SupportsSelection())
	{
		if(MouseEvent.GetModifierKeys().IsControlDown())
		{
			Outliner->SetItemSelection(Track.ToSharedRef(), true, ESelectInfo::OnMouseClick);
		}
		else if(MouseEvent.GetModifierKeys().IsShiftDown())
		{
			Outliner->Private_SelectRangeFromCurrentTo(Track.ToSharedRef());
		}
		else
		{
			if(MouseEvent.GetEffectingButton() != EKeys::RightMouseButton || !Outliner->IsItemSelected(Track.ToSharedRef()))
			{
				Outliner->ClearSelection();
			}
			Outliner->SetItemSelection(Track.ToSharedRef(), true, ESelectInfo::OnMouseClick);
		}
			
		return FReply::Handled();
	}

	return FReply::Unhandled();
}

float SEITrack::GetPhysicalPosition() const
{
	TSharedPtr<FEITimelineTrack> Track = WeakTrack.Pin();
	if(Track.IsValid())
	{
		return WeakOutliner.Pin()->ComputeTrackPosition(Track.ToSharedRef()).Get(0.0f);
	}
	return 0.0f;
}

FVector2D SEITrack::ComputeDesiredSize(float LayoutScale) const
{
	TSharedPtr<FEITimelineTrack> Track = WeakTrack.Pin();
	if(Track.IsValid())
	{
		return FVector2D(100.f, Track->GetHeight() + Track->GetPadding().Combined());
	}

	return FVector2D::ZeroVector;
}

SEITrack::~SEITrack()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] Track 被摧毁"))
}

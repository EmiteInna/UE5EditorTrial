#include "SStoryEventTrackArea.h"
#include "SStoryEventTrack.h"
#include "SStoryTrackOutliner.h"
#include "StoryTimelineTrack.h"
#include "KuruStoryModule/Data/DataEditorWidgets/KuruTimeSliderController.h"
#include "Widgets/SWeakWidget.h"

FStoryEventTrackAreaSlot::FStoryEventTrackAreaSlot(const TSharedPtr<SStoryEventTrack>& InSlotContent)
	:TAlignmentWidgetSlotMixin<FStoryEventTrackAreaSlot>(HAlign_Fill,VAlign_Top)
{
	TrackWidget = InSlotContent;

	AttachWidget(
		SNew(SWeakWidget)
		.Clipping(EWidgetClipping::ClipToBounds)
		.PossiblyNullContent(InSlotContent));
}

float FStoryEventTrackAreaSlot::GetVerticalOffset() const
{
	TSharedPtr<SStoryEventTrack> PinnedTrackWidget = TrackWidget.Pin();
	return PinnedTrackWidget.IsValid() ? PinnedTrackWidget->GetPhysicalPosition() : 0.f;
}

void SStoryEventTrackArea::Construct(const FArguments& InArgs, UKuruStoryClipData* InModel,
                                     const TSharedRef<FKuruTimeSliderController>& InTimeSliderController)
{
	WeakModel = InModel;
	WeakTimeSliderController = InTimeSliderController;
}

void SStoryEventTrackArea::Empty()
{
	TrackSlots.Empty();
	Children.Empty();
}

void SStoryEventTrackArea::AddTrackSlot(const TSharedRef<FStoryTimelineTrack>& InTrack,
	const TSharedPtr<SStoryEventTrack>& InTrackWidget)
{
	TrackSlots.Add(InTrack, InTrackWidget);
	Children.AddSlot(FStoryEventTrackAreaSlot::FSlotArguments(MakeUnique<FStoryEventTrackAreaSlot>(InTrackWidget)));
}

TSharedPtr<SStoryEventTrack> SStoryEventTrackArea::FindTrackSlot(const TSharedRef<FStoryTimelineTrack>& InTrack)
{
	TrackSlots.Remove(TWeakPtr<FStoryTimelineTrack>());
	return TrackSlots.FindRef(InTrack).Pin();
}

void SStoryEventTrackArea::SetOutliner(const TSharedPtr<SStoryTrackOutliner>& InOutliner)
{
	WeakOutliner = InOutliner;
}

FReply SStoryEventTrackArea::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FKuruTimeSliderController> TimeSliderController = WeakTimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{
		WeakOutliner.Pin()->ClearSelection();
	//todo 	WeakModel.Pin()->ClearDetailsView();

		TimeSliderController->OnMouseButtonDown(*this, MyGeometry, MouseEvent);
	}

	return FReply::Unhandled();
}

FReply SStoryEventTrackArea::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FKuruTimeSliderController> TimeSliderController = WeakTimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{

		return WeakTimeSliderController.Pin()->OnMouseButtonUp(*this, MyGeometry, MouseEvent);
	}

	return FReply::Unhandled();
}

FReply SStoryEventTrackArea::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	UpdateHoverStates(MyGeometry, MouseEvent);

	const TSharedPtr<FKuruTimeSliderController> TimeSliderController = WeakTimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{
		FReply Reply = WeakTimeSliderController.Pin()->OnMouseMove(*this, MyGeometry, MouseEvent);

		// Handle right click scrolling on the track area
		if (Reply.IsEventHandled())
		{
			if (MouseEvent.IsMouseButtonDown(EKeys::RightMouseButton) && HasMouseCapture())
			{
				WeakOutliner.Pin()->ScrollByDelta(static_cast<float>(-MouseEvent.GetCursorDelta().Y));
			}
		}

		return Reply;
	}

	return FReply::Unhandled();
}

void SStoryEventTrackArea::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	
}

FReply SStoryEventTrackArea::OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FKuruTimeSliderController> TimeSliderController = WeakTimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{
		FReply Reply = WeakTimeSliderController.Pin()->OnMouseWheel(*this, MyGeometry, MouseEvent);
		if (Reply.IsEventHandled())
		{
			return Reply;
		}

		const float ScrollAmount = -MouseEvent.GetWheelDelta() * GetGlobalScrollAmount();
		WeakOutliner.Pin()->ScrollByDelta(ScrollAmount);

		return FReply::Handled();
	}

	return FReply::Unhandled();
}

int32 SStoryEventTrackArea::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	// paint the child widgets
	FArrangedChildren ArrangedChildren(EVisibility::Visible);
	ArrangeChildren(AllottedGeometry, ArrangedChildren);

	const FPaintArgs NewArgs = Args.WithNewParent(this);

	for (int32 ChildIndex = 0; ChildIndex < ArrangedChildren.Num(); ++ChildIndex)
	{
		FArrangedWidget& CurWidget = ArrangedChildren[ChildIndex];
		FSlateRect ChildClipRect = MyCullingRect.IntersectionWith(CurWidget.Geometry.GetLayoutBoundingRect());
		const int32 ThisWidgetLayerId = CurWidget.Widget->Paint(NewArgs, CurWidget.Geometry, ChildClipRect, OutDrawElements, LayerId + 2, InWidgetStyle, bParentEnabled);

		LayerId = FMath::Max(LayerId, ThisWidgetLayerId);
	}

	return LayerId;
}

FCursorReply SStoryEventTrackArea::OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const
{
	if (CursorEvent.IsMouseButtonDown(EKeys::RightMouseButton) && HasMouseCapture())
	{
		return FCursorReply::Cursor(EMouseCursor::GrabHandClosed);
	}
	else
	{
		TSharedPtr<FKuruTimeSliderController> TimeSliderController = WeakTimeSliderController.Pin();
		if(TimeSliderController.IsValid())
		{
			return TimeSliderController->OnCursorQuery(SharedThis(this), MyGeometry, CursorEvent);
		}
	}

	return FCursorReply::Unhandled();
}

void SStoryEventTrackArea::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	CachedGeometry = AllottedGeometry;

	for (int32 Index = 0; Index < Children.Num();)
	{
		if (!StaticCastSharedRef<SWeakWidget>(Children[Index].GetWidget())->ChildWidgetIsValid())
		{
			Children.RemoveAt(Index);
		}
		else
		{
			++Index;
		}
	}
}

void SStoryEventTrackArea::OnArrangeChildren(const FGeometry& AllottedGeometry,
	FArrangedChildren& ArrangedChildren) const
{
	for (int32 ChildIndex = 0; ChildIndex < Children.Num(); ++ChildIndex)
	{
		const FStoryEventTrackAreaSlot& CurChild = Children[ChildIndex];

		const EVisibility ChildVisibility = CurChild.GetWidget()->GetVisibility();
		if (!ArrangedChildren.Accepts(ChildVisibility))
		{
			continue;
		}

		const FMargin Padding(0, CurChild.GetVerticalOffset(), 0, 0);

		const AlignmentArrangeResult XResult = AlignChild<Orient_Horizontal>(static_cast<float>(AllottedGeometry.GetLocalSize().X), CurChild, Padding, 1.0f, false);
		const AlignmentArrangeResult YResult = AlignChild<Orient_Vertical>(static_cast<float>(AllottedGeometry.GetLocalSize().Y), CurChild, Padding, 1.0f, false);

		ArrangedChildren.AddWidget(ChildVisibility,
			AllottedGeometry.MakeChild(
				CurChild.GetWidget(),
				FVector2D(XResult.Offset, YResult.Offset),
				FVector2D(XResult.Size, YResult.Size)
			)
		);
	}
}

FVector2D SStoryEventTrackArea::ComputeDesiredSize(float) const
{
	FVector2D MaxSize(0.0f, 0.0f);
	for (int32 ChildIndex = 0; ChildIndex < Children.Num(); ++ChildIndex)
	{
		const FStoryEventTrackAreaSlot& CurChild = Children[ChildIndex];

		const EVisibility ChildVisibilty = CurChild.GetWidget()->GetVisibility();
		if (ChildVisibilty != EVisibility::Collapsed)
		{
			FVector2D ChildDesiredSize = CurChild.GetWidget()->GetDesiredSize();
			MaxSize.X = FMath::Max(MaxSize.X, ChildDesiredSize.X);
			MaxSize.Y = FMath::Max(MaxSize.Y, ChildDesiredSize.Y);
		}
	}

	return MaxSize;
}

FChildren* SStoryEventTrackArea::GetChildren()
{
	return &Children;
}

void SStoryEventTrackArea::UpdateHoverStates(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

#include "SEITrackArea.h"

#include "SEITrack.h"
#include "SEITrackOutliner.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/EditorComponents/FEITimeSliderController.h"
#include "Widgets/SWeakWidget.h"

FEITrackAreaSlot::FEITrackAreaSlot(const TSharedPtr<SEITrack>& InSlotContent)
	:TAlignmentWidgetSlotMixin<FEITrackAreaSlot>(HAlign_Fill,VAlign_Top)
{
	TrackWidget = InSlotContent;

	AttachWidget(
		SNew(SWeakWidget)
		.Clipping(EWidgetClipping::ClipToBounds)
		.PossiblyNullContent(InSlotContent));
}

float FEITrackAreaSlot::GetVerticalOffset() const
{
	TSharedPtr<SEITrack> PinnedTrackWidget = TrackWidget.Pin();
	return PinnedTrackWidget.IsValid() ? PinnedTrackWidget->GetPhysicalPosition() : 0.f;
}

void SEITrackArea::Construct(const FArguments& InArgs,
		const TSharedRef<FEITimelinerContext>& InContext)
{
	Context = InContext;
}

void SEITrackArea::Empty()
{
	TrackSlots.Empty();
	Children.Empty();
}

void SEITrackArea::AddTrackSlot(const TSharedRef<FEITimelineTrack>& InTrack,
	const TSharedPtr<SEITrack>& InTrackWidget)
{
	TrackSlots.Add(InTrack, InTrackWidget);
	Children.AddSlot(FEITrackAreaSlot::FSlotArguments(MakeUnique<FEITrackAreaSlot>(InTrackWidget)));
}

TSharedPtr<SEITrack> SEITrackArea::FindTrackSlot(const TSharedRef<FEITimelineTrack>& InTrack)
{
	TrackSlots.Remove(TWeakPtr<FEITimelineTrack>());
	return TrackSlots.FindRef(InTrack).Pin();
}

void SEITrackArea::SetOutliner(const TSharedPtr<SEITrackOutliner>& InOutliner)
{
	WeakOutliner = InOutliner;
}

FReply SEITrackArea::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FEITimeSliderController> TimeSliderController = Context.Pin()->TimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{
		WeakOutliner.Pin()->ClearSelection();
	//todo 	WeakModel.Pin()->ClearDetailsView();

		TimeSliderController->OnMouseButtonDown(*this, MyGeometry, MouseEvent);
	}

	return FReply::Unhandled();
}

FReply SEITrackArea::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FEITimeSliderController> TimeSliderController = Context.Pin()->TimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{

		return TimeSliderController->OnMouseButtonUp(*this, MyGeometry, MouseEvent);
	}

	return FReply::Unhandled();
}

FReply SEITrackArea::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	UpdateHoverStates(MyGeometry, MouseEvent);

	const TSharedPtr<FEITimeSliderController> TimeSliderController = Context.Pin()->TimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{
		FReply Reply =TimeSliderController->OnMouseMove(*this, MyGeometry, MouseEvent);

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

void SEITrackArea::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	
}

FReply SEITrackArea::OnMouseWheel(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<FEITimeSliderController> TimeSliderController = Context.Pin()->TimeSliderController.Pin();
	if(TimeSliderController.IsValid())
	{
		FReply Reply = TimeSliderController->OnMouseWheel(*this, MyGeometry, MouseEvent);
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

int32 SEITrackArea::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
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

FCursorReply SEITrackArea::OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const
{
	if (CursorEvent.IsMouseButtonDown(EKeys::RightMouseButton) && HasMouseCapture())
	{
		return FCursorReply::Cursor(EMouseCursor::GrabHandClosed);
	}
	else
	{
		TSharedPtr<FEITimeSliderController> TimeSliderController = Context.Pin()->TimeSliderController.Pin();
		if(TimeSliderController.IsValid())
		{
			return TimeSliderController->OnCursorQuery(SharedThis(this), MyGeometry, CursorEvent);
		}
	}

	return FCursorReply::Unhandled();
}

void SEITrackArea::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
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

void SEITrackArea::OnArrangeChildren(const FGeometry& AllottedGeometry,
	FArrangedChildren& ArrangedChildren) const
{
	for (int32 ChildIndex = 0; ChildIndex < Children.Num(); ++ChildIndex)
	{
		const FEITrackAreaSlot& CurChild = Children[ChildIndex];

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

FVector2D SEITrackArea::ComputeDesiredSize(float) const
{
	FVector2D MaxSize(0.0f, 0.0f);
	for (int32 ChildIndex = 0; ChildIndex < Children.Num(); ++ChildIndex)
	{
		const FEITrackAreaSlot& CurChild = Children[ChildIndex];

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

FChildren* SEITrackArea::GetChildren()
{
	return &Children;
}

void SEITrackArea::UpdateHoverStates(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
}

SEITrackArea::~SEITrackArea()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] TrackArea 被摧毁"))
}

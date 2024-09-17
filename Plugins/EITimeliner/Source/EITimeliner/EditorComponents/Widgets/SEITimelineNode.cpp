#include "SEITimelineNode.h"

void SEITimelineNode::Construct(const FArguments& InArgs,TSharedRef<FEITimelinerContext> InContext)
{
	Context = InContext;
}

FReply SEITimelineNode::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if(MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		BeginDragTimePos = CurrentTimePos;
		DraggingPointTimePosOffset = 2;
	}
	return FReply::Handled();
}

FReply SEITimelineNode::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	return SCompoundWidget::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

FReply SEITimelineNode::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if(MouseEvent.GetEffectingButton()==EKeys::LeftMouseButton)
	{
		CurrentTimePos = BeginDragTimePos + 5;
	}
	return FReply::Handled();
}

FReply SEITimelineNode::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return SCompoundWidget::OnMouseMove(MyGeometry, MouseEvent);
}

FReply SEITimelineNode::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return SCompoundWidget::OnDragDetected(MyGeometry, MouseEvent);
}

FCursorReply SEITimelineNode::OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const
{
	return SCompoundWidget::OnCursorQuery(MyGeometry, CursorEvent);
}

FVector2D SEITimelineNode::ComputeDesiredSize(float X) const
{
	return SCompoundWidget::ComputeDesiredSize(X);
}

int32 SEITimelineNode::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
	const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FSlateClippingZone ClippingZone(AllottedGeometry);
	OutDrawElements.PushClip(ClippingZone);

	const TSharedRef< FSlateFontMeasure > FontMeasureService = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	const FVector2D& ParentWidgetSize = AllottedGeometry.GetLocalSize();
	const FVector2D NodeSize(20, ParentWidgetSize.Y);
	const FVector2D NodeTranslation(CurrentTimePos, 0);
	
	FSlateDrawElement::MakeBox(OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(NodeSize,FSlateLayoutTransform(NodeTranslation)),
		FAppStyle::GetBrush("MeshPaint.Swap"));
	OutDrawElements.PopClip();

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
}

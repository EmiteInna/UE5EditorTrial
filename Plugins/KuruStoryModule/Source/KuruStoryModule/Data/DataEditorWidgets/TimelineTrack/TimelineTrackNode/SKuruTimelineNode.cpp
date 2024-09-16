#include "SKuruTimelineNode.h"

#include "KuruStoryModule/Types/ColorStores.h"

void SKuruTimelineNode::Construct(const FArguments& InArgs)
{
	
}

FReply SKuruTimelineNode::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if(MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		BeginDragTimePos = CurrentTimePos;
		DraggingPointTimePosOffset = 2;
	}
	return FReply::Handled();
}

FReply SKuruTimelineNode::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	return SCompoundWidget::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

FReply SKuruTimelineNode::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if(MouseEvent.GetEffectingButton()==EKeys::LeftMouseButton)
	{
		CurrentTimePos = BeginDragTimePos + 5;
	}
	return FReply::Handled();
}

FReply SKuruTimelineNode::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return SCompoundWidget::OnMouseMove(MyGeometry, MouseEvent);
}

FReply SKuruTimelineNode::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	return SCompoundWidget::OnDragDetected(MyGeometry, MouseEvent);
}

FCursorReply SKuruTimelineNode::OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const
{
	return SCompoundWidget::OnCursorQuery(MyGeometry, CursorEvent);
}

FVector2D SKuruTimelineNode::ComputeDesiredSize(float X) const
{
	return SCompoundWidget::ComputeDesiredSize(X);
}

int32 SKuruTimelineNode::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
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
		KuruColorStores::GrayBrush);
	OutDrawElements.PopClip();

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
}

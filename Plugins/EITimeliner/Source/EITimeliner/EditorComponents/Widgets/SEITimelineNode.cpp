#include "SEITimelineNode.h"

#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEITimeSliderController.h"

void SEITimelineNode::Construct(const FArguments& InArgs,TSharedRef<FEITimelinerContext> InContext)
{
	Context = InContext;

	EditingTrackIndex = InArgs._TrackId.Get();

	const FSlateBrush* ModBrush =FAppStyle::GetBrush("Brushes.Header");
	CommonNodeBrush = MakeShareable(new FSlateBrush());
	*CommonNodeBrush=*ModBrush;
	CommonNodeBrush->TintColor =  FLinearColor(255./255.,207./255.,207./255.);

	PickedNodeBrush = MakeShareable(new FSlateBrush());
	*PickedNodeBrush=*ModBrush;
	PickedNodeBrush->TintColor =  FLinearColor(198./255., 126./255.,126./255.);
}

FReply SEITimelineNode::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	
	return FReply::Handled().DetectDrag(SharedThis(this), EKeys::LeftMouseButton);
}

FReply SEITimelineNode::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	return SCompoundWidget::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

FReply SEITimelineNode::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	
	return FReply::Handled();
}

FReply SEITimelineNode::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (LeftButtonDown)
	{
		
	}
	return SCompoundWidget::OnMouseMove(MyGeometry, MouseEvent);
}

FReply SEITimelineNode::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragDetected"))
	TSharedRef<FDragDropOperation> DragDropOperation = MakeShareable(new FDragDropOperation);
	return FReply::Handled().BeginDragDrop(DragDropOperation);
}

FCursorReply SEITimelineNode::OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const
{
	return SCompoundWidget::OnCursorQuery(MyGeometry, CursorEvent);
}

FVector2D SEITimelineNode::ComputeDesiredSize(float X) const
{
	return SCompoundWidget::ComputeDesiredSize(X);
}

void SEITimelineNode::OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragEntered"))
	float MouseLocalX = MyGeometry.AbsoluteToLocal(DragDropEvent.GetScreenSpacePosition()).X;
	
	if(DragDropEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		BeginDragTimePos = ConvertMousePosXToScrubTime(MouseLocalX,MyGeometry);
		LeftButtonDown = true;
		CachedMouseYPos = DragDropEvent.GetScreenSpacePosition().Y;
	}
	SCompoundWidget::OnDragEnter(MyGeometry, DragDropEvent);
}

void SEITimelineNode::OnDragLeave(const FDragDropEvent& DragDropEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragLeaved"))
	LeftButtonDown = false;
	SCompoundWidget::OnDragLeave(DragDropEvent);
}

FReply SEITimelineNode::OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragOver"))
	float MouseLocalX = MyGeometry.AbsoluteToLocal(DragDropEvent.GetScreenSpacePosition()).X;
	
	if(DragDropEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		CurrentHangingTimePos = ConvertMousePosXToScrubTime(MouseLocalX,MyGeometry);
		FSlateApplication::Get().SetCursorPos(FVector2D(DragDropEvent.GetScreenSpacePosition().X,CachedMouseYPos));
	}
	return SCompoundWidget::OnDragOver(MyGeometry, DragDropEvent);
}

FReply SEITimelineNode::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragDroped"))
	float MouseLocalX = MyGeometry.AbsoluteToLocal(DragDropEvent.GetScreenSpacePosition()).X;

	if(DragDropEvent.GetEffectingButton()==EKeys::LeftMouseButton)
	{
		float NewTime = ConvertMousePosXToScrubTime(MouseLocalX,MyGeometry);
		if (Context.IsValid())
		{
			if (Context.Pin()->EditingModel.IsValid())
			{
				Context.Pin()->EditingModel.Pin()->OnTrackNodeMoved(NewTime-BeginDragTimePos,EditingTrackIndex);
			}
		}

		LeftButtonDown =false;
	}
	return SCompoundWidget::OnDrop(MyGeometry, DragDropEvent);
}

int32 SEITimelineNode::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                               const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
                               const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FSlateClippingZone ClippingZone(AllottedGeometry);
	OutDrawElements.PushClip(ClippingZone);


	float StartPositionTime = 0;
	float StartPositionLocal = 0;
	float EndPositionTime = 0 ;
	float EndPositionLocal = 0 ;
	
	if (Context.IsValid())
	{
		if (Context.Pin()->EditingModel.IsValid())
		{
			StartPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackStartTime(EditingTrackIndex);
			EndPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackEndTime(EditingTrackIndex);
		}

		StartPositionLocal = ConvertScrubTimeToMousePosX(StartPositionTime,AllottedGeometry);
		EndPositionLocal = ConvertScrubTimeToMousePosX(EndPositionTime,AllottedGeometry);
	}

	
	
	const TSharedRef< FSlateFontMeasure > FontMeasureService = FSlateApplication::Get().GetRenderer()->GetFontMeasureService();
	const FVector2D& ParentWidgetSize = AllottedGeometry.GetLocalSize();
	const FVector2D NodeSize(EndPositionLocal - StartPositionLocal, ParentWidgetSize.Y);
	FVector2D NodeTranslation(StartPositionLocal, 0);

	if (LeftButtonDown)
	{
		NodeTranslation.X += ConvertScrubTimeToMousePosX(CurrentHangingTimePos,AllottedGeometry)
			- ConvertScrubTimeToMousePosX(BeginDragTimePos,AllottedGeometry);
	}

	
	FSlateDrawElement::MakeBox(OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(NodeSize,FSlateLayoutTransform(NodeTranslation)),
		CommonNodeBrush.Get());
	OutDrawElements.PopClip();

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
}

float SEITimelineNode::ConvertMousePosXToScrubTime(float MouseX, const FGeometry& AllottedGeometry)const
{
	if (Context.IsValid())
	{
		if (Context.Pin()->TimeSliderController.IsValid() && Context.Pin()->EditingModel.IsValid())
		{
			FEITimeSliderController::FScrubRangeToScreen Range(
				Context.Pin()->TimeSliderController.Pin()->TimeSliderArgs.ViewRange.Get(),
				AllottedGeometry.Size);
			return Range.LocalXToInput(MouseX);
		}
	}
	return 0;
}

float SEITimelineNode::ConvertScrubTimeToMousePosX(float ScrubTime, const FGeometry& AllottedGeometry)const
{
	if (Context.IsValid())
	{
		if (Context.Pin()->TimeSliderController.IsValid() && Context.Pin()->EditingModel.IsValid())
		{
			FEITimeSliderController::FScrubRangeToScreen Range(
				Context.Pin()->TimeSliderController.Pin()->TimeSliderArgs.ViewRange.Get(),
				AllottedGeometry.Size);
			return Range.InputToLocalX(ScrubTime);
		}
	}
	return 10;
}

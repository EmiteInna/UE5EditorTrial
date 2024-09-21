#include "SEITimelineNode.h"

#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEINotifyLibrary.h"
#include "EITimeliner/EditorComponents/FEITimeSliderController.h"
#include "EITimeliner/EditorUtils/EIWidgetStore.h"
#include "Programs/SwitchboardListener/Private/CpuUtilizationMonitor.h"

void SEITimelineNode::Construct(const FArguments& InArgs,TSharedRef<FEITimelinerContext> InContext)
{
	Context = InContext;

	EditingTrackIndex = InArgs._TrackId.Get();


}

FReply SEITimelineNode::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (Context.IsValid())
	{
		if (Context.Pin()->EditingModel.IsValid())
		{
			CachedStartPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackStartTime(EditingTrackIndex);
			CachedEndPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackEndTime(EditingTrackIndex);
		}
	}
	
	/*ENodeOperation DesiredOperationType = GetOperationTypeByClickingPos(BeginDragTimePos, 5, MyGeometry);
	OperationType = DesiredOperationType;*/
	
	return FReply::Handled().DetectDrag(SharedThis(this), EKeys::LeftMouseButton);
}

FReply SEITimelineNode::OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent)
{
	return SCompoundWidget::OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent);
}

FReply SEITimelineNode::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (Context.IsValid())
	{
		if (Context.Pin()->NotifyLibrary.IsValid())
		{
			return Context.Pin()->NotifyLibrary.Pin()->OnChooseTrack(EditingTrackIndex);
		}
	}
	return FReply::Handled();
}

FReply SEITimelineNode::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	const float MouseTimePosition = GetScrubTimeByMouseEvent(MyGeometry,MouseEvent);;
	ENodeOperation DesiredOperationType = GetOperationTypeByClickingPos(MouseTimePosition, 5, MyGeometry);
	
	
	if (LeftButtonDown)
	{
		//drag在后面的DragDetected里
		switch (DesiredOperationType)
		{
		case E_DragBody:
			SetCursor(EMouseCursor::GrabHandClosed);
			break;
		case E_DragStartEdge:
			SetCursor(EMouseCursor::ResizeLeftRight);
			break;
		case E_DragEndEdge:
			SetCursor(EMouseCursor::ResizeLeftRight);
			break;
		default:break;
		}
	}else
	{
		//自由形态下切换指针形态。
		//按住时的指针状态
		switch (DesiredOperationType)
		{
		case E_DragBody:
			SetCursor(EMouseCursor::GrabHand);
			break;
		case E_DragStartEdge:
			SetCursor(EMouseCursor::ResizeLeftRight);
			break;
		case E_DragEndEdge:
			SetCursor(EMouseCursor::ResizeLeftRight);
			break;
		default:break;
		}
	}
	return FReply::Handled();
}

FReply SEITimelineNode::OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragDetected"))
	TSharedRef<FDragDropOperation> DragDropOperation = MakeShareable(new FDragDropOperation);
	//按住时的指针状态
	const float MouseTimePosition = GetScrubTimeByMouseEvent(MyGeometry,MouseEvent);;
	ENodeOperation DesiredOperationType = GetOperationTypeByClickingPos(MouseTimePosition, 5, MyGeometry);

	switch (DesiredOperationType)
	{
	case E_DragBody:
		DragDropOperation->SetCursorOverride(EMouseCursor::GrabHandClosed);
		break;
	case E_DragStartEdge:
		DragDropOperation->SetCursorOverride(EMouseCursor::ResizeLeftRight);
		break;
	case E_DragEndEdge:
		DragDropOperation->SetCursorOverride(EMouseCursor::ResizeLeftRight);
		break;
	default:break;
	}
	
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
	
	if(DragDropEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		BeginDragTimePos =  GetScrubTimeByMouseEvent(MyGeometry,DragDropEvent);
		LeftButtonDown = true;
		CachedMouseYPos = DragDropEvent.GetScreenSpacePosition().Y;

		ENodeOperation DesiredOperationType = GetOperationTypeByClickingPos(BeginDragTimePos, 5, MyGeometry);
		OperationType = DesiredOperationType;
	}

	if (Context.IsValid())
	{
		if (Context.Pin()->EditingModel.IsValid())
		{
			CachedStartPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackStartTime(EditingTrackIndex);
			CachedEndPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackEndTime(EditingTrackIndex);
		}
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
	if(DragDropEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
	{
		CurrentHangingTimePos =  GetScrubTimeByMouseEvent(MyGeometry,DragDropEvent);
	
		if (OperationType == E_DragStartEdge)
		{
			CurrentHangingTimePos = FMath::Min(CurrentHangingTimePos,CachedEndPositionTime);
		}

		if (OperationType == E_DragEndEdge)
		{
			CurrentHangingTimePos = FMath::Max(CurrentHangingTimePos,CachedStartPositionTime);
		}

		float HangingPosLocal = ConvertScrubTimeToMousePosX(CurrentHangingTimePos,MyGeometry);
		float HangingPosSreen = MyGeometry.LocalToAbsolute(FVector2D(HangingPosLocal,0)).X;

		FSlateApplication::Get().SetCursorPos(
			FVector2D(HangingPosSreen,CachedMouseYPos));
		
	}
	return SCompoundWidget::OnDragOver(MyGeometry, DragDropEvent);
}

FReply SEITimelineNode::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	//UE_LOG(LogInit,Error,TEXT("[EIEditor]DragDroped"))
	if (Context.IsValid())
	{
		if (Context.Pin()->EditingModel.IsValid())
		{
			if (Context.Pin()->EditingModel.Pin()->EditingInstacne)
			{
				

				if(DragDropEvent.GetEffectingButton()==EKeys::LeftMouseButton)
				{
					float NewTime = GetScrubTimeByMouseEvent(MyGeometry,DragDropEvent);
					if (Context.IsValid())
					{
						if (Context.Pin()->EditingModel.IsValid())
						{
							switch (OperationType) {
							case E_DragBody:
								Context.Pin()->EditingModel.Pin()->
									OnTrackNodeMoved(NewTime-BeginDragTimePos,EditingTrackIndex);
								break;
							case E_DragStartEdge:
								Context.Pin()->EditingModel.Pin()->
									OnDropWithNewStartDelta(NewTime-BeginDragTimePos,EditingTrackIndex);
								break;
							case E_DragEndEdge:
								Context.Pin()->EditingModel.Pin()->
									OnDropWithNewEndDelta(NewTime-BeginDragTimePos,EditingTrackIndex);
								break;
							default:break;
							}
						}
					}

					LeftButtonDown =false;
				}

				if (Context.IsValid())
				{
					if (Context.Pin()->EditingModel.IsValid())
					{
						CachedStartPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackStartTime(EditingTrackIndex);
						CachedEndPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackEndTime(EditingTrackIndex);
					}
				}

	
	
			}
		}
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
	FVector2D NodeSize(EndPositionLocal - StartPositionLocal, ParentWidgetSize.Y);
	FVector2D NodeTranslation(StartPositionLocal, 0);

	
	
	if (LeftButtonDown)
	{
		float DragTime = ConvertScrubTimeToMousePosX(CurrentHangingTimePos,AllottedGeometry)
						- ConvertScrubTimeToMousePosX(BeginDragTimePos,AllottedGeometry);
		switch (OperationType) {
		case E_DragBody:
			//如果是脱整个，移动个东西
			NodeTranslation.X += DragTime;
			break;
		case E_DragStartEdge:
			//拖开头的话，要加长长度并调整开始位置，加长等同于拖拽长度的量
			NodeTranslation.X += DragTime;
			NodeSize.X += -DragTime;
			break;
		case E_DragEndEdge:
			//拖结尾只需要缩放就行了
			NodeSize.X += DragTime;
			break;
			default:break;
		}
		
	}

	bool bChosen = false;
	if (Context.Pin()->NotifyLibrary.IsValid())
	{
		bChosen = Context.Pin()->NotifyLibrary.Pin()->GetChosenTrackID() == EditingTrackIndex;
	}

	//说实话，相当反感把Brush和颜色分开输入的设定
	FSlateDrawElement::MakeBox(OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(NodeSize,FSlateLayoutTransform(NodeTranslation)),
		bChosen?FEIWidgetStores::KawaiiChosenTrackNodeBrush:FEIWidgetStores::KawaiiDefaultTrackNodeBrush,
		ESlateDrawEffect::None,
		bChosen?FEIWidgetStores::KawaiiOrange:FEIWidgetStores::KawaiiPink);
	OutDrawElements.PopClip();

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
}

float SEITimelineNode::GetScrubTimeByMouseEvent(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) const
{
	float MouseLocalX = MyGeometry.AbsoluteToLocal(MouseEvent.GetScreenSpacePosition()).X;
	float NewTime = ConvertMousePosXToScrubTime(MouseLocalX,MyGeometry);
	return NewTime;
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
ENodeOperation SEITimelineNode::GetOperationTypeByClickingPos(float ClickingTime, float EdgeWidth, const FGeometry& AllottedGeometry) const
{
	const float EdgeTimeWidth = ConvertMousePosXToScrubTime(EdgeWidth,AllottedGeometry) - ConvertMousePosXToScrubTime(0, AllottedGeometry);
	
	if (Context.IsValid())
	{
		if (Context.Pin()->EditingModel.IsValid())
		{
			float StartPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackStartTime(EditingTrackIndex);
			float EndPositionTime = Context.Pin()->EditingModel.Pin()->GetTrackEndTime(EditingTrackIndex);

			if (ClickingTime <= StartPositionTime + EdgeTimeWidth)
			{
				return E_DragStartEdge;
			}

			if (ClickingTime >= EndPositionTime - EdgeTimeWidth)
			{
				return E_DragEndEdge;
			}

			if (ClickingTime >= StartPositionTime +EdgeTimeWidth &&
				ClickingTime <= EndPositionTime - EdgeTimeWidth)
			{
				return E_DragBody;
			}
		}
	}

	return E_DragBody;
}
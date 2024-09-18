#pragma once
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"


class EITIMELINER_API  SEITimelineNode:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEITimelineNode)
	{
	}
	SLATE_ATTRIBUTE(int,TrackId)

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,TSharedRef<FEITimelinerContext> InContext);

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FCursorReply OnCursorQuery(const FGeometry& MyGeometry, const FPointerEvent& CursorEvent) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	virtual void OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual void OnDragLeave(const FDragDropEvent& DragDropEvent) override;
	virtual FReply OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

	TSharedPtr<FSlateBrush> CommonNodeBrush;
	TSharedPtr<FSlateBrush> PickedNodeBrush;
	
	TWeakPtr<FEITimelinerContext> Context;
	
	float CurrentTimePos = 0;
	//开始Drag时起点的时间
	float BeginDragTimePos = 0;
	//Drag的点的位置
	float DraggingPointTimePosOffset =0;
	float CurrentHangingTimePos = 0;
	
	//当前编辑的是哪个Track，创建时传入。
	int EditingTrackIndex = 0;

	bool LeftButtonDown  =false;
	//在鼠标按下的过程中，鼠标指针仅被允许在X上移动。
	float CachedMouseYPos = 0;
	
	float ConvertMousePosXToScrubTime(float MouseX, const FGeometry& AllottedGeometry)const;

	float ConvertScrubTimeToMousePosX(float ScrubTime, const FGeometry& AllottedGeometry)const;
};

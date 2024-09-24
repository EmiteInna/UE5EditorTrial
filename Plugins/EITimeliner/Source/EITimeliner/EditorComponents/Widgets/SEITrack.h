#pragma once

#include "AnimatedRange.h"

class FEITimelinerContext;
class SEITrackOutliner;
class FEITimelineTrack;

class  EITIMELINER_API SEITrack:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEITrack){}

	SLATE_DEFAULT_SLOT(FArguments, Content)

	SLATE_ATTRIBUTE(FAnimatedRange, ViewRange)
	SLATE_ATTRIBUTE(int, TrackId)
	
	SLATE_END_ARGS()

	/** Construct this widget */
void Construct(const FArguments& InArgs,
	const TSharedRef<FEITimelineTrack>& InTrack,
	const TSharedRef<SEITrackOutliner>& InOutliner,
	const TSharedRef<FEITimelinerContext>& InContext);
	
	/** Paint this widget */
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	/** Get the desired physical vertical position of this track */
	float GetPhysicalPosition() const;

protected:
	virtual FVector2D ComputeDesiredSize(float LayoutScale) const override;

private:
	/** The track that we represent */
	TWeakPtr<FEITimelineTrack> WeakTrack;

	/** Outliner that we are associated with */
	TWeakPtr<SEITrackOutliner> WeakOutliner;

	/** Our desired size last frame */
	TOptional<FVector2D> LastDesiredSize;

	/** The range our track should display */
	TAttribute<FAnimatedRange> ViewRange;

	/** The range of indices our track should display */
	TAttribute<FInt32Interval> ViewIndices;

	TWeakPtr<FEITimelinerContext> Context;

	int trackId = 0;
public:
	virtual ~SEITrack();
};

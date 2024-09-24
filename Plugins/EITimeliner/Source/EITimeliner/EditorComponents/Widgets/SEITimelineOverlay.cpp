#include "SEITimelineOverlay.h"

#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/EditorComponents/FEITimeSliderController.h"

int32 SEITimelineOverlay::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                                  const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
                                  const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FPaintViewAreaArgs PaintArgs;
	PaintArgs.bDisplayTickLines = bDisplayTickLines.Get();
	PaintArgs.bDisplayScrubPosition = bDisplayScrubPosition.Get();

	if (PaintPlaybackRangeArgs.IsSet())
	{
		PaintArgs.PlaybackRangeArgs = PaintPlaybackRangeArgs.Get();
	}

	Context.Pin()->TimeSliderController.Pin()->OnPaintViewArea(AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, ShouldBeEnabled( bParentEnabled ), PaintArgs );

	return SCompoundWidget::OnPaint( Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled  );
}

SEITimelineOverlay::~SEITimelineOverlay()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] TimelineOverlay 被摧毁"))
}

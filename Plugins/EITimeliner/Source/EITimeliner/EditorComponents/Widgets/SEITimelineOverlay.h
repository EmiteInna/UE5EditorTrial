#pragma once
#include "ITimeSlider.h"

class FEITimelinerContext;
class FEITimeSliderController;

class  EITIMELINER_API SEITimelineOverlay: public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS( SEITimelineOverlay )
		: _DisplayTickLines( true )
		, _DisplayScrubPosition( false )
	{}

	SLATE_ATTRIBUTE( bool, DisplayTickLines )
	SLATE_ATTRIBUTE( bool, DisplayScrubPosition )
	SLATE_ATTRIBUTE( FPaintPlaybackRangeArgs, PaintPlaybackRangeArgs )

	SLATE_END_ARGS()

	void Construct( const FArguments& InArgs,
		const TSharedRef<FEITimelinerContext> InContext)
	{
		bDisplayScrubPosition = InArgs._DisplayScrubPosition;
		bDisplayTickLines = InArgs._DisplayTickLines;
		PaintPlaybackRangeArgs = InArgs._PaintPlaybackRangeArgs;
		Context = InContext;
	}

private:
	/** SWidget Interface */
	virtual int32 OnPaint( const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled ) const override;

private:
	/** Whether or not to display the scrub position */
	TAttribute<bool> bDisplayScrubPosition;
	/** Whether or not to display tick lines */
	TAttribute<bool> bDisplayTickLines;
	/** User-supplied options for drawing playback range */
	TAttribute<FPaintPlaybackRangeArgs> PaintPlaybackRangeArgs;

	TWeakPtr<FEITimelinerContext> Context;
};

#pragma once
#include "ITimeSlider.h"
class FKuruTimeSliderController;

class SKuruTimelineOverlay : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS( SKuruTimelineOverlay )
		: _DisplayTickLines( true )
		, _DisplayScrubPosition( false )
	{}

	SLATE_ATTRIBUTE( bool, DisplayTickLines )
	SLATE_ATTRIBUTE( bool, DisplayScrubPosition )
	SLATE_ATTRIBUTE( FPaintPlaybackRangeArgs, PaintPlaybackRangeArgs )

	SLATE_END_ARGS()

	void Construct( const FArguments& InArgs, TSharedRef<FKuruTimeSliderController> InTimeSliderController )
	{
		bDisplayScrubPosition = InArgs._DisplayScrubPosition;
		bDisplayTickLines = InArgs._DisplayTickLines;
		PaintPlaybackRangeArgs = InArgs._PaintPlaybackRangeArgs;
		TimeSliderController = InTimeSliderController;
	}

private:
	/** SWidget Interface */
	virtual int32 OnPaint( const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled ) const override;

private:
	/** Controller for manipulating time */
	TSharedPtr<FKuruTimeSliderController> TimeSliderController;
	/** Whether or not to display the scrub position */
	TAttribute<bool> bDisplayScrubPosition;
	/** Whether or not to display tick lines */
	TAttribute<bool> bDisplayTickLines;
	/** User-supplied options for drawing playback range */
	TAttribute<FPaintPlaybackRangeArgs> PaintPlaybackRangeArgs;

};

#pragma once


class FEITimelinerContext;
class SEITrackOutliner;
class FEITimelineTrack;
class FEITimeSliderController;
class FEITimelineEditingModel;
class SEITrack;

class FEITrackAreaSlot : public TSlotBase<FEITrackAreaSlot> , public TAlignmentWidgetSlotMixin<FEITrackAreaSlot>
{
public:
	FEITrackAreaSlot(const TSharedPtr<SEITrack>& InSlotContent);

	float GetVerticalOffset()const;

	TWeakPtr<SEITrack> TrackWidget;
};

class  EITIMELINER_API SEITrackArea : public SPanel
{
public:
	SLATE_BEGIN_ARGS(SEITrackArea)
	{
		_Clipping = EWidgetClipping::ClipToBounds;
	}
	SLATE_END_ARGS()

	SEITrackArea()
		:Children(this)
	{
		
	}

	/** Construct this widget */
	void Construct(const FArguments& InArgs,
		const TSharedRef<FEITimelinerContext>& InContext);

public:

	/** Empty the track area */
	void Empty();

	/** Add a new track slot to this area for the given node. The slot will be automatically cleaned up when all external references to the supplied slot are removed. */
	void AddTrackSlot(const TSharedRef<FEITimelineTrack>& InTrack, const TSharedPtr<SEITrack>& InTrackWidget);

	/** Attempt to find an existing slot relating to the given node */
	TSharedPtr<SEITrack> FindTrackSlot(const TSharedRef<FEITimelineTrack>& InTrack);

	/** Access the cached geometry for this track area */
	const FGeometry& GetCachedGeometry() const
	{
		return CachedGeometry;
	}

	/** Assign an outliner to this track area. */
	void SetOutliner(const TSharedPtr<SEITrackOutliner>& InOutliner);

public:

	/** SWidget interface */
	virtual FReply OnMouseButtonDown( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual FReply OnMouseButtonUp( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual FReply OnMouseMove( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseWheel( const FGeometry& MyGeometry, const FPointerEvent& MouseEvent ) override;
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled ) const override;
	virtual FCursorReply OnCursorQuery( const FGeometry& MyGeometry, const FPointerEvent& CursorEvent ) const override;
	virtual void Tick( const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime ) override;
	virtual void OnArrangeChildren( const FGeometry& AllottedGeometry, FArrangedChildren& ArrangedChildren ) const override;
	virtual FVector2D ComputeDesiredSize(float) const override;
	virtual FChildren* GetChildren() override;

protected:

	/** Update any hover state required for the track area */
	void UpdateHoverStates(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);

private:

	/** The track area's children. */
	TPanelChildren<FEITrackAreaSlot> Children;

private:

	/** Cached geometry. */
	FGeometry CachedGeometry;

	/** A map of child slot content that exists in our view. */
	TMap<TWeakPtr<FEITimelineTrack>, TWeakPtr<SEITrack>> TrackSlots;
	

	TWeakPtr<FEITimelinerContext> Context;


	/** Weak pointer to the outliner (used for scrolling interactions). */
	TWeakPtr<SEITrackOutliner> WeakOutliner;
};
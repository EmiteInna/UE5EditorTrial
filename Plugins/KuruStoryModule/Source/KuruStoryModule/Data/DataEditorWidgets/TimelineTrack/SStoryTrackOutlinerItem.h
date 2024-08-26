#pragma once

class SStoryEventTrack;
class FStoryTimelineTrack;

class SStoryTrackOutlinerItem : public SMultiColumnTableRow<TSharedRef<FStoryTimelineTrack>>
{
public:
	/** Delegate to invoke to create a new column for this row */
	DECLARE_DELEGATE_RetVal_ThreeParams(TSharedRef<SWidget>, FOnGenerateWidgetForColumn,
		const TSharedRef<FStoryTimelineTrack>&, const FName&, const TSharedRef<SStoryTrackOutlinerItem>&);

	SLATE_BEGIN_ARGS(SStoryTrackOutlinerItem) {}

	/** Delegate to invoke to create a new column for this row */
	SLATE_EVENT(FOnGenerateWidgetForColumn, OnGenerateWidgetForColumn)

	/** Text to highlight when searching */
	SLATE_ATTRIBUTE(FText, HighlightText)

	SLATE_END_ARGS()

	~SStoryTrackOutlinerItem();

	void Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView, const TSharedRef<FStoryTimelineTrack>& InTrack);

	/** SWidget interface */
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;
	virtual FVector2D ComputeDesiredSize(float LayoutScaleMultiplier) const override;
	virtual void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;

	/** SMultiColumnTableRow interface */
	virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& ColumnId) override;

	/** Get the track this item represents */
	TSharedRef<FStoryTimelineTrack> GetTrack() const { return Track.Pin().ToSharedRef(); }

	/** Add a reference to the specified track, keeping it alive until this row is destroyed */
	void AddTrackAreaReference(const TSharedPtr<SStoryEventTrack>& InTrackWidget);

	/** Get the text to highlight when searching */
	TAttribute<FText> GetHighlightText() const { return HighlightText; }

private:
	/** Get the label text for this item */
	FText GetLabelText() const;

	/** Get the hover state for this item */
	bool ShouldAppearHovered() const;

private:
	/** The track that we represent */
	TWeakPtr<FStoryTimelineTrack> Track;

	/** Cached reference to a track lane that we relate to. This keeps the track lane alive (it's a weak widget) as long as we are in view. */
	TSharedPtr<SStoryEventTrack> TrackWidget;

	/** Delegate to invoke to create a new column for this row */
	FOnGenerateWidgetForColumn OnGenerateWidgetForColumn;

	/** Text to highlight when searching */
	TAttribute<FText> HighlightText;
	
	/** Keep an internal IsHovered flag*/
	bool bHovered;
};

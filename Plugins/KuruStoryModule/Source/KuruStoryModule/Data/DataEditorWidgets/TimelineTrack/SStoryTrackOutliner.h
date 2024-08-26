#pragma once


class SStoryEventTrackArea;
class FTextFilterExpressionEvaluator;
class SStoryTrackOutlinerItem;
class SStoryEventTrack;
class UKuruStoryClipData;
class FStoryTimelineTrack;
DECLARE_DELEGATE_OneParam(FOnGetContextMenuContent, FMenuBuilder& /*MenuBuilder*/);

class SStoryTrackOutliner:public STreeView<TSharedRef<FStoryTimelineTrack>>
{

public:
	SLATE_BEGIN_ARGS(SStoryTrackOutliner) {}

	/** Externally supplied scroll bar */
	SLATE_ARGUMENT(TSharedPtr<SScrollBar>, ExternalScrollbar)

	/** Called to populate the context menu. */
	SLATE_EVENT(FOnGetContextMenuContent, OnGetContextMenuContent)

	/** The filter test used for searching */
	SLATE_ATTRIBUTE(FText, FilterText)

	SLATE_END_ARGS()

	~SStoryTrackOutliner();

	void Construct(const FArguments& InArgs, UKuruStoryClipData* InAnimModel, const TSharedRef<SStoryEventTrackArea>& InTrackArea);

	/** SWidget interface */
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const;

	/** STreeView interface */
	virtual void Private_SetItemSelection( TSharedRef<FStoryTimelineTrack> TheItem, bool bShouldBeSelected, bool bWasUserDirected = false ) override;
	virtual void Private_ClearSelection() override;
	virtual void Private_SelectRangeFromCurrentTo( TSharedRef<FStoryTimelineTrack> InRangeSelectionEnd ) override;

	/** Structure used to cache physical geometry for a particular track */
	struct FCachedGeometry
	{
		FCachedGeometry(TSharedRef<FStoryTimelineTrack> InTrack, float InTop, float InHeight)
			: Track(MoveTemp(InTrack))
			, Top(InTop)
			, Height(InHeight)
		{}

		TSharedRef<FStoryTimelineTrack> Track;
		float Top;
		float Height;
	};

	/** Get the cached geometry for the specified track */
	TOptional<FCachedGeometry> GetCachedGeometryForTrack(const TSharedRef<FStoryTimelineTrack>& InTrack) const;

	/** Compute the position of the specified track using its cached geometry */
	TOptional<float> ComputeTrackPosition(const TSharedRef<FStoryTimelineTrack>& InTrack) const;

	/** Report geometry for a child row */
	void ReportChildRowGeometry(const TSharedRef<FStoryTimelineTrack>& InTrack, const FGeometry& InGeometry);

	/** Called when a child row widget has been added/removed */
	void OnChildRowRemoved(const TSharedRef<FStoryTimelineTrack>& InTrack);

	/** Scroll this tree view by the specified number of slate units */
	void ScrollByDelta(float DeltaInSlateUnits);

	/** Apply any changed filter */
	void RefreshFilter();

private:
	/** Generate a row for the outliner */
	TSharedRef<ITableRow> HandleGenerateRow(TSharedRef<FStoryTimelineTrack> Item, const TSharedRef<STableViewBase>& OwnerTable);

	/** Get the children of an outliner item */
	void HandleGetChildren(TSharedRef<FStoryTimelineTrack> Item, TArray<TSharedRef<FStoryTimelineTrack>>& OutChildren);

	/** Record the expansion state when it changes */
	void HandleExpansionChanged(TSharedRef<FStoryTimelineTrack> InItem, bool bIsExpanded);

	/** Handle context menu */
	TSharedPtr<SWidget> HandleContextMenuOpening();

	/** Handle tracks changing */
	void HandleTracksChanged();

	/** Generate a widget for the specified column */
	TSharedRef<SWidget> GenerateWidgetForColumn(const TSharedRef<FStoryTimelineTrack>& InTrack, const FName& ColumnId, const TSharedRef<SStoryTrackOutlinerItem>& Row) const;

private:
	/** The anim timeline model */
	UKuruStoryClipData* Model;

	/** The track area */
	TSharedPtr<SStoryEventTrackArea> TrackArea;

	/** The header row */
	TSharedPtr<SHeaderRow> HeaderRow;

	/** Delegate handle for track changes */
	FDelegateHandle TracksChangedDelegateHandle;

	/** Map of cached geometries for visible tracks */
	TMap<TSharedRef<FStoryTimelineTrack>, FCachedGeometry> CachedTrackGeometry;

	/** Linear, sorted array of tracks that we currently have generated widgets for */
	mutable TArray<FCachedGeometry> PhysicalTracks;

	/** A flag indicating that the physical tracks need to be updated. */
	mutable bool bPhysicalTracksNeedUpdate;

	/** The filter text used when we are searching the tree */
	TAttribute<FText> FilterText;

	/** Compiled filter search terms. */
	TSharedPtr<FTextFilterExpressionEvaluator> TextFilter;
};

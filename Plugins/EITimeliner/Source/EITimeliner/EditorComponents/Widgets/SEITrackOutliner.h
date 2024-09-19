#pragma once
#include "Misc/TextFilterExpressionEvaluator.h"

class SEITrackOutlinerItem;
class FEITimelinerContext;
class SEITrackArea;
class FEITimelineEditingModel;
class FEITimelineTrack;
DECLARE_DELEGATE_OneParam(FOnGetContextMenuContent, FMenuBuilder& /*MenuBuilder*/);
class  EITIMELINER_API SEITrackOutliner:public STreeView<TSharedRef<FEITimelineTrack>>
{

public:
	SLATE_BEGIN_ARGS(SEITrackOutliner) {}

	/** Externally supplied scroll bar */
	SLATE_ARGUMENT(TSharedPtr<SScrollBar>, ExternalScrollbar)

	/** Called to populate the context menu. */
	SLATE_EVENT(FOnGetContextMenuContent, OnGetContextMenuContent)

	/** The filter test used for searching */
	SLATE_ATTRIBUTE(FText, FilterText)

	SLATE_END_ARGS()

	~SEITrackOutliner();

	void Construct(const FArguments& InArgs,
		const TSharedRef<SEITrackArea>& InTrackArea,
		const TSharedRef<FEITimelinerContext>& InContext);

	/** SWidget interface */
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime);
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const;

	/** STreeView interface */
	virtual void Private_SetItemSelection( TSharedRef<FEITimelineTrack> TheItem, bool bShouldBeSelected, bool bWasUserDirected = false ) override;
	virtual void Private_ClearSelection() override;
	virtual void Private_SelectRangeFromCurrentTo( TSharedRef<FEITimelineTrack> InRangeSelectionEnd ) override;

	/** Structure used to cache physical geometry for a particular track */
	struct FCachedGeometry
	{
		FCachedGeometry(TSharedRef<FEITimelineTrack> InTrack, float InTop, float InHeight)
			: Track(MoveTemp(InTrack))
			, Top(InTop)
			, Height(InHeight)
		{}

		TSharedRef<FEITimelineTrack> Track;
		float Top;
		float Height;
	};

	/** Get the cached geometry for the specified track */
	TOptional<FCachedGeometry> GetCachedGeometryForTrack(const TSharedRef<FEITimelineTrack>& InTrack) const;

	/** Compute the position of the specified track using its cached geometry */
	TOptional<float> ComputeTrackPosition(const TSharedRef<FEITimelineTrack>& InTrack) const;

	/** Report geometry for a child row */
	void ReportChildRowGeometry(const TSharedRef<FEITimelineTrack>& InTrack, const FGeometry& InGeometry);

	/** Called when a child row widget has been added/removed */
	void OnChildRowRemoved(const TSharedRef<FEITimelineTrack>& InTrack);

	/** Scroll this tree view by the specified number of slate units */
	void ScrollByDelta(float DeltaInSlateUnits);

	/** Apply any changed filter */
	void RefreshFilter();

private:
	/** Generate a row for the outliner */
	TSharedRef<ITableRow> HandleGenerateRow(TSharedRef<FEITimelineTrack> Item, const TSharedRef<STableViewBase>& OwnerTable);

	/** Get the children of an outliner item */
	void HandleGetChildren(TSharedRef<FEITimelineTrack> Item, TArray<TSharedRef<FEITimelineTrack>>& OutChildren);

	/** Record the expansion state when it changes */
	void HandleExpansionChanged(TSharedRef<FEITimelineTrack> InItem, bool bIsExpanded);

	/** Handle context menu */
	TSharedPtr<SWidget> HandleContextMenuOpening();
public:
	/** Handle tracks changing */
	void HandleTracksChanged();

	/** Generate a widget for the specified column */
	TSharedRef<SWidget> GenerateWidgetForColumn(const TSharedRef<FEITimelineTrack>& InTrack,
		const FName& ColumnId,
		const TSharedRef<SEITrackOutlinerItem>& Row) const;

private:

	/** The track area */
	TSharedPtr<SEITrackArea> TrackArea;

	/** The header row */
	TSharedPtr<SHeaderRow> HeaderRow;

	/** Delegate handle for track changes */
	FDelegateHandle TracksChangedDelegateHandle;

	/** Map of cached geometries for visible tracks */
	TMap<TSharedRef<FEITimelineTrack>, FCachedGeometry> CachedTrackGeometry;

	/** Linear, sorted array of tracks that we currently have generated widgets for */
	mutable TArray<FCachedGeometry> PhysicalTracks;

	/** A flag indicating that the physical tracks need to be updated. */
	mutable bool bPhysicalTracksNeedUpdate;
public:
	/** The filter text used when we are searching the tree */
	TAttribute<FText> FilterText;

	/** Compiled filter search terms. */
	TSharedPtr<FTextFilterExpressionEvaluator> TextFilter;

	TWeakPtr<FEITimelinerContext> Context;
};

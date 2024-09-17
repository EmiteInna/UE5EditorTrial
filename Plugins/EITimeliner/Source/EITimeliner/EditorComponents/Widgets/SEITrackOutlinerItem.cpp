#include "SEITrackOutlinerItem.h"
#include "EITimeliner/EditorComponents/FEITimelineTrack.h"
#include "SEITrackOutliner.h"

SEITrackOutlinerItem::~SEITrackOutlinerItem()
{
	TSharedPtr<SEITrackOutliner> Outliner = StaticCastSharedPtr<SEITrackOutliner>(OwnerTablePtr.Pin());
	TSharedPtr<FEITimelineTrack> PinnedTrack = Track.Pin();
	if (Outliner.IsValid() && PinnedTrack.IsValid())
	{
		Outliner->OnChildRowRemoved(PinnedTrack.ToSharedRef());
	}
}

void SEITrackOutlinerItem::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView,
	const TSharedRef<FEITimelineTrack>& InTrack)
{
	Track = InTrack;
	OnGenerateWidgetForColumn = InArgs._OnGenerateWidgetForColumn;
	HighlightText = InArgs._HighlightText;

	bHovered = false;
	SetHover(TAttribute<bool>::CreateSP(this, &SEITrackOutlinerItem::ShouldAppearHovered));

	SMultiColumnTableRow::Construct(
		SMultiColumnTableRow::FArguments()
			.ShowSelection(true),
		InOwnerTableView);
}

void SEITrackOutlinerItem::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
	const float InDeltaTime)
{
	StaticCastSharedPtr<SEITrackOutliner>(OwnerTablePtr.Pin())->ReportChildRowGeometry(Track.Pin().ToSharedRef(), AllottedGeometry);
}

FVector2D SEITrackOutlinerItem::ComputeDesiredSize(float LayoutScaleMultiplier) const
{
	TSharedPtr<FEITimelineTrack> PinnedTrack = Track.Pin();
	if(PinnedTrack.IsValid())
	{
		return FVector2D(100.0f, PinnedTrack->GetHeight() + PinnedTrack->GetPadding().Combined());
	}

	return FVector2D(100.0f, 16.0f);
}

void SEITrackOutlinerItem::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	bHovered = true;
	SMultiColumnTableRow<TSharedRef<FEITimelineTrack>>::OnMouseEnter(MyGeometry, MouseEvent);

	TSharedPtr<FEITimelineTrack> PinnedTrack = Track.Pin();
	if(PinnedTrack.IsValid())
	{
		PinnedTrack->SetHovered(true);
	}
}

void SEITrackOutlinerItem::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	bHovered = false;
	SMultiColumnTableRow<TSharedRef<FEITimelineTrack>>::OnMouseLeave(MouseEvent);

	TSharedPtr<FEITimelineTrack> PinnedTrack = Track.Pin();
	if(PinnedTrack.IsValid())
	{
		PinnedTrack->SetHovered(false);
	}
}

TSharedRef<SWidget> SEITrackOutlinerItem::GenerateWidgetForColumn(const FName& ColumnId)
{
	TSharedPtr<FEITimelineTrack> PinnedTrack = Track.Pin();
	if (PinnedTrack.IsValid())
	{
		TSharedPtr<SWidget> ColumnWidget = SNullWidget::NullWidget;
		if(OnGenerateWidgetForColumn.IsBound())
		{
			ColumnWidget = OnGenerateWidgetForColumn.Execute(PinnedTrack.ToSharedRef(), ColumnId, SharedThis(this));
		}

		return SNew(SOverlay)
		+SOverlay::Slot()
		[
			ColumnWidget.ToSharedRef()
		];
	}

	return SNullWidget::NullWidget;
}

void SEITrackOutlinerItem::AddTrackAreaReference(const TSharedPtr<SEITrack>& InTrackWidget)
{
	TrackWidget = InTrackWidget;
}

FText SEITrackOutlinerItem::GetLabelText() const
{
	return FText::FromString("");
}

bool SEITrackOutlinerItem::ShouldAppearHovered() const
{
	if(TSharedPtr<FEITimelineTrack> PinnedTrack = Track.Pin())
	{
		return bHovered || PinnedTrack->IsHovered();
	}

	return bHovered;
}

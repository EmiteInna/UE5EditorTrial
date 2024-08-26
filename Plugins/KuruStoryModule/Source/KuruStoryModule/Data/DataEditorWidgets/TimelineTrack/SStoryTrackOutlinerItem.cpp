#include "SStoryTrackOutlinerItem.h"

#include "SStoryTrackOutliner.h"
#include "StoryTimelineTrack.h"

SStoryTrackOutlinerItem::~SStoryTrackOutlinerItem()
{
	TSharedPtr<SStoryTrackOutliner> Outliner = StaticCastSharedPtr<SStoryTrackOutliner>(OwnerTablePtr.Pin());
	TSharedPtr<FStoryTimelineTrack> PinnedTrack = Track.Pin();
	if (Outliner.IsValid() && PinnedTrack.IsValid())
	{
		Outliner->OnChildRowRemoved(PinnedTrack.ToSharedRef());
	}
}

void SStoryTrackOutlinerItem::Construct(const FArguments& InArgs, const TSharedRef<STableViewBase>& InOwnerTableView,
	const TSharedRef<FStoryTimelineTrack>& InTrack)
{
	Track = InTrack;
	OnGenerateWidgetForColumn = InArgs._OnGenerateWidgetForColumn;
	HighlightText = InArgs._HighlightText;

	bHovered = false;
	SetHover(TAttribute<bool>::CreateSP(this, &SStoryTrackOutlinerItem::ShouldAppearHovered));

	SMultiColumnTableRow::Construct(
		SMultiColumnTableRow::FArguments()
			.ShowSelection(true),
		InOwnerTableView);
}

void SStoryTrackOutlinerItem::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
	const float InDeltaTime)
{
	StaticCastSharedPtr<SStoryTrackOutliner>(OwnerTablePtr.Pin())->ReportChildRowGeometry(Track.Pin().ToSharedRef(), AllottedGeometry);
}

FVector2D SStoryTrackOutlinerItem::ComputeDesiredSize(float LayoutScaleMultiplier) const
{
	TSharedPtr<FStoryTimelineTrack> PinnedTrack = Track.Pin();
	if(PinnedTrack.IsValid())
	{
		return FVector2D(100.0f, PinnedTrack->GetHeight() + PinnedTrack->GetPadding().Combined());
	}

	return FVector2D(100.0f, 16.0f);
}

void SStoryTrackOutlinerItem::OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	bHovered = true;
	SMultiColumnTableRow<TSharedRef<FStoryTimelineTrack>>::OnMouseEnter(MyGeometry, MouseEvent);

	TSharedPtr<FStoryTimelineTrack> PinnedTrack = Track.Pin();
	if(PinnedTrack.IsValid())
	{
		PinnedTrack->SetHovered(true);
	}
}

void SStoryTrackOutlinerItem::OnMouseLeave(const FPointerEvent& MouseEvent)
{
	bHovered = false;
	SMultiColumnTableRow<TSharedRef<FStoryTimelineTrack>>::OnMouseLeave(MouseEvent);

	TSharedPtr<FStoryTimelineTrack> PinnedTrack = Track.Pin();
	if(PinnedTrack.IsValid())
	{
		PinnedTrack->SetHovered(false);
	}
}

TSharedRef<SWidget> SStoryTrackOutlinerItem::GenerateWidgetForColumn(const FName& ColumnId)
{
	TSharedPtr<FStoryTimelineTrack> PinnedTrack = Track.Pin();
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

void SStoryTrackOutlinerItem::AddTrackAreaReference(const TSharedPtr<SStoryEventTrack>& InTrackWidget)
{
	TrackWidget = InTrackWidget;
}

FText SStoryTrackOutlinerItem::GetLabelText() const
{
	return FText::FromString("");
}

bool SStoryTrackOutlinerItem::ShouldAppearHovered() const
{
	if(TSharedPtr<FStoryTimelineTrack> PinnedTrack = Track.Pin())
	{
		return bHovered || PinnedTrack->IsHovered();
	}

	return bHovered;
}

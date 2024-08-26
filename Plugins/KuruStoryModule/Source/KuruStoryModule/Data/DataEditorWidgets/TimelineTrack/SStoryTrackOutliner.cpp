#include "SStoryTrackOutliner.h"

#include "SStoryEventTrack.h"
#include "SStoryEventTrackArea.h"
#include "SStoryTrackOutlinerItem.h"
#include "StoryTimelineTrack.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "Misc/TextFilterExpressionEvaluator.h"

SStoryTrackOutliner::~SStoryTrackOutliner()
{
	//todo 委托
}

void SStoryTrackOutliner::Construct(const FArguments& InArgs, UKuruStoryClipData* InAnimModel,
	const TSharedRef<SStoryEventTrackArea>& InTrackArea)
{
	Model = InAnimModel;
	TrackArea = InTrackArea;
	FilterText = InArgs._FilterText;
	bPhysicalTracksNeedUpdate = false;

	//委托
	//TracksChangedDelegateHandle = InAnimModel->OnTracksChanged().AddSP(this, &SAnimOutliner::HandleTracksChanged);

	TextFilter = MakeShareable(new FTextFilterExpressionEvaluator(ETextFilterExpressionEvaluatorMode::BasicString));

	HeaderRow = SNew(SHeaderRow)
		.Visibility(EVisibility::Collapsed);

	HeaderRow->AddColumn(
		SHeaderRow::Column(TEXT("Outliner"))
		.FillWidth(1.0f)
	);

	STreeView::Construct
	(
		STreeView::FArguments()
		.TreeItemsSource(&InAnimModel->GetAllRootTracks())
		.SelectionMode(ESelectionMode::Multi)
		.OnGenerateRow(this, &SStoryTrackOutliner::HandleGenerateRow) 
		.OnGetChildren(this, &SStoryTrackOutliner::HandleGetChildren)
		.HeaderRow(HeaderRow)
		.ExternalScrollbar(InArgs._ExternalScrollbar)
		.OnExpansionChanged(this, &SStoryTrackOutliner::HandleExpansionChanged)
		.AllowOverscroll(EAllowOverscroll::No)
		.OnContextMenuOpening(this, &SStoryTrackOutliner::HandleContextMenuOpening)
	);

	// expand all
	InAnimModel->ForEachRootTrack([this](FStoryTimelineTrack& InRootTrack)
	{
		InRootTrack.Traverse_ParentFirst([this](FStoryTimelineTrack& InTrack){ SetItemExpansion(InTrack.AsShared(), InTrack.IsExpanded()); return true; });
	});
}

void SStoryTrackOutliner::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	STreeView::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	// These are updated in both tick and paint since both calls can cause changes to the cached rows and the data needs
	// to be kept synchronized so that external measuring calls get correct and reliable results.
	if (bPhysicalTracksNeedUpdate)
	{
		PhysicalTracks.Reset();
		CachedTrackGeometry.GenerateValueArray(PhysicalTracks);

		PhysicalTracks.Sort([](const FCachedGeometry& A, const FCachedGeometry& B)
		{
			return A.Top < B.Top;
		});

		bPhysicalTracksNeedUpdate = false;
	}
}

int32 SStoryTrackOutliner::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
	const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
	const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	LayerId = STreeView::OnPaint(Args, AllottedGeometry, MyCullingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);

	// These are updated in both tick and paint since both calls can cause changes to the cached rows and the data needs
	// to be kept synchronized so that external measuring calls get correct and reliable results.
	if (bPhysicalTracksNeedUpdate)
	{
		PhysicalTracks.Reset();
		CachedTrackGeometry.GenerateValueArray(PhysicalTracks);

		PhysicalTracks.Sort([](const FCachedGeometry& A, const FCachedGeometry& B) 
		{
			return A.Top < B.Top;
		});

		bPhysicalTracksNeedUpdate = false;
	}

	return LayerId + 1;
}

void SStoryTrackOutliner::Private_SetItemSelection(TSharedRef<FStoryTimelineTrack> TheItem, bool bShouldBeSelected,
	bool bWasUserDirected)
{
	if(TheItem->SupportsSelection())
	{
		//todo 选择
	//	AnimModel.Pin()->SetTrackSelected(TheItem, bShouldBeSelected);

		STreeView::Private_SetItemSelection(TheItem, bShouldBeSelected, bWasUserDirected);
	}
}

void SStoryTrackOutliner::Private_ClearSelection()
{
	//todo 清除
	//AnimModel.Pin()->ClearTrackSelection();

	STreeView::Private_ClearSelection();
}

void SStoryTrackOutliner::Private_SelectRangeFromCurrentTo(TSharedRef<FStoryTimelineTrack> InRangeSelectionEnd)
{
	STreeView::Private_SelectRangeFromCurrentTo(InRangeSelectionEnd);

	for(TSet<TSharedRef<FStoryTimelineTrack>>::TIterator Iter = SelectedItems.CreateIterator(); Iter; ++Iter)
	{
		if(!(*Iter)->SupportsSelection())
		{
			Iter.RemoveCurrent();
		}
	}
//todo 多选
	/*for(const TSharedRef<FStoryTimelineTrack>& SelectedItem : SelectedItems)
	{
		
		AnimModel.Pin()->SetTrackSelected(SelectedItem, true);
	}*/
}

TOptional<SStoryTrackOutliner::FCachedGeometry> SStoryTrackOutliner::GetCachedGeometryForTrack(
	const TSharedRef<FStoryTimelineTrack>& InTrack) const
{
	if (const FCachedGeometry* FoundGeometry = CachedTrackGeometry.Find(InTrack))
	{
		return *FoundGeometry;
	}

	return TOptional<FCachedGeometry>();
}

TOptional<float> SStoryTrackOutliner::ComputeTrackPosition(const TSharedRef<FStoryTimelineTrack>& InTrack) const
{
	// Positioning strategy:
	// Attempt to root out any visible track in the specified track's sub-hierarchy, and compute the track's offset from that
	float NegativeOffset = 0.f;
	TOptional<float> Top;
	
	// Iterate parent first until we find a tree view row we can use for the offset height
	auto Iter = [&](FStoryTimelineTrack& InTrack)
	{		
		TOptional<FCachedGeometry> ChildRowGeometry = GetCachedGeometryForTrack(InTrack.AsShared());
		if (ChildRowGeometry.IsSet())
		{
			Top = ChildRowGeometry->Top;
			// Stop iterating
			return false;
		}

		NegativeOffset -= InTrack.GetHeight() + InTrack.GetPadding().Combined();
		return true;
	};

	InTrack->TraverseVisible_ParentFirst(Iter);

	if (Top.IsSet())
	{
		return NegativeOffset + Top.GetValue();
	}

	return Top;
}

void SStoryTrackOutliner::ReportChildRowGeometry(const TSharedRef<FStoryTimelineTrack>& InTrack,
	const FGeometry& InGeometry)
{
	const float ChildOffset = static_cast<float>(TransformPoint(
		Concatenate(
			InGeometry.GetAccumulatedLayoutTransform(),
			GetCachedGeometry().GetAccumulatedLayoutTransform().Inverse()
		),
		FVector2D(0,0)
	).Y);

	const FCachedGeometry* ExistingGeometry = CachedTrackGeometry.Find(InTrack);
	if(ExistingGeometry == nullptr || (ExistingGeometry->Top != ChildOffset || ExistingGeometry->Height != InGeometry.Size.Y))
	{
		CachedTrackGeometry.Add(InTrack, FCachedGeometry(InTrack, ChildOffset, static_cast<float>(InGeometry.Size.Y)));
		bPhysicalTracksNeedUpdate = true;
	}
}

void SStoryTrackOutliner::OnChildRowRemoved(const TSharedRef<FStoryTimelineTrack>& InTrack)
{
	CachedTrackGeometry.Remove(InTrack);
	bPhysicalTracksNeedUpdate = true;
}

void SStoryTrackOutliner::ScrollByDelta(float DeltaInSlateUnits)
{
	ScrollBy(GetCachedGeometry(), DeltaInSlateUnits, EAllowOverscroll::No);
}

void SStoryTrackOutliner::RefreshFilter()
{
	TextFilter->SetFilterText(FilterText.Get());

	RequestTreeRefresh();
}

TSharedRef<ITableRow> SStoryTrackOutliner::HandleGenerateRow(TSharedRef<FStoryTimelineTrack> InTrack,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	TSharedRef<SStoryTrackOutlinerItem> Row =
		SNew(SStoryTrackOutlinerItem, OwnerTable, InTrack)
		.OnGenerateWidgetForColumn(this, &SStoryTrackOutliner::GenerateWidgetForColumn)
		.HighlightText(FilterText);

	// Ensure the track area is kept up to date with the virtualized scroll of the tree view
	TSharedPtr<SStoryEventTrack> TrackWidget = TrackArea->FindTrackSlot(InTrack);

	if (!TrackWidget.IsValid())
	{
		// Add a track slot for the row
		TrackWidget = SNew(SStoryEventTrack, InTrack, SharedThis(this))
			.ViewRange(TAttribute<FAnimatedRange>::CreateLambda([this]()
				{return Model->GetViewRange();}))
		[
			 InTrack->GenerateContainerWidgetForTimeline()
		];

		TrackArea->AddTrackSlot(InTrack, TrackWidget);
	}

	if (ensure(TrackWidget.IsValid()))
	{
		Row->AddTrackAreaReference(TrackWidget);
	}

	return Row;
}

void SStoryTrackOutliner::HandleGetChildren(TSharedRef<FStoryTimelineTrack> Item,
	TArray<TSharedRef<FStoryTimelineTrack>>& OutChildren)
{
	if(!FilterText.Get().IsEmpty())
	{
		for(const TSharedRef<FStoryTimelineTrack>& Child : Item->GetChildren())
		{
			if(!Child->SupportsFiltering() || TextFilter->TestTextFilter(FBasicStringFilterExpressionContext(Child->GetLabel().ToString())))
			{
				OutChildren.Add(Child);
			}
		}
	}
	else
	{
		OutChildren.Append(Item->GetChildren());
	}
}

void SStoryTrackOutliner::HandleExpansionChanged(TSharedRef<FStoryTimelineTrack> InTrack, bool bIsExpanded)
{
	InTrack->SetExpanded(bIsExpanded);
	
	// Expand any children that are also expanded
	for (const TSharedRef<FStoryTimelineTrack>& Child : InTrack->GetChildren())
	{
		if (Child->IsExpanded())
		{
			SetItemExpansion(Child, true);
		}
	}
}

TSharedPtr<SWidget> SStoryTrackOutliner::HandleContextMenuOpening()
{
	/*const bool bShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder MenuBuilder(bShouldCloseWindowAfterMenuSelection, AnimModel.Pin()->GetCommandList());

	AnimModel.Pin()->BuildContextMenu(MenuBuilder);

	// > 1 because the search widget is always added
	return MenuBuilder.GetMultiBox()->GetBlocks().Num() > 1 ? MenuBuilder.MakeWidget() : TSharedPtr<SWidget>();*/
	return TSharedPtr<SWidget>();
}

void SStoryTrackOutliner::HandleTracksChanged()
{
	RequestTreeRefresh();
}

TSharedRef<SWidget> SStoryTrackOutliner::GenerateWidgetForColumn(const TSharedRef<FStoryTimelineTrack>& InTrack,
	const FName& ColumnId, const TSharedRef<SStoryTrackOutlinerItem>& Row) const
{
	return InTrack->GenerateContainerWidgetForOutliner(Row);
}

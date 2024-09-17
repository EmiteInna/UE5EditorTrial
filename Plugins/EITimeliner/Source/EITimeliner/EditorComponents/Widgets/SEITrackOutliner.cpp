#include "SEITrackOutliner.h"

#include "SEITrack.h"
#include "SEITrackArea.h"
#include "SEITrackOutlinerItem.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEITimelineTrack.h"

SEITrackOutliner::~SEITrackOutliner()
{
	//todo 委托
}

void SEITrackOutliner::Construct(const FArguments& InArgs,
		const TSharedRef<SEITrackArea>& InTrackArea,
		const TSharedRef<FEITimelinerContext>& InContext)
{
	Context = InContext;
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
		.TreeItemsSource(&Context.Pin()->EditingModel.Pin()->GetAllRootTracks())
		.SelectionMode(ESelectionMode::Multi)
		.OnGenerateRow(this, &SEITrackOutliner::HandleGenerateRow) 
		.OnGetChildren(this, &SEITrackOutliner::HandleGetChildren)
		.HeaderRow(HeaderRow)
		.ExternalScrollbar(InArgs._ExternalScrollbar)
		.OnExpansionChanged(this, &SEITrackOutliner::HandleExpansionChanged)
		.AllowOverscroll(EAllowOverscroll::No)
		.OnContextMenuOpening(this, &SEITrackOutliner::HandleContextMenuOpening)
	);

	// expand all
	Context.Pin()->EditingModel.Pin()->ForEachRootTrack([this](FEITimelineTrack& InRootTrack)
	{
		InRootTrack.Traverse_ParentFirst([this](FEITimelineTrack& InTrack){ SetItemExpansion(InTrack.AsShared(), InTrack.IsExpanded()); return true; });
	});
}

void SEITrackOutliner::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
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

int32 SEITrackOutliner::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
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

void SEITrackOutliner::Private_SetItemSelection(TSharedRef<FEITimelineTrack> TheItem, bool bShouldBeSelected,
	bool bWasUserDirected)
{
	if(TheItem->SupportsSelection())
	{
		//todo 选择
	//	AnimModel.Pin()->SetTrackSelected(TheItem, bShouldBeSelected);

		STreeView::Private_SetItemSelection(TheItem, bShouldBeSelected, bWasUserDirected);
	}
}

void SEITrackOutliner::Private_ClearSelection()
{
	//todo 清除
	//AnimModel.Pin()->ClearTrackSelection();

	STreeView::Private_ClearSelection();
}

void SEITrackOutliner::Private_SelectRangeFromCurrentTo(TSharedRef<FEITimelineTrack> InRangeSelectionEnd)
{
	STreeView::Private_SelectRangeFromCurrentTo(InRangeSelectionEnd);

	for(TSet<TSharedRef<FEITimelineTrack>>::TIterator Iter = SelectedItems.CreateIterator(); Iter; ++Iter)
	{
		if(!(*Iter)->SupportsSelection())
		{
			Iter.RemoveCurrent();
		}
	}
//todo 多选
	/*for(const TSharedRef<FEITimelineTrack>& SelectedItem : SelectedItems)
	{
		
		AnimModel.Pin()->SetTrackSelected(SelectedItem, true);
	}*/
}

TOptional<SEITrackOutliner::FCachedGeometry> SEITrackOutliner::GetCachedGeometryForTrack(
	const TSharedRef<FEITimelineTrack>& InTrack) const
{
	if (const FCachedGeometry* FoundGeometry = CachedTrackGeometry.Find(InTrack))
	{
		return *FoundGeometry;
	}

	return TOptional<FCachedGeometry>();
}

TOptional<float> SEITrackOutliner::ComputeTrackPosition(const TSharedRef<FEITimelineTrack>& InTrack) const
{
	// Positioning strategy:
	// Attempt to root out any visible track in the specified track's sub-hierarchy, and compute the track's offset from that
	float NegativeOffset = 0.f;
	TOptional<float> Top;
	
	// Iterate parent first until we find a tree view row we can use for the offset height
	auto Iter = [&](FEITimelineTrack& InTrack)
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

void SEITrackOutliner::ReportChildRowGeometry(const TSharedRef<FEITimelineTrack>& InTrack,
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

void SEITrackOutliner::OnChildRowRemoved(const TSharedRef<FEITimelineTrack>& InTrack)
{
	CachedTrackGeometry.Remove(InTrack);
	bPhysicalTracksNeedUpdate = true;
}

void SEITrackOutliner::ScrollByDelta(float DeltaInSlateUnits)
{
	ScrollBy(GetCachedGeometry(), DeltaInSlateUnits, EAllowOverscroll::No);
}

void SEITrackOutliner::RefreshFilter()
{
	TextFilter->SetFilterText(FilterText.Get());

	RequestTreeRefresh();
}

TSharedRef<ITableRow> SEITrackOutliner::HandleGenerateRow(TSharedRef<FEITimelineTrack> InTrack,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	TSharedRef<SEITrackOutlinerItem> Row =
		Context.Pin()->SpawnCore.Pin()->CreateTrackOutlinerItem(this,InTrack,OwnerTable);
		

	// Ensure the track area is kept up to date with the virtualized scroll of the tree view
	TSharedPtr<SEITrack> TrackWidget = TrackArea->FindTrackSlot(InTrack);

	if (!TrackWidget.IsValid())
	{
		// Add a track slot for the row
		/*TrackWidget = SNew(SEITrack,
			InTrack,
			SharedThis(this),
			Context.Pin().ToSharedRef()).ViewRange(TAttribute<FAnimatedRange>::CreateLambda([this]()
			{
				return Context.Pin()->EditingModel.Pin()->GetViewRange();
			}))
		[
			 InTrack->GenerateContainerWidgetForTimeline()
		];*/

		TrackWidget = Context.Pin()->SpawnCore.Pin()->CreateTrack(InTrack,SharedThis(this),Context.Pin().ToSharedRef());

		TrackArea->AddTrackSlot(InTrack, TrackWidget);
	}

	if (ensure(TrackWidget.IsValid()))
	{
		Row->AddTrackAreaReference(TrackWidget);
	}

	return Row;
}

void SEITrackOutliner::HandleGetChildren(TSharedRef<FEITimelineTrack> Item,
	TArray<TSharedRef<FEITimelineTrack>>& OutChildren)
{
	if(!FilterText.Get().IsEmpty())
	{
		for(const TSharedRef<FEITimelineTrack>& Child : Item->GetChildren())
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

void SEITrackOutliner::HandleExpansionChanged(TSharedRef<FEITimelineTrack> InTrack, bool bIsExpanded)
{
	InTrack->SetExpanded(bIsExpanded);
	
	// Expand any children that are also expanded
	for (const TSharedRef<FEITimelineTrack>& Child : InTrack->GetChildren())
	{
		if (Child->IsExpanded())
		{
			SetItemExpansion(Child, true);
		}
	}
}

TSharedPtr<SWidget> SEITrackOutliner::HandleContextMenuOpening()
{
	/*const bool bShouldCloseWindowAfterMenuSelection = true;
	FMenuBuilder MenuBuilder(bShouldCloseWindowAfterMenuSelection, AnimModel.Pin()->GetCommandList());

	AnimModel.Pin()->BuildContextMenu(MenuBuilder);

	// > 1 because the search widget is always added
	return MenuBuilder.GetMultiBox()->GetBlocks().Num() > 1 ? MenuBuilder.MakeWidget() : TSharedPtr<SWidget>();*/
	return TSharedPtr<SWidget>();
}

void SEITrackOutliner::HandleTracksChanged()
{
	RequestTreeRefresh();
}

TSharedRef<SWidget> SEITrackOutliner::GenerateWidgetForColumn(const TSharedRef<FEITimelineTrack>& InTrack,
	const FName& ColumnId, const TSharedRef<SEITrackOutlinerItem>& Row) const
{
	return InTrack->GenerateContainerWidgetForOutliner(Row);
}

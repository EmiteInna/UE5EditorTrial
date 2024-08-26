#include "StoryTimelineTrack.h"

#include "SStoryTrackOutlinerItem.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"

const float FStoryTimelineTrack::OutlinerRightPadding = 8.0f;

STORYTIMELINE_IMPLEMENT_TRACK(FStoryTimelineTrack);

void FStoryTimelineTrack::AddChild(const TSharedRef<FStoryTimelineTrack>& InChild)
{
}

FText FStoryTimelineTrack::GetLabel() const
{
	return DisplayName;
}

FText FStoryTimelineTrack::GetToolTipText() const
{
	return ToolTipText;
}

bool FStoryTimelineTrack::Traverse_ChildFirst(const TFunctionRef<bool(FStoryTimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	for (TSharedRef<FStoryTimelineTrack>& Child : Children)
	{
		if (!Child->Traverse_ChildFirst(InPredicate, true))
		{
			return false;
		}
	}

	return bIncludeThisTrack ? InPredicate(*this) : true;
}

bool FStoryTimelineTrack::Traverse_ParentFirst(const TFunctionRef<bool(FStoryTimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	if (bIncludeThisTrack && !InPredicate(*this))
	{
		return false;
	}

	for (TSharedRef<FStoryTimelineTrack>& Child : Children)
	{
		if (!Child->Traverse_ParentFirst(InPredicate, true))
		{
			return false;
		}
	}

	return true;
}

bool FStoryTimelineTrack::TraverseVisible_ChildFirst(const TFunctionRef<bool(FStoryTimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	// If the item is not expanded, its children ain't visible
	if (IsExpanded())
	{
		for (TSharedRef<FStoryTimelineTrack>& Child : Children)
		{
			if (Child->IsVisible() && !Child->TraverseVisible_ChildFirst(InPredicate, true))
			{
				return false;
			}
		}
	}

	if (bIncludeThisTrack && IsVisible())
	{
		return InPredicate(*this);
	}

	// Continue iterating regardless of visibility
	return true;
}

bool FStoryTimelineTrack::TraverseVisible_ParentFirst(const TFunctionRef<bool(FStoryTimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	if (bIncludeThisTrack && IsVisible() && !InPredicate(*this))
	{
		return false;
	}

	// If the item is not expanded, its children ain't visible
	if (IsExpanded())
	{
		for (TSharedRef<FStoryTimelineTrack>& Child : Children)
		{
			if (Child->IsVisible() && !Child->TraverseVisible_ParentFirst(InPredicate, true))
			{
				return false;
			}
		}
	}

	return true;
}

TSharedRef<SWidget> FStoryTimelineTrack::GenerateContainerWidgetForOutliner(
	const TSharedRef<SStoryTrackOutlinerItem>& InRow)
{
	TSharedPtr<SBorder> OuterBorder;
	TSharedPtr<SHorizontalBox> InnerHorizontalBox;
	TSharedRef<SWidget> Widget = GenerateStandardOutlinerWidget(InRow, true, OuterBorder, InnerHorizontalBox);

	if(bIsHeaderTrack)
	{
		OuterBorder->SetBorderBackgroundColor(FAppStyle::GetColor("AnimTimeline.Outliner.HeaderColor"));
	}

	return Widget;
}

TSharedRef<SWidget> FStoryTimelineTrack::GenerateContainerWidgetForTimeline()
{
	return SNullWidget::NullWidget;
}

void FStoryTimelineTrack::AddToContextMenu(FMenuBuilder& InMenuBuilder, TSet<FName>& InOutExistingMenuTypes) const
{
}

TSharedRef<SWidget> FStoryTimelineTrack::GenerateStandardOutlinerWidget(
	const TSharedRef<SStoryTrackOutlinerItem>& InRow, bool bWithLabelText, TSharedPtr<SBorder>& OutOuterBorder,
	TSharedPtr<SHorizontalBox>& OutInnerHorizontalBox)
{
	TSharedRef<SWidget> Widget =
		SAssignNew(OutOuterBorder, SBorder)
		.ToolTipText(this, &FStoryTimelineTrack::GetToolTipText)
		.BorderImage(FAppStyle::GetBrush("Sequencer.Section.BackgroundTint"))
		.BorderBackgroundColor(FAppStyle::GetColor("AnimTimeline.Outliner.ItemColor"))
		[
			SAssignNew(OutInnerHorizontalBox, SHorizontalBox)
			+SHorizontalBox::Slot()
			.VAlign(VAlign_Center)
			.AutoWidth()
			.Padding(4.0f, 1.0f)
			[
				SNew(SExpanderArrow, InRow)
			]
		];

	if(bWithLabelText)
	{
		OutInnerHorizontalBox->AddSlot()
			.VAlign(VAlign_Center)
			.HAlign(HAlign_Left)
			.Padding(2.0f, 1.0f)
			.FillWidth(1.0f)
			[
				SNew(STextBlock)
				.TextStyle(&FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("AnimTimeline.Outliner.Label"))
				.Text(this, &FStoryTimelineTrack::GetLabel)
				.HighlightText(InRow->GetHighlightText())
			];
	}

	return Widget;
}

float FStoryTimelineTrack::GetMaxInput() const
{
	return GetModel()->TotalLength; 
}

float FStoryTimelineTrack::GetViewMinInput() const
{
	return 0;
}

float FStoryTimelineTrack::GetViewMaxInput() const
{
	return GetModel()->TotalLength;
}

float FStoryTimelineTrack::GetScrubValue() const
{
	return GetModel()->GetScrubPosition().Value/GetModel()->GetTickResolution();
}

void FStoryTimelineTrack::SelectObjects(const TArray<UObject*>& SelectedItems)
{
	//todo select
}

void FStoryTimelineTrack::OnSetInputViewRange(float ViewMin, float ViewMax)
{
	//todo set view range
}

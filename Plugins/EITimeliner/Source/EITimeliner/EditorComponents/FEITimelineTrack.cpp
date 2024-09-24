#include "FEITimelineTrack.h"

#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "Widgets/SEITrackOutlinerItem.h"


const float FEITimelineTrack::OutlinerRightPadding = 8.0f;

EITIMELINE_IMPLEMENT_TRACK(FEITimelineTrack);

FEITimelineTrack::~FEITimelineTrack()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] Timeline Track 被摧毁"))
}

void FEITimelineTrack::AddChild(const TSharedRef<FEITimelineTrack>& InChild)
{
}

FText FEITimelineTrack::GetLabel() const
{
	return DisplayName;
}

FText FEITimelineTrack::GetToolTipText() const
{
	return ToolTipText;
}

bool FEITimelineTrack::Traverse_ChildFirst(const TFunctionRef<bool(FEITimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	for (TSharedRef<FEITimelineTrack>& Child : Children)
	{
		if (!Child->Traverse_ChildFirst(InPredicate, true))
		{
			return false;
		}
	}

	return bIncludeThisTrack ? InPredicate(*this) : true;
}

bool FEITimelineTrack::Traverse_ParentFirst(const TFunctionRef<bool(FEITimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	if (bIncludeThisTrack && !InPredicate(*this))
	{
		return false;
	}

	for (TSharedRef<FEITimelineTrack>& Child : Children)
	{
		if (!Child->Traverse_ParentFirst(InPredicate, true))
		{
			return false;
		}
	}

	return true;
}

bool FEITimelineTrack::TraverseVisible_ChildFirst(const TFunctionRef<bool(FEITimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	// If the item is not expanded, its children ain't visible
	if (IsExpanded())
	{
		for (TSharedRef<FEITimelineTrack>& Child : Children)
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

bool FEITimelineTrack::TraverseVisible_ParentFirst(const TFunctionRef<bool(FEITimelineTrack&)>& InPredicate,
	bool bIncludeThisTrack)
{
	if (bIncludeThisTrack && IsVisible() && !InPredicate(*this))
	{
		return false;
	}

	// If the item is not expanded, its children ain't visible
	if (IsExpanded())
	{
		for (TSharedRef<FEITimelineTrack>& Child : Children)
		{
			if (Child->IsVisible() && !Child->TraverseVisible_ParentFirst(InPredicate, true))
			{
				return false;
			}
		}
	}

	return true;
}

TSharedRef<SWidget> FEITimelineTrack::GenerateContainerWidgetForOutliner(
	const TSharedRef<SEITrackOutlinerItem>& InRow)
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

TSharedRef<SWidget> FEITimelineTrack::GenerateContainerWidgetForTimeline()
{
	return SNullWidget::NullWidget;
}

void FEITimelineTrack::AddToContextMenu(FMenuBuilder& InMenuBuilder, TSet<FName>& InOutExistingMenuTypes) const
{
}

TSharedRef<SWidget> FEITimelineTrack::GenerateStandardOutlinerWidget(
	const TSharedRef<SEITrackOutlinerItem>& InRow, bool bWithLabelText, TSharedPtr<SBorder>& OutOuterBorder,
	TSharedPtr<SHorizontalBox>& OutInnerHorizontalBox)
{
	TSharedRef<SWidget> Widget =
		SAssignNew(OutOuterBorder, SBorder)
		.ToolTipText(this, &FEITimelineTrack::GetToolTipText)
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
				.Text(this, &FEITimelineTrack::GetLabel)
				.HighlightText(InRow->GetHighlightText())
			];
	}

	return Widget;
}

float FEITimelineTrack::GetMaxInput() const
{
	return GetModel().Pin()->GetTotalLength(); 
}

float FEITimelineTrack::GetViewMinInput() const
{
	return 0;
}

float FEITimelineTrack::GetViewMaxInput() const
{
	return GetModel().Pin()->GetTotalLength(); 
}

float FEITimelineTrack::GetScrubValue() const
{
	return GetModel().Pin()->GetScrubPosition().Value/GetModel().Pin()->GetTickResolution();
}

void FEITimelineTrack::SelectObjects(const TArray<UObject*>& SelectedItems)
{
	//todo select
}

void FEITimelineTrack::OnSetInputViewRange(float ViewMin, float ViewMax)
{
	//todo set view range
}

#include "SEIToolBox.h"

#include "SEINotifyPickerRow.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"
#include "EITimeliner/EditorUtils/EIWidgetStore.h"
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEINotifyLibrary.h"

void SEIToolBox::Construct(const FArguments& Arguments, const TSharedRef<FEITimelinerContext>& InContext)
{
	Context = InContext;

	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	TitleTextFont.Size = 16;

	ChildSlot[
		SNew(SOverlay)+
		SOverlay::Slot()[
			SNew(SImage).Image(FEIWidgetStores::GrayBrush)
		]
		+
		SOverlay::Slot().Padding(10)[
			SNew(SVerticalBox)
			+SVerticalBox::Slot().Padding(5).VAlign(VAlign_Center).AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot().Padding(0,5,0,5).AutoWidth()[
							SNew(STextBlock).Text(FText::FromString(TEXT("总时长："))).Font(TitleTextFont)
					].VAlign(VAlign_Center).HAlign(HAlign_Center)
				+
				SHorizontalBox::Slot().Padding(5).AutoWidth()[
					SAssignNew(TextBox_CurrentTotalTime, SEditableTextBox).
						Text(MakeAttributeRaw(this,&SEIToolBox::GetCurrentTotalTime))
						.OnTextCommitted(this,&SEIToolBox::Bind_OnEditingCurrentTotalTime)
				]
				
				+SHorizontalBox::Slot().Padding(0,5,0,5).AutoWidth()[
							SNew(STextBlock).Text(FText::FromString(TEXT("选中起始时间："))).Font(TitleTextFont)
					].VAlign(VAlign_Center).HAlign(HAlign_Center)
				+
				SHorizontalBox::Slot().Padding(5).AutoWidth()[
					SAssignNew(TextBox_CurrentNotifyBeginTime, SEditableTextBox).
						Text(MakeAttributeRaw(this,&SEIToolBox::GetCurrentNotifyBeginTime))
						.OnTextCommitted(this,&SEIToolBox::Bind_OnEditingCurrentNotifyBeginTime)
				]
				
				+SHorizontalBox::Slot().Padding(0,5,0,5).AutoWidth()[
							SNew(STextBlock).Text(FText::FromString(TEXT("总时长："))).Font(TitleTextFont)
					].VAlign(VAlign_Center).HAlign(HAlign_Center)
				+
				SHorizontalBox::Slot().Padding(5).AutoWidth()[
					SAssignNew(TextBox_CurrentNotifyEndTime, SEditableTextBox).
						Text(MakeAttributeRaw(this,&SEIToolBox::GetCurrentNotifyEndTime))
						.OnTextCommitted(this,&SEIToolBox::Bind_OnEditingCurrentNotifyEndTime)
				]
			]

			+SVerticalBox::Slot().Padding(5,50,0,0).VAlign(VAlign_Fill).HAlign(HAlign_Fill).AutoHeight()
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot().Padding(0,5,0,5).VAlign(VAlign_Fill).HAlign(HAlign_Fill).AutoWidth()[
					SNew(SBox)
						.HeightOverride(180)
						.WidthOverride(300)
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						[
							SNew(SScrollBox)
							.Style(FEIWidgetStores::KawaiiScrollBox)
							.ScrollBarStyle(FEIWidgetStores::KawaiiScrollBar)
							+SScrollBox::Slot()
							[
								SAssignNew(SW_NotifyList,SListView<TSharedPtr<UEINotifyItem>>)
								.ItemHeight(55.f)
								.ListItemsSource(&Context.Pin()->NotifyLibrary.Pin()->NotifyItems)
								.OnGenerateRow(this,&SEIToolBox::OnGenerateRowForNotifyItem)
							]
						]
				].VAlign(VAlign_Center).HAlign(HAlign_Center)
				
				+SHorizontalBox::Slot().Padding(25,5,0,5).AutoWidth()[
					SAssignNew(Button_DeleteChosenNotify,SButton).Text(FText::FromString(TEXT("删")))
					.ButtonStyle(FEIWidgetStores::KawaiiDefaultButton)
					.ForegroundColor(FEIWidgetStores::KawaiiBlack)
					.OnClicked(this,&SEIToolBox::Bind_OnDeleteChosenNotify)
					.VAlign(VAlign_Center)
				].VAlign(VAlign_Top).HAlign(HAlign_Left)
			]
		]
	];
}
FText SEIToolBox::GetCurrentTotalTime() const
{
	if (Context.IsValid())
	{
		if (Context.Pin()->EditingModel.IsValid())
		{
			return FText::FromString(FString::Printf(TEXT("%g"),Context.Pin()->EditingModel.Pin()->GetTotalLength()));
		}
	}
	return FText::FromString(TEXT("Error"));
}

FText SEIToolBox::GetCurrentNotifyBeginTime() const
{
	if (Context.IsValid())
	{
		if (Context.Pin()->NotifyLibrary.IsValid())
		{
			return FText::FromString(FString::Printf(TEXT("%g"),Context.Pin()->NotifyLibrary.Pin()->GetCurrentChosenTrackStartTime()));
		}
	}
	return FText::FromString(TEXT("Error"));
}

FText SEIToolBox::GetCurrentNotifyEndTime() const
{
	if (Context.IsValid())
	{
		if (Context.Pin()->NotifyLibrary.IsValid())
		{
			return FText::FromString(FString::Printf(TEXT("%g"),Context.Pin()->NotifyLibrary.Pin()->GetCurrentChosenTrackEndTime()));
		}
	}
	return FText::FromString(TEXT("Error"));
}

TSharedRef<ITableRow> SEIToolBox::OnGenerateRowForNotifyItem(TSharedPtr<UEINotifyItem> Item,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	ensure(Item.IsValid());
	TSharedRef<SEINotifyPickerRow> ChildWidget =
		Context.Pin()->SpawnCore.Pin()->CreateNotifyPickerRow(Context.Pin().ToSharedRef(),Item);

	TSharedRef<STableRow<TSharedPtr<UEINotifyItem>>> ListView = SNew(STableRow<TSharedPtr<UEINotifyItem>>,OwnerTable)[
		ChildWidget];
	return ListView;
}

void SEIToolBox::Bind_OnEditingCurrentTotalTime(const FText& NewText, ETextCommit::Type CommitType)
{
	float Value = NewText.IsNumeric()?FCString::Atof(*NewText.ToString()):-1;

	if (Value < 0)
	{
		return;
	}

	if (Context.IsValid() && Context.Pin()->NotifyLibrary.IsValid())
	{
		Context.Pin()->NotifyLibrary.Pin()->SetClipTotalDuration(Value);
	}
}

void SEIToolBox::Bind_OnEditingCurrentNotifyBeginTime(const FText& NewText, ETextCommit::Type CommitType)
{
	float Value = NewText.IsNumeric()?FCString::Atof(*NewText.ToString()):-1;

	if (Value < 0)
	{
		return;
	}

	if (Context.IsValid() && Context.Pin()->NotifyLibrary.IsValid())
	{
		Context.Pin()->NotifyLibrary.Pin()->SetCurrentChosenTrackStartTime(Value);
	}
}

void SEIToolBox::Bind_OnEditingCurrentNotifyEndTime(const FText& NewText, ETextCommit::Type CommitType)
{
	float Value = NewText.IsNumeric()?FCString::Atof(*NewText.ToString()):-1;

	if (Value < 0)
	{
		return;
	}

	if (Context.IsValid() && Context.Pin()->NotifyLibrary.IsValid())
	{
		Context.Pin()->NotifyLibrary.Pin()->SetCurrentChosenTrackEndTime(Value);
	}
}
FReply SEIToolBox::Bind_OnDeleteChosenNotify()
{
	if (Context.IsValid() && Context.Pin()->NotifyLibrary.IsValid())
	{
		return Context.Pin()->NotifyLibrary.Pin()->OnDeleteChosenNotify();
	}
	return FReply::Handled();
}
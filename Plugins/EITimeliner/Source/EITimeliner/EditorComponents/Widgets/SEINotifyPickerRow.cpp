#include "SEINotifyPickerRow.h"

#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/EditorComponents/EINotifyItem.h"
#include "EITimeliner/EditorComponents/FEINotifyLibrary.h"
#include "EITimeliner/EditorUtils/EIWidgetStore.h"

void SEINotifyPickerRow::Construct(const FArguments& Arguments, const TSharedRef<FEITimelinerContext>& InContext,
                                   const TSharedRef<UEINotifyItem>& InNotify)
{
	Context = InContext;
	NotifyItem = InNotify;
	
	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	TitleTextFont.Size = 14;
	
	ChildSlot[
		SNew(SHorizontalBox)
		+
		SHorizontalBox::Slot().Padding(5).VAlign(VAlign_Fill).HAlign(HAlign_Fill).AutoWidth()
		[
			SNew(SBox)
			.HeightOverride(35)
			.WidthOverride(200)
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SButton).Text(MakeAttributeLambda(
					[this](){return FText::FromString(NotifyItem.Pin()->NotifyName.ToString());}))
					.ButtonStyle(FEIWidgetStores::KawaiiDefaultButton)
					.ForegroundColor(FEIWidgetStores::KawaiiBlack)
					.OnClicked(this,&SEINotifyPickerRow::OnClickPickerNameButton)
					.VAlign(VAlign_Center)
			]
		]
		+
		SHorizontalBox::Slot().Padding(5).VAlign(VAlign_Center).AutoWidth()
		[
			SNew(SBox)
			.HeightOverride(35)
			.WidthOverride(45)
			[
				SNew(SButton).Text(FText::FromString("+"))
					.ButtonStyle(FEIWidgetStores::KawaiiDefaultButton)
					.ForegroundColor(FEIWidgetStores::KawaiiBlack)
					.OnClicked(this,&SEINotifyPickerRow::OnClickPickerAddButton)
					.VAlign(VAlign_Center)
					.HAlign(HAlign_Center)
			]
		]
	];
}

FReply SEINotifyPickerRow::OnClickPickerNameButton()
{
	if (Context.IsValid())
	{
		return Context.Pin()->NotifyLibrary.Pin()->OnClickOpenNotifyDescriptionWindow(NotifyItem.Pin()->NotifyName);
	}
	return FReply::Handled();
}

FReply SEINotifyPickerRow::OnClickPickerAddButton()
{
	if (Context.IsValid())
	{
		return Context.Pin()->NotifyLibrary.Pin()->OnClickAddNotify(NotifyItem.Pin()->NotifyName);
	}
	return FReply::Handled();
}

SEINotifyPickerRow::~SEINotifyPickerRow()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] NotifyPickerRow 被摧毁"))
}

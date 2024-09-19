#pragma once

class UEINotifyItem;
class FEITimelinerContext;

//起名鬼才
class EITIMELINER_API   SEINotifyPickerRow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEINotifyPickerRow){}

	SLATE_END_ARGS()

	void Construct(const FArguments& Arguments,
					const TSharedRef<FEITimelinerContext>& InContext,
					const TSharedRef<UEINotifyItem>& InNotify);

	TWeakPtr<UEINotifyItem> NotifyItem;
	TWeakPtr<FEITimelinerContext> Context;

	FReply OnClickPickerNameButton();
	FReply OnClickPickerAddButton();
};



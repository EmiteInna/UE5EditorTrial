#pragma once

class UEINotifyItem;
class FEITimelinerContext;

//工具箱，你最好重载它，当然你也可以不重载（
class EITIMELINER_API  SEIToolBox:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEIToolBox){}

	SLATE_END_ARGS()

	void Construct(const FArguments& Arguments,
					const TSharedRef<FEITimelinerContext>& InContext);

	TWeakPtr<FEITimelinerContext> Context;

public:
	TSharedPtr<SEditableTextBox> TextBox_CurrentTotalTime;
	TSharedPtr<SEditableTextBox> TextBox_CurrentNotifyBeginTime;
	TSharedPtr<SEditableTextBox> TextBox_CurrentNotifyEndTime;
	TSharedPtr<SButton> Button_DeleteChosenNotify;

	TSharedPtr<SListView<TSharedPtr<UEINotifyItem>>> SW_NotifyList;

	TSharedRef<ITableRow> OnGenerateRowForNotifyItem(TSharedPtr<UEINotifyItem> Item, const TSharedRef<STableViewBase>& OwnerTable);


	FText GetCurrentTotalTime()const;
	FText GetCurrentNotifyBeginTime()const;
	FText GetCurrentNotifyEndTime()const;
	
	void Bind_OnEditingCurrentTotalTime(const FText& NewText, ETextCommit::Type CommitType);
	void Bind_OnEditingCurrentNotifyBeginTime(const FText& NewText, ETextCommit::Type CommitType);
	void Bind_OnEditingCurrentNotifyEndTime(const FText& NewText, ETextCommit::Type CommitType);
	FReply Bind_OnDeleteChosenNotify();
};



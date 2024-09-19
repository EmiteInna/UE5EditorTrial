#include "FEINotifyLibrary.h"

#include "EINotifyItem.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"

void FEINotifyLibrary::Initialize()
{
	
}

bool FEINotifyLibrary::RegisterNewNotifyItem(FName NotifyName, FString NotifyDescription)
{
	for(auto NotifyItem : NotifyItems)
	{
		if (NotifyItem.IsValid())
		{
			if (NotifyItem->NotifyName == NotifyName)
			{
				return false;
			}
		}
	}
	
	TSharedPtr<UEINotifyItem> NewItem = MakeShareable(new UEINotifyItem);
	NewItem->NotifyName = NotifyName;
	NewItem->NotifyDescription = NotifyDescription;
	if (NewItem.IsValid())
	{
		NotifyItems.Emplace(NewItem);
		return true;
	}
	
	return false;
}

FReply FEINotifyLibrary::OnClickOpenNotifyDescriptionWindow(FName NotifyName)
{
	FString Content="";
	bool bFound = false;

	for (auto Notify : NotifyItems)
	{
		if (Notify.IsValid())
		{
			if (Notify->NotifyName==NotifyName)
			{
				bFound=true;
				Content = Notify->NotifyDescription;
			}
		}
	}

	if (bFound == false)
	{
		return FReply::Handled();
	}
	
	//我直接开个窗口
	TSharedRef<SWidget> ContentWidget = SNew(STextBlock).Text(FText::FromString(Content));
	TSharedRef<SWindow> OutputWindow = SNew(SWindow).Title(FText::FromString(NotifyName.ToString()))
	.ClientSize(FVector2D(400,300)).Content()[ContentWidget];

	FSlateApplication::Get().AddModalWindow(OutputWindow, nullptr);

	return FReply::Handled();
}

FReply FEINotifyLibrary::OnClickAddNotify(FName NotifyName)
{
	//我直接啥都不干
	return FReply::Handled();
}
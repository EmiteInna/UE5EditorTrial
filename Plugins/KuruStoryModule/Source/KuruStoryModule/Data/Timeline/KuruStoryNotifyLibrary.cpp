#include "KuruStoryNotifyLibrary.h"

#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerTopWidgetBase.h"
#include "KuruStoryModule/Data/Timeline/KuruStoryClipData_Model.h"
#include "KuruStoryRuntime/KuruStoryClipData.h"
#include "KuruStoryRuntime/KuruStorySectionData.h"
#include "KuruStoryRuntime/StoryNotifies/StoryNotifyEventBase.h"

UKuruStoryClipData* FKuruStoryNotifyLibrary::GetEdittingObj() const
{
	auto Model = StaticCastSharedPtr<FKuruStoryClipData_Model>(Context.Pin()->EditingModel.Pin());
	if (Model)
	{
		return Model->GetEditingObj();
	}
	return nullptr;
}

void FKuruStoryNotifyLibrary::Initialize()
{
	
	RegisterNewNotifyItem(FName(TEXT("Hello")),TEXT("您讨厌像我这样将命运这样肤浅的话语挂在嘴边的女孩子么？"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify1")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify2")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify3")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify4")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify5")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify6")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify7")),TEXT("这个世界的金币"));
	RegisterNewNotifyItem(FName(TEXT("CustomNotify8")),TEXT("这个世界的金币"));
	
	FEINotifyLibrary::Initialize();
}

FReply FKuruStoryNotifyLibrary::OnClickAddNotify(FName NotifyName)
{
	UStoryNotifyEventBase* NewEvent = NewObject<UStoryNotifyEventBase>(GetEdittingObj()->Parent);
	NewEvent->Name = NotifyName;
	NewEvent->SetStartTime(0);
	NewEvent->SetEndTime(1);
	NewEvent->ObjectOwner = GetEdittingObj();
	
	if (GetEdittingObj())
	{
		const FScopedTransaction AddTaskTransaction(FText::FromString("NotifyAdd"));
		GetEdittingObj()->Modify();
		
		GetEdittingObj()->Notifies.Emplace(NewEvent);
	}
	
	if (Context.IsValid() && Context.Pin()->EditingModel.IsValid())
	{
		Context.Pin()->EditingModel.Pin()->ReconcileTracks();
	}
	return FReply::Handled();
}

float FKuruStoryNotifyLibrary::GetCurrentChosenTrackEndTime() const
{
	return FEINotifyLibrary::GetCurrentChosenTrackEndTime();
}

float FKuruStoryNotifyLibrary::GetCurrentChosenTrackStartTime() const
{
	return FEINotifyLibrary::GetCurrentChosenTrackStartTime();
}

void FKuruStoryNotifyLibrary::SetCurrentChosenTrackEndTime(float newValue)
{
	FEINotifyLibrary::SetCurrentChosenTrackEndTime(newValue);
}

void FKuruStoryNotifyLibrary::SetCurrentChosenTrackStartTime(float newValue)
{
	FEINotifyLibrary::SetCurrentChosenTrackStartTime(newValue);
}

void FKuruStoryNotifyLibrary::SetClipTotalDuration(float newValue)
{
	if (GetEdittingObj())
	{
		GetEdittingObj()->TotalLength = newValue;
	}
}

FReply FKuruStoryNotifyLibrary::OnDeleteChosenNotify()
{
	const FScopedTransaction AddTaskTransaction(FText::FromString("NotifyDeletion"));
	GetEdittingObj()->Modify();
	
	return FEINotifyLibrary::OnDeleteChosenNotify();
}

FReply FKuruStoryNotifyLibrary::OnChooseTrack(int ChooseID)
{
	FReply RepBase = FEINotifyLibrary::OnChooseTrack(ChooseID);
	if (Context.IsValid() && GetEdittingObj())
	{
		if (Context.Pin()->TopWidget.IsValid())
		{
			if (Context.Pin()->TopWidget.Pin()->NotifyDetailView.IsValid())
			{
				Context.Pin()->TopWidget.Pin()->NotifyDetailView->
					SetObject(GetEdittingObj()->Notifies[CurrentChosenTrackIndex],true);
			}
		}
	}

	return RepBase;
}
#include "KuruStoryNotifyLibrary.h"

#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerTopWidgetBase.h"
#include "KuruStoryModule/Data/Timeline/KuruStoryClipData_Model.h"
#include "KuruStoryRuntime/KuruStoryClipData.h"
#include "KuruStoryRuntime/KuruStorySectionData.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_BlockInputOperation.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ControlIllustration.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_LinkTo.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ModifyPlayerAttribute.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_PlayScreenShock.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_PlaySoundwave.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_SetBackground.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_SetBGM.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_SetIllustrationEmotion.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ShowChoices.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ShowOrHideIllustration.h"
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
	
	RegisterNewNotifyItem(FName(TEXT("BlockInputOperation")),TEXT("在该Notify持续时间内，阻止玩家的一部分输入[可配置]"));
	RegisterNewNotifyItem(FName(TEXT("ControlCharacter")),TEXT("设置某个角色立绘的位置、旋转等等，角色立绘通过FName索引。"));
//	RegisterNewNotifyItem(FName(TEXT("LinkTo")),TEXT("在该对话结束之后，跳转到另一个Clip，默认情况下会跳转到下一个Clip，可以用来做选择分支功能。"));
	RegisterNewNotifyItem(FName(TEXT("ModifyPlayerAttribute")),TEXT("调整玩家的属性值。"));
	RegisterNewNotifyItem(FName(TEXT("PlayScreenShock")),TEXT("播放震屏。"));
	RegisterNewNotifyItem(FName(TEXT("PlaySoundwave")),TEXT("播放声音，持续时间内还没放完就结束。"));
	RegisterNewNotifyItem(FName(TEXT("SetBackground")),TEXT("设置背景。"));
	RegisterNewNotifyItem(FName(TEXT("SetBGM")),TEXT("切换BGM。"));
	RegisterNewNotifyItem(FName(TEXT("SetCharacterEmotion")),TEXT("设置某个角色立绘的表情，角色立绘通过FName索引。"));
	RegisterNewNotifyItem(FName(TEXT("ShowChoices")),TEXT("弹出选择框，选择通过FName索引。"));
	RegisterNewNotifyItem(FName(TEXT("ShowOrHideCharacter")),TEXT("控制角色立绘的显示或隐藏。"));
	
	FEINotifyLibrary::Initialize();
}

FReply FKuruStoryNotifyLibrary::OnClickAddNotify(FName NotifyName)
{

	UStoryNotifyEventBase* NewEvent = nullptr;
	UObject* Parent = GetEdittingObj()->Parent;

	if (NotifyName == "BlockInputOperation")
	{
		NewEvent = NewObject<USNE_BlockInputOperation>(Parent);
	}else if (NotifyName == "ControlCharacter")
	{
		NewEvent = NewObject<USNE_ControlIllustration>(Parent);
	}else if (NotifyName == "BlockInputOperation")
	{
		NewEvent = NewObject<USNE_LinkTo>(Parent);
	}else if (NotifyName == "ModifyPlayerAttribute")
	{
		NewEvent = NewObject<USNE_ModifyPlayerAttribute>(Parent);
	}else if (NotifyName == "PlayScreenShock")
	{
		NewEvent = NewObject<USNE_PlayScreenShock>(Parent);
	}else if (NotifyName == "PlaySoundwave")
	{
		NewEvent = NewObject<USNE_PlaySoundwave>(Parent);
	}else if (NotifyName == "SetBackground")
	{
		NewEvent = NewObject<USNE_SetBackground>(Parent);
	}else if (NotifyName == "SetBGM")
	{
		NewEvent = NewObject<USNE_SetBGM>(Parent);
	}else if (NotifyName == "SetCharacterEmotion")
	{
		NewEvent = NewObject<USNE_SetIllustrationEmotion>(Parent);
	}else if (NotifyName == "ShowChoices")
	{
		NewEvent = NewObject<USNE_ShowChoices>(Parent);
	}
	else if (NotifyName == "ShowOrHideCharacter")
	{
		NewEvent = NewObject<USNE_ShowOrHideIllustration>(Parent);
	}
	
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
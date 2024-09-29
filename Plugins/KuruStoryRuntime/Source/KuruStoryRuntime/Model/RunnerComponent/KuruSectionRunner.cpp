// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruSectionRunner.h"

#include "Components/RichTextBlock.h"
#include "KuruStoryRuntime/KuruStoryClipData.h"
#include "KuruStoryRuntime/KuruStorySectionData.h"
#include "KuruStoryRuntime/Model/DA_KuruStoryConfig.h"
#include "KuruStoryRuntime/Model/FKuruStoryContext.h"
#include "KuruStoryRuntime/RuntimeWidgets/FrontGamePanelWidget.h"
#include "KuruStoryRuntime/RuntimeWidgets/KuruStoryRichText.h"
#include "KuruStoryRuntime/RuntimeWidgets/MainGamePanelWidget.h"
#include "KuruStoryRuntime/StoryNotifies/StoryNotifyBase.h"
#include "KuruStoryRuntime/StoryNotifies/StoryNotifyEventBase.h"


// Sets default values for this component's properties
UKuruSectionRunner::UKuruSectionRunner()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts


void UKuruSectionRunner::BeginPlay()
{
	Super::BeginPlay();
	StartPlayingWorldTime = GetWorld()?GetWorld()->TimeSeconds:0;
	CurrentWorldTime = StartPlayingWorldTime;
	// ...
	if (LoadNewSection(Context->Config->SectionData[0]))
	{
		SetCurrentRunningSection(Context->Config->SectionData[0].Get());
		StartPlaySection(0);
	}
}


// Called every frame
void UKuruSectionRunner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	CurrentWorldTime += DeltaTime*DeltaTimeScale;

	if (!FMath::IsNearlyZero(DeltaTimeScale))
	{
		TickRunningClip(GetCurrentRunningClipByCurrentIndex(), DeltaTime*DeltaTimeScale);
	}

	TickDebugPrint(DeltaTime);
	// ...
}
bool UKuruSectionRunner::LoadNewSection(TSoftObjectPtr<UKuruStorySectionData> NewSectionData)
{
	if (Context)
	{
		UKuruStorySectionData* SectionData = NewSectionData.LoadSynchronous();
		if (SectionData)
		{
			Context->SectionDataStore.EmplaceAt(0, SectionData);
			return true;
		}
	}

	return false;
}

void UKuruSectionRunner::StartPlaySection(int StartClipIndex)
{
	PrepareForRunningSection();
	ToNextClip(StartClipIndex, true);

	//这里把FrontWidget搞出来
	if (UFrontGamePanelWidget* Panel = GetFrontGamePanelWidget())
	{
		Panel->PlayBlendInAnimation(0.f);
	}
}

void UKuruSectionRunner::ManagerSectionList()
{
	if (Context && Context->Config)
	{
		for(int i = Context->SectionDataStore.Num() - 1 ;i>=0;i--)
		{
			if (i < Context->Config->MaxSectionKeep)
			{
				break;
			}
			Context->SectionDataStore.RemoveAt(i);
		}
	}
}

UKuruStorySectionData* UKuruSectionRunner::GetCurrentRunningSection() const
{
	return CurrentRunningSection;
}

void UKuruSectionRunner::SetCurrentRunningSection(UKuruStorySectionData* SectionData)
{
	CurrentRunningSection = SectionData;
}

void UKuruSectionRunner::PrepareForRunningSection()
{
	if (CurrentRunningSection)
	{
		for(UKuruStoryClipData* Clip : CurrentRunningSection->ClipDatas)
		{
			if (Clip)
			{
				InitializeClip(Clip);
			}
		}
	}
}

void UKuruSectionRunner::InitializeClip(UKuruStoryClipData* Clip)
{
	if (Clip)
	{
		for(UStoryNotifyBase* Notify :Clip->Notifies)
		{
			if (Notify)
			{
				InitializeNotify(Notify, GetTime());
			}
		}
	}
}

void UKuruSectionRunner::StartRunningClip(UKuruStoryClipData* Clip)
{
	if (Clip == nullptr)
	{
		return;
	}
	
	CreateRuntimeNotifies(Clip);
	bCurrentClipFirstTicked = false;
	CurrentClipStartTime = -1;

	//这里要对FP设置头像文字内容等等
	if (UFrontGamePanelWidget* Panel = GetFrontGamePanelWidget())
	{
		
		Panel->SetImagePic(Clip->Texture2D);
		FText Speaker = FText::FromString(Clip->Teller.ToString());
		Panel->SetSpeaker(Speaker);
		FText Content = FText::FromString(Clip->SimpleContent.ToString());
		Panel->SetContentAndTypeSpeed(Content, 0.03f, Clip->bIsOneDialog);
		Panel->StartToTypewrite();
	}
}

void UKuruSectionRunner::TickRunningClip(UKuruStoryClipData* Clip, float DeltaTime)
{
	if (Clip == nullptr)
	{
		return;
	}
	
	//Clip还未开始
	if (!bCurrentClipFirstTicked && CurrentClipStartTime < 0)
	{
		CurrentClipStartTime = GetTime();
		bCurrentClipFirstTicked = true;
	}

	// 已经开始了
	if (bCurrentClipFirstTicked)
	{
		float PassedTime = GetTime() - CurrentClipStartTime;

		//todo 如果已经播放完TotalTime，什么都不干，等待输入(如果需要等待的话)
		if (PassedTime > Clip->TotalLength)
		{
			if (Clip->WaitForOperation.Num() == 0)
			{
				EndRunningClip(Clip);
			}
			//等待输入
			return;
		}
		
		// todo 播放文字逻辑
		for (auto& RunningNotify : RunningNotifyDataArr)
		{
			UStoryNotifyEventBase* Notify = GetCurrentRunningEventNotify(RunningNotify.index);

			if (Notify == nullptr)
			{
				continue;
			}
			
			if (RunningNotify.bStarted == false)
			{
				//这里我们必须保证第一帧就执行的Notify必须第一帧执行（就是这个意思啦）
				//同时要做一个短Tick
				if ( PassedTime >= Notify->GetStartTime())
				{
					float DesiredStartTime = CurrentClipStartTime + Notify->GetStartTime();
					RunningNotify.bStarted = true;
					RunningNotify.StartTime = DesiredStartTime;
					RunningNotify.LastTickTime = DesiredStartTime;
					StartNotifyRunning(Notify, DesiredStartTime);
				}
			}

			if (RunningNotify.bStarted == true && RunningNotify.bEnded == false)
			{
				//如果当前这一帧会导致超时，先Tick完最后一段再End。
				if (PassedTime >= Notify->GetEndTime())
				{
					float DesiredEndTime = CurrentClipStartTime+Notify->GetEndTime();
					TickNotify(Notify, DesiredEndTime- RunningNotify.LastTickTime, DesiredEndTime);
					RunningNotify.bEnded = true;
					RunningNotify.LastTickTime = DesiredEndTime;
					EndNotify(Notify,DesiredEndTime);
				}else
				{
					TickNotify(Notify, GetTime()-RunningNotify.LastTickTime, GetTime());
					RunningNotify.LastTickTime = GetTime();
				}
			}
		}
	}
}

void UKuruSectionRunner::EndRunningClip(UKuruStoryClipData* Clip)
{
	//给所有未完的Notify调用End。
	//原则上End是可以重复调用的
	for (auto& RunningNotify : RunningNotifyDataArr)
	{
		UStoryNotifyEventBase* Notify = GetCurrentRunningEventNotify(RunningNotify.index);
		
		if (Notify == nullptr)
		{
			continue;
		}
		
		if (RunningNotify.bEnded == false)
		{
			RunningNotify.bEnded = true;
			EndNotify(Notify,GetTime());
		}
	}

}

void UKuruSectionRunner::ToNextClip(int NextClipId, bool bStart)
{
	if (!ClipIndexAvailable(NextClipId))
	{
		return;
	}

	//先把当前的Clip停了
	if (GetCurrentRunningClipByCurrentIndex())
	{
		EndRunningClip(GetCurrentRunningClipByCurrentIndex());
	}

	
	CurrentRunningClipIndex = NextClipId;

	if (GetCurrentRunningClipByCurrentIndex())
	{
		if (bStart)
		{
			StartRunningClip(GetCurrentRunningClipByCurrentIndex());
		}
	}else
	{
		//todo 已经没有Clip了，退出Section。
	}
}

void UKuruSectionRunner::ToCurrentNextClip(bool bStart)
{
	
	ToNextClip(CurrentRunningClipIndex+1,bStart);
}

bool UKuruSectionRunner::ClipIndexAvailable(int ClipId)
{
	//其实这里也有可能是那个Clip为null了，但那是不合法行为，不如直接让他崩了
	if (GetCurrentRunningSection())
	{
		if (GetCurrentRunningSection()->ClipDatas.Num() > ClipId)
		{
			ensure(GetCurrentRunningSection()->ClipDatas[ClipId]);
			return true;
		}
	}
	return false;
}

void UKuruSectionRunner::CreateRuntimeNotifies(UKuruStoryClipData* Clip)
{
	RunningNotifyDataArr.Empty();
	if (Clip)
	{
		for(int i =0;i<Clip->Notifies.Num();i++)
		{
			UStoryNotifyBase* Notify = Clip->Notifies[i];
			if (Notify->IsA(UStoryNotifyEventBase::StaticClass()))
			{
				FRunningNotifyData RunTimeNotify;
				RunTimeNotify.index = i;
				RunningNotifyDataArr.Emplace(RunTimeNotify);
			}
		}
	}
}

void UKuruSectionRunner::InitializeNotify(UStoryNotifyBase* Notify, double Time)
{
	if (Notify)
	{
		//
	}
}

void UKuruSectionRunner::StartNotifyRunning(UStoryNotifyEventBase* Notify, double Time)
{
	if (Notify)
	{
		Notify->Start(Context,Time);
	}
}

void UKuruSectionRunner::TickNotify(UStoryNotifyEventBase* Notify, double DeltaTime, double Time)
{
	if (Notify)
	{
		Notify->Tick(Context,DeltaTime,Time);
	}
}

void UKuruSectionRunner::EndNotify(UStoryNotifyEventBase* Notify, double Time)
{
	if (Notify)
	{
		Notify->End(Context,Time);
	}
}

UKuruStoryClipData* UKuruSectionRunner::GetCurrentRunningClipByCurrentIndex() const
{
	if (UKuruStorySectionData* section = GetCurrentRunningSection())
	{
		if (section->ClipDatas.Num() > CurrentRunningClipIndex)
		{
			return section->ClipDatas[CurrentRunningClipIndex];
		}
	}
	return nullptr;
}

UStoryNotifyBase* UKuruSectionRunner::GetCurrentRunningNotify(int index) const
{
	if (UKuruStoryClipData* Clip = GetCurrentRunningClipByCurrentIndex())
	{
		if (Clip->Notifies.Num() > index)
		{
			return Clip->Notifies[index];
		}
	}
	return nullptr;
}

UStoryNotifyEventBase* UKuruSectionRunner::GetCurrentRunningEventNotify(int index) const
{
	return Cast<UStoryNotifyEventBase>(GetCurrentRunningNotify(index));
}

double UKuruSectionRunner::GetTime() const
{
	return CurrentWorldTime;
}

void UKuruSectionRunner::ContinuePlayingClip()
{
	DeltaTimeScale = 1;
}

void UKuruSectionRunner::PausePlayingClip()
{
	DeltaTimeScale = 0;
}

void UKuruSectionRunner::TickDebugPrint(float DeltaTime)
{
	
#if !UE_BUILD_SHIPPING

	FString No = TEXT("无");
	FString DebugPrinter;
	FString RichText = "";
	if (Context && Context->GamePanel &&Context->GamePanel->FrontGamePanel && Context->GamePanel->FrontGamePanel->ContentText)
	{
		RichText = Context->GamePanel->FrontGamePanel->ContentText->RichText->GetText().ToString();
	}
	DebugPrinter = FString::Printf(TEXT("当前Section：%s\n"
									 "当前ClipIndex：%d\n"
									"当前ClipTime：%g\n"
									"WorldTime:%g\n"
									"RichText:%s"),
									GetCurrentRunningSection()?*GetCurrentRunningSection()->GetName():*No,
									CurrentRunningClipIndex,
									CurrentWorldTime - CurrentClipStartTime,
									CurrentWorldTime,
									*RichText);

	GEngine->AddOnScreenDebugMessage(1,-1,FColor::Green,DebugPrinter);
	
#endif
	
}

UFrontGamePanelWidget* UKuruSectionRunner::GetFrontGamePanelWidget() const
{
	if (Context && Context->GamePanel)
	{
		return Context->GamePanel->FrontGamePanel;
	}
	return nullptr;
}

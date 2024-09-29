// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryInputComponent.h"

#include "KuruSectionRunner.h"
#include "KuruStoryRuntime/Model/FKuruStoryContext.h"


// Sets default values for this component's properties
UKuruStoryInputComponent::UKuruStoryInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	// ...
}


// Called when the game starts
void UKuruStoryInputComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// ...

}


// Called every frame
void UKuruStoryInputComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                             FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	TickQueryAction(DeltaTime);
}

void UKuruStoryInputComponent::AddInputActionToNextFramePin(EStoryPanelOperation Type, int WaitExtraFrame )
{
	const int TargetFrame = CurrentExecuteFramePin + 1 + WaitExtraFrame;

	if (GetNumOfInputActionWithFramePin(TargetFrame) >= MaxIAAtOneFrame)
	{
		return;
	}

	FStoryInputAction NewIA(Type,TargetFrame);
	InputActions.Emplace(NewIA);
}

void UKuruStoryInputComponent::TickQueryAction(float DeltaTime)
{
	CurrentExecuteFramePin++;

	FStoryInputAction Action;
	
	if (GetFirstInputActionWithFramePin(Action, CurrentExecuteFramePin))
	{
		TryToExecuteInputAction(Action);
	}
	EraseAllInputActionWithFramePin(CurrentExecuteFramePin);

}

bool UKuruStoryInputComponent::ExecuteInputAction(const FStoryInputAction& Action)
{
	// 逻辑啊逻辑
	// todo 输入理应和所有模块解耦，尽量搞一个独有的事件系统来处理这个事情。

	if (Context && Context->SectionRunner)
	{
		Context->SectionRunner->ToCurrentNextClip(true);
	}
	return true;
}

void UKuruStoryInputComponent::EraseAllInputActionWithFramePin(int Frame)
{
	InputActions.RemoveAll([=](const FStoryInputAction& Action)
	{
		return Action.InputFrame == Frame;
	});
}

int UKuruStoryInputComponent::GetNumOfInputActionWithFramePin(int Frame)
{
	int Cnt = 0;
	for (auto& Action : InputActions)
	{
		if (Action.InputFrame == Frame)
		{
			Cnt++;
		}
	}
	return Cnt;
}

bool UKuruStoryInputComponent::GetFirstInputActionWithFramePin(FStoryInputAction& OutIA, int Frame)
{
	for (auto& Action : InputActions)
	{
		if (Action.InputFrame == Frame)
		{
			OutIA = Action;
			return true;
		}
	}
	return false;
}

bool UKuruStoryInputComponent::TryToExecuteInputAction(const FStoryInputAction& Action)
{
	if (CanExecuteInputAction(Action))
	{
		return ExecuteInputAction(Action);
	}

	return false;
}

bool UKuruStoryInputComponent::CanExecuteInputAction(const FStoryInputAction& Action)
{
	return true;
}

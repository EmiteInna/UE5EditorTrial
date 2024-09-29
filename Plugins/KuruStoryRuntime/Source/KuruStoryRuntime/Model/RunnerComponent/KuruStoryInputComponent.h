// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KuruStoryRuntime/KuruStoryTypes.h"
#include "KuruStoryInputComponent.generated.h"


/*
 * IA的封装，用于做局内交互，即使同一帧有多个输入，同一帧也最多有一个输入被执行.
 * 输入可能受卡顿限制，这里需要做的是让其和deltatime不相关而是仅和客户端tick数量相关。
 */
USTRUCT()
struct FStoryInputAction
{
	GENERATED_BODY()

	TEnumAsByte<EStoryPanelOperation> InputAction = EStoryPanelOperation::E_Invalid;

	int InputFrame = 0;

	FStoryInputAction(EStoryPanelOperation InOperation, int InInputFrame)
		:InputAction(InOperation), InputFrame(InInputFrame)
	{
		
	}

	FStoryInputAction(){};
	
};

class UKuruStoryContext;
class UDA_KuruStoryConfig;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KURUSTORYRUNTIME_API UKuruStoryInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UKuruStoryInputComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

protected:
	
	UPROPERTY()
	TArray<FStoryInputAction> InputActions;
	
	int MaxIAAtOneFrame = 10;
	
	int CurrentExecuteFramePin = 0;


public:
	
	UPROPERTY()
	UKuruStoryContext* Context;

	void AddInputActionToNextFramePin(EStoryPanelOperation Type, int WaitExtraFrame = 0);

protected:
	
	void TickQueryAction(float DeltaTime);

	bool ExecuteInputAction(const FStoryInputAction& Action);

	void EraseAllInputActionWithFramePin(int Frame);

	int GetNumOfInputActionWithFramePin(int Frame);

	bool GetFirstInputActionWithFramePin(FStoryInputAction& OutIA, int Frame);

	bool TryToExecuteInputAction(const FStoryInputAction& Action);

	bool CanExecuteInputAction(const FStoryInputAction& Action);


	
};

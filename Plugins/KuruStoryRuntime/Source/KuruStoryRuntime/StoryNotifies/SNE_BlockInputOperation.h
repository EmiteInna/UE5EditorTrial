// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "KuruStoryRuntime/KuruStoryTypes.h"
#include "SNE_BlockInputOperation.generated.h"

/**
 * 在该Notify的持续时间之内，禁用选择的操作。
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_BlockInputOperation : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="操作名称")
	TArray<TEnumAsByte<EStoryPanelOperation>> Operations;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_ShowChoices.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_ShowChoices : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="选项名称")
	TArray<FName> ChoiseNames;
	
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="过渡时间")
	float BlendTime = 0.2;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_SetBackground.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_SetBackground : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="过渡时间")
	float BlendTime = 0.2;
};

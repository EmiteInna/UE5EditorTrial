// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_SetBGM.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_SetBGM : public UStoryNotifyEventBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="播放音频")
	USoundWave* BGM = nullptr;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="淡入时间")
	float BlendInTime = 1.2;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="是否显示标题")
	bool bShowBGMTitle = true;
};

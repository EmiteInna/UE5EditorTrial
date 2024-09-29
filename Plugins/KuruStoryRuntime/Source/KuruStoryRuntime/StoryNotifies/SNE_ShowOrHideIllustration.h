// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_ShowOrHideIllustration.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_ShowOrHideIllustration : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="立绘Name")
	FName CharacterName = "";

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="是否是显示")
	bool bIsShow = false;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="过渡时间")
	float BlendTime = 0.2;
};

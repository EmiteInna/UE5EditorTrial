// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_ControlIllustration.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_ControlIllustration : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="立绘Name")
	FName CharacterName = "";

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="变换")
	FTransform Transform = FTransform::Identity;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="变换时间")
	float TransformTime = 0.2 ;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_ModifyPlayerAttribute.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_ModifyPlayerAttribute : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="属性")
	FName AttributeName = "";

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="是否变化")
	bool bIsDelta = false;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="是否设置")
	bool bIsSet = false;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="过渡时间")
	float BlendTime = 0.2;
	
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="变化数值",meta=(EditCondition="bIsDelta",EditConditionHides))
	float DeltaValue = 0;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="设置数值",meta=(EditCondition="bIsSet",EditConditionHides))
	float AbsoluteValue = 0;
};

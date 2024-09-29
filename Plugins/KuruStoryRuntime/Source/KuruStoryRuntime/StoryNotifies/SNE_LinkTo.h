// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_LinkTo.generated.h"

/**
 * 在该Clip结束之后，跳转到另一个Clip。
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_LinkTo : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="是否直接Link到下一个")
	bool bLinkToNext = true;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="Link方式",meta=(EditCondition="!bLinkToNext",EditConditionHides))
	TMap<int,int> Links;
};

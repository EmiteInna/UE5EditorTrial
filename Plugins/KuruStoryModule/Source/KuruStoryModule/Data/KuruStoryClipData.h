// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimatedRange.h"
#include "ViewRangeInterpolation.h"
#include "UObject/Object.h"
#include "KuruStoryClipData.generated.h"

class UStoryNotifyBase;
class UKuruStoryClipDataInstance;
class UKuruStorySectionData;
/**
 * 一句对话
 */
UCLASS(EditInlineNew)
class KURUSTORYMODULE_API UKuruStoryClipData : public UObject
{
    GENERATED_BODY()

public:
	UKuruStoryClipData();

	UPROPERTY(EditAnywhere, Category="Story")
	int Number = 0;
	
	UPROPERTY(EditAnywhere, Category="Story")
	UTexture2D* Texture2D = nullptr;
	
	UPROPERTY(EditAnywhere, Category="Story")
	FName Teller = "";
	
	UPROPERTY(EditAnywhere, Category="Story")
	FName SimpleContent = "";
	
	UPROPERTY(EditAnywhere, Category="Story")
	double TotalLength = 10.;

	//有一说一，这个东西根本没必要暴露给编辑器，只是为了Export我们才这么做。
	UPROPERTY(VisibleAnywhere,Instanced, Category="Story", meta=(EditCondition="false",EditConditionHides))
	TArray<UStoryNotifyBase*> Notifies;
	
	UPROPERTY(EditAnywhere,Category="Hide",meta=(EditCondition="false",EditConditionHides))
	UKuruStorySectionData* Parent = nullptr;
	
	

};

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

	UPROPERTY(VisibleAnywhere,Instanced, Category="Story")
	TArray<UStoryNotifyBase*> Notifies;
	
	UPROPERTY(EditAnywhere,Category="Hide",meta=(EditCondition="false",EditConditionHides))
	UKuruStorySectionData* Parent = nullptr;
	
	
	

};

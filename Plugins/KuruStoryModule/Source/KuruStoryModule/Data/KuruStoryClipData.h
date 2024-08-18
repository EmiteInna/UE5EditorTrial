// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KuruStoryClipData.generated.h"

class UKuruStorySectionData;
/**
 * 一句对话
 */
UCLASS()
class KURUSTORYMODULE_API UKuruStoryClipData : public UObject
{
    GENERATED_BODY()

public:
	UKuruStoryClipData(){}
	//0
	UPROPERTY(EditAnywhere, Category="Story")
	int Number = 0;
	//1
	UPROPERTY(EditAnywhere, Category="Story")
	UTexture2D* Texture2D = nullptr;
	//2
	UPROPERTY(EditAnywhere, Category="Story")
	FName Teller = "";
	//3
	UPROPERTY(EditAnywhere, Category="Story")
	FName SimpleContent = "";
	//no need to serialize
	UPROPERTY(EditAnywhere,Category="Hide",meta=(EditCondition="false",EditConditionHides))
	UKuruStorySectionData* Parent = nullptr;

	virtual void Serialize(FArchive& Ar) override;
	//UPROPERTY(EditAnywhere, Category="Story")
	//是什么呢~
};

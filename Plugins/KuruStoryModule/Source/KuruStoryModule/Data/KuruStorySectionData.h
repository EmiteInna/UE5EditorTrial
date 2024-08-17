// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KuruStorySectionData.generated.h"

class UKuruStoryClipData;
/**
 * 一段对话
 */
UCLASS()
class KURUSTORYMODULE_API UKuruStorySectionData : public UObject
{
    GENERATED_BODY()

public:
	UKuruStorySectionData(){}

	//0
	UPROPERTY(EditAnywhere, Category="Story")
	FName Title = "";

	//1
	UPROPERTY(EditAnywhere, Category="Story")
	TArray<UKuruStoryClipData*> ClipDatas;

	virtual void Serialize(FArchive& Ar) override;

	
};



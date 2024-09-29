// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_KuruStoryConfig.generated.h"

class UMainGamePanelWidget;
class UInputMappingContext;
class UKuruStorySectionData;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UDA_KuruStoryConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,DisplayName="最大保存Section个数")
	int MaxSectionKeep = 3;

	UPROPERTY(EditAnywhere,DisplayName="使用的键位输入")
	UInputMappingContext* IMC = nullptr;

	UPROPERTY(EditAnywhere,DisplayName="使用的GamePanel")
	TSubclassOf<UMainGamePanelWidget> GamePanelClass = nullptr;
	
	UPROPERTY(EditAnywhere,DisplayName="测试用Sections")
	TArray<TSoftObjectPtr<UKuruStorySectionData>> SectionData;


};

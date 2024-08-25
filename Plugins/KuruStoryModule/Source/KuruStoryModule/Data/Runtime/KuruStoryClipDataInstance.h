// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KuruStoryClipDataInstance.generated.h"

class UKuruStoryClipData;
/**
 * 
 */
UCLASS()
class KURUSTORYMODULE_API UKuruStoryClipDataInstance : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UKuruStoryClipData* BaseData = nullptr;

	UPROPERTY()
	bool bIsLooped = false;
	UPROPERTY()
	bool bIsPlaying = false;
	UPROPERTY()
	bool bIsReversed = false;
	UPROPERTY()
	double CurrentPlayingPosition = 0.;
	UPROPERTY()
	float PlayRate = 1.;
	
	UFUNCTION()
	void SetPlayingPosition(float InPosition){CurrentPlayingPosition = InPosition;}
	UFUNCTION()
	void SetIsPlaying(bool InValue){bIsPlaying = InValue;}
	UFUNCTION()
	void SetIsReversed(bool InValue){bIsReversed = InValue;}
	UFUNCTION()
	void SetPlayRate(bool InValue){bIsPlaying = InValue;}
	UFUNCTION()
	void TickPlaying(float DeltaTime);
	
};

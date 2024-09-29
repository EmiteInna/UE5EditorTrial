// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyEventBase.h"
#include "SNE_PlaySoundwave.generated.h"

/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API USNE_PlaySoundwave : public UStoryNotifyEventBase
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="播放音频")
	USoundWave* SoundToPlay = nullptr;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="播放音量")
	float Amplitude = 1;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="播放空间位置偏移")
	FVector PlayPositionInSpace = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="播放开始位置")
	float StartPosition = 0;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="播放速度")
	float PlaySpeed = 1;

	virtual void Tick(UKuruStoryContext* Context, float DeltaTime,float Time) override;
};

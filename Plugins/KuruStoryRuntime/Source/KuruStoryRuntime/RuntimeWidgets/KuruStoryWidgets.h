// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KuruStoryWidgets.generated.h"

class UKuruStoryContext;
/**
 * 
 */
UCLASS(Blueprintable)
class KURUSTORYRUNTIME_API UKuruStoryWidgets : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UKuruStoryContext* GetContext();

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	float CurrentOpcaticy = 1;

	float BlendSpeed = 0.1;

	// 0 是显现， 1是blend in，2是blend out， 3 是消失
	int CurrentState = 0;

	// 锁定状态下，自己没法改透明度
	bool bAutoBlendLocked = false;
	
	UFUNCTION()
	void PlayBlendInAnimation(float BlendInDuration);

	UFUNCTION()
	void PlayBlendOutAnimation(float BlendInDuration);

	UFUNCTION()
	void Hide();

	UFUNCTION()
	void Show();

	UFUNCTION()
	void SetAutoBlendLocked(bool bLocked){bAutoBlendLocked = bLocked;}
};

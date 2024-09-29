// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryPanel.h"
#include "KuruStoryWidgets.h"
#include "FrontGamePanelWidget.generated.h"

class UImage;
class UKuruStoryRichText;
class UKuruStoryTextBlock;
class UKuruStoryImage;

/*
 * FP状态机，分别是只显示板，只显示内容和显示全部，过渡状态不包含在内，而是单独的过渡状态，过渡状态中再次调用ToState会直接跳过过渡切换状态
 */
UENUM()
enum EKuruFrontGamePanelState:uint8
{
	E_ShowBlank,
	E_ShowOnlyContent,
	E_ShowAll,
	E_Transitioning,
};
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UFrontGamePanelWidget : public UKuruStoryPanel
{
	GENERATED_BODY()
public:
	
	// 下面那个板儿
	UPROPERTY(meta = (BindWidget))
	UKuruStoryImage* HeadImage;

	// 下面那个板儿
	UPROPERTY(meta = (BindWidget))
	UKuruStoryImage* BackgroundBoard;

	// 说话人的名字
	UPROPERTY(meta = (BindWidget))
	UKuruStoryRichText* SpeakerText;

	// 说话内容
	UPROPERTY(meta = (BindWidget))
	UKuruStoryRichText* ContentText;

protected:

	UPROPERTY(VisibleAnywhere)
	TEnumAsByte<EKuruFrontGamePanelState> FromState = E_ShowBlank;

	UPROPERTY(VisibleAnywhere)
	TEnumAsByte<EKuruFrontGamePanelState> CurrentState = E_ShowBlank;

	UPROPERTY(VisibleAnywhere)
	TEnumAsByte<EKuruFrontGamePanelState> TargetState = E_ShowBlank;

	float TransitionTotalTime = 1.;

	float CurrentTransitionTime = 1.;

	void TickStateTransition(float DeltaTime);


public:
	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	
	
	//过渡状态中再次调用ToState会直接跳过过渡切换状态
	UFUNCTION(BlueprintCallable,Category="Kuru")
	void ToNewState(EKuruFrontGamePanelState InTargetState, float InTransitionTime);

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void ToNewStateInstant(EKuruFrontGamePanelState InTargetState);


	//todo : 这里之后可能会做成根据uid自己去取来做优化？
	UFUNCTION(BlueprintCallable,Category="Kuru")
	void SetImagePic(UTexture2D* InImage);

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void SetSpeaker(FText& InText);
	
	UFUNCTION(BlueprintCallable,Category="Kuru")
	void SetContentAndTypeDuration(FText& InText, float InTypeDuration, bool bIsDialog = true);

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void SetContentAndTypeSpeed(FText& InText, float InTypeSpeed, bool bIsDialog = true);

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void StartToTypewrite();
	

	
};

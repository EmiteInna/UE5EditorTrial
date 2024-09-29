// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryWidgets.h"
#include "KuruStoryRichText.generated.h"

class URichTextBlock;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UKuruStoryRichText : public UKuruStoryWidgets
{
	GENERATED_BODY()
protected:
	bool bTyping = false;
	
	float TickSpeedPerWord = 0.4f;

	float CurrentTickTime = 0.f;

	float TotalTime = 0;
public:
	
	UPROPERTY(meta = (BindWidget))
	URichTextBlock* RichText;

	int WordCnt = 0;
	
	FString CachedLastText;

	FString TargetText;
	
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void SetContentAndTypeDuration(FText& InText, float InTypeDuration);

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void SetContentAndTypeSpeed(FText& InText, float InTypeSpeed);

	UFUNCTION(BlueprintCallable,Category="Kuru")
	void StartToTypewrite();

	//展示整个字符串，可以展示TargetText，也可以搞个新的
	void FinishTyping(const FText& InText, bool bUpdateText);

protected:
	int GetRichTextWordsNum(FString& OriginalText);
	
	FString GetRichTextWithFirstNWords(FString& OriginalText, int Num);

	
};

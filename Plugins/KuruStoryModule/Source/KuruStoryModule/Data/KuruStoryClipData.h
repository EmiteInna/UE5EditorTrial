// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimatedRange.h"
#include "ViewRangeInterpolation.h"
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
	FAnimatedRange ViewRange = FAnimatedRange(0,11);
	FAnimatedRange PlayRange = FAnimatedRange(0,11);
	FAnimatedRange WorkingRange = FAnimatedRange(0,11);
	//4
	TArray<double> EditableItems;
	
public:
	FFrameRate TickResolution = FFrameRate(60,1);
	FFrameNumber ScrubPosition = FFrameNumber(0);
	
	virtual void Serialize(FArchive& Ar) override;

	FFrameRate GetFrameRate()const{return FFrameRate(60,1);}
	int GetTickResolution() const;
	FFrameNumber GetScrubPosition()const{return ScrubPosition;}
	void SetScrubPosition(const FFrameNumber& InputFrameNumber){ScrubPosition = InputFrameNumber;}
	TRange<FFrameNumber> GetPlaybackRange() const;
	void HandleViewRangeChanged(TRange<double> InRange, EViewRangeInterpolation InInterpolation){ViewRange = InRange;};
	void HandleWorkingRangeChanged(TRange<double> InRange){WorkingRange = InRange;};
	
	//UPROPERTY(EditAnywhere, Category="Story")
	//是什么呢~
};

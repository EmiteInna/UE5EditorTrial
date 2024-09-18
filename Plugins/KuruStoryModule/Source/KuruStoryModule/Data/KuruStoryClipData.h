// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimatedRange.h"
#include "ViewRangeInterpolation.h"
#include "UObject/Object.h"
#include "KuruStoryClipData.generated.h"

struct FStoryNotifyBase;
class FStoryTimelineTrack;
class UKuruStoryClipDataInstance;
class FStoryClipPreviewScene;
class UKuruStorySectionData;
/**
 * 一句对话
 */
UCLASS()
class KURUSTORYMODULE_API UKuruStoryClipData : public UObject
{
    GENERATED_BODY()

public:
	UKuruStoryClipData();

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
	//4
	UPROPERTY(EditAnywhere, Category="Story")
	TArray<double> EditableItems;
	//5
	UPROPERTY(EditAnywhere, Category="Story")
	double TotalLength = 10.;
	//6
	UPROPERTY(VisibleAnywhere, Category="Story")
	TArray<FStoryNotifyBase> Notifies;
	//no need to serialize
	//UPROPERTY(EditAnywhere,Category="Story")
	
	
	UPROPERTY(EditAnywhere,Category="Hide",meta=(EditCondition="false",EditConditionHides))
	UKuruStorySectionData* Parent = nullptr;
	FAnimatedRange ViewRange = FAnimatedRange(0,11);
	FAnimatedRange PlayRange = FAnimatedRange(0,11);
	FAnimatedRange WorkingRange = FAnimatedRange(0,11);
	
	
public:
	FFrameRate TickResolution = FFrameRate(60,1);
	
	virtual void Serialize(FArchive& Ar) override;

	FFrameRate GetFrameRate()const{return FFrameRate(60,1);}
	FAnimatedRange GetViewRange()const{return ViewRange;}
	int GetTickResolution() const;
	//FFrameNumber GetScrubPosition()const{return FFrameNumber(FMath::RoundToInt32(ScrubTime*GetTickResolution()));}
	FFrameNumber GetScrubPosition()const;
//	double GetScrubTime()const{return ScrubTime;}
	double GetScrubTime()const;
//	void SetScrubPosition(const FFrameTime& InputFrameNumber){ScrubTime = InputFrameNumber.AsDecimal()/GetTickResolution();}
	void SetScrubPosition(const FFrameTime& InputFrameNumber);
	TRange<FFrameNumber> GetPlaybackRange() const;
	void HandleViewRangeChanged(TRange<double> InRange, EViewRangeInterpolation InInterpolation){ViewRange = InRange;};
	void HandleWorkingRangeChanged(TRange<double> InRange){WorkingRange = InRange;};

	FStoryClipPreviewScene* CurrentPreviewScene=nullptr;
	UKuruStoryClipDataInstance* GetPreviewInstance()const;
	//UPROPERTY(EditAnywhere, Category="Story")
	//是什么呢~
	TArray<TSharedRef<FStoryTimelineTrack>> RootTracks;
	const TArray<TSharedRef<FStoryTimelineTrack>>& GetAllRootTracks() const
	{
		PRAGMA_DISABLE_DEPRECATION_WARNINGS
		return RootTracks;
		PRAGMA_ENABLE_DEPRECATION_WARNINGS
	}
	void ForEachRootTrack(TFunctionRef<void(FStoryTimelineTrack&)> InFunction);
};

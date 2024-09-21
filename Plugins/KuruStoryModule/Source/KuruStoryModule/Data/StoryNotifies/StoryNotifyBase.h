// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyBase.generated.h"
/**
 * Story Notify的基类，约定了一些接口。
 */
UCLASS()
class KURUSTORYMODULE_API UStoryNotifyBase: public UObject
{
public:
	GENERATED_BODY()

	UStoryNotifyBase();

	UPROPERTY(VisibleAnywhere)
	FFrameRate BaseFrameRate = FFrameRate(60,1);
	
	UPROPERTY()
	UObject* ObjectOwner = nullptr;

	UPROPERTY(EditAnywhere)
	float StartTime = 0;
	
	UPROPERTY(EditAnywhere)
	float EndTime = 0;
	
	UPROPERTY(VisibleAnywhere)
	int StartFrame = 0;

	UPROPERTY(VisibleAnywhere)
	int EndFrame = 0;

	UPROPERTY(VisibleAnywhere)
	FName Name = "NewNotify";
	
	virtual UObject* GetOwner();

	virtual float GetStartTime();

	virtual void SetStartTime(const float NewValue)
	{
		StartTime = NewValue;
	}

	virtual float GetEndTime();

	virtual void SetEndTime(const float NewValue)
	{
		EndTime = NewValue;
	}
	
	virtual int GetStartFrame();
	
	virtual int GetEndFrame();

	virtual FName GetName();

	virtual void SetName(const FName NewValue)
    {
    	Name = NewValue;
    }

	virtual void RematchTimeByFrameRate(const FFrameRate& FrameRate);

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyBase.generated.h"
/**
 * Story Notify的基类，约定了一些接口。
 */
UCLASS()
class KURUSTORYRUNTIME_API UStoryNotifyBase: public UObject
{
public:
	GENERATED_BODY()

	UStoryNotifyBase();

	UPROPERTY(VisibleAnywhere)
	FFrameRate BaseFrameRate = FFrameRate(60,1);
	
	UPROPERTY()
	UObject* ObjectOwner = nullptr;

	UPROPERTY(EditAnywhere, Category="Story", DisplayName="起始时长")
	float StartTime = 0;
	
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="结束时长")
	float EndTime = 0;
	
	UPROPERTY(VisibleAnywhere, Category="Story", DisplayName="起始帧")
	int StartFrame = 0;

	UPROPERTY(VisibleAnywhere, Category="Story", DisplayName="结束帧")
	int EndFrame = 0;

	UPROPERTY(VisibleAnywhere, Category="Story", DisplayName="指令名称")
	FName Name = "NewNotify";

	UPROPERTY(VisibleAnywhere, Category="Story", DisplayName="能否被删除")
	bool bCanBeDeleted = true;
	
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

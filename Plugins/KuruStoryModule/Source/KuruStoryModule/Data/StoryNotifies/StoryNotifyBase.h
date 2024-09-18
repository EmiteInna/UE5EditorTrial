﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StoryNotifyBase.generated.h"
/**
 * Story Notify的基类，约定了一些接口。
 */
USTRUCT()
struct KURUSTORYMODULE_API FStoryNotifyBase
{
public:
	GENERATED_BODY()

	FFrameRate BaseFrameRate = FFrameRate(1,60);
	
	UPROPERTY(VisibleAnywhere)
	UObject* ObjectOwner = nullptr;

	UPROPERTY(VisibleAnywhere)
	float StartTime = 0;
	
	UPROPERTY(VisibleAnywhere)
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

	virtual ~FStoryNotifyBase();
};

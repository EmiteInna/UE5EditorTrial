// Fill out your copyright notice in the Description page of Project Settings.


#include "StoryNotifyBase.h"

#include "KuruStoryRuntime/KuruStoryClipData.h"


UStoryNotifyBase::UStoryNotifyBase()
{
	SetFlags(RF_Transactional);
}

UObject* UStoryNotifyBase::GetOwner()
{
	return ObjectOwner;
}

float UStoryNotifyBase::GetStartTime()
{
	return StartTime;
}

float UStoryNotifyBase::GetEndTime()
{
	return EndTime;
}

int UStoryNotifyBase::GetStartFrame()
{
	return StartTime * BaseFrameRate.AsDecimal();
}

int UStoryNotifyBase::GetEndFrame()
{
	return EndTime * BaseFrameRate.AsDecimal();
}

FName UStoryNotifyBase::GetName()
{
	return Name;
}

void UStoryNotifyBase::RematchTimeByFrameRate(const FFrameRate& FrameRate)
{
	BaseFrameRate = FrameRate;
}

void UStoryNotifyBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	StartTime = FMath::Max(0, StartTime);
	
	if (UKuruStoryClipData* ClipData = Cast<UKuruStoryClipData>(ObjectOwner))
	{
		EndTime = FMath::Min(EndTime,ClipData->TotalLength);
	}
	
	StartFrame = GetStartFrame();
	EndFrame = GetEndFrame();
	UObject::PostEditChangeProperty(PropertyChangedEvent);
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "StoryNotifyBase.h"


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

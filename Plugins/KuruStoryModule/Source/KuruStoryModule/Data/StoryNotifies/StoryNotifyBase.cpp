// Fill out your copyright notice in the Description page of Project Settings.


#include "StoryNotifyBase.h"


UObject* FStoryNotifyBase::GetOwner()
{
	return ObjectOwner;
}

float FStoryNotifyBase::GetStartTime()
{
	return StartTime;
}

float FStoryNotifyBase::GetEndTime()
{
	return EndTime;
}

int FStoryNotifyBase::GetStartFrame()
{
	return StartTime * BaseFrameRate.AsDecimal();
}

int FStoryNotifyBase::GetEndFrame()
{
	return EndTime * BaseFrameRate.AsDecimal();
}

FName FStoryNotifyBase::GetName()
{
	return Name;
}

void FStoryNotifyBase::RematchTimeByFrameRate(const FFrameRate& FrameRate)
{
	BaseFrameRate = FrameRate;
}

FStoryNotifyBase::~FStoryNotifyBase()
{
	
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipDataInstance.h"

#include "KuruStoryModule/Data/KuruStoryClipData.h"

void UKuruStoryClipDataInstance::TickPlaying(float DeltaTime)
{
	check(BaseData);

	if (bIsReversed == false && FMath::IsNearlyEqual(CurrentPlayingPosition, BaseData->TotalLength))
	{
		CurrentPlayingPosition = 0;
	}else if (bIsReversed == true && FMath::IsNearlyEqual(CurrentPlayingPosition, 0))
	{
		CurrentPlayingPosition = BaseData->TotalLength;
	}else
	{
		double minus = 1;
		if (bIsReversed)
		{
			minus = -1;
		}
		CurrentPlayingPosition = CurrentPlayingPosition+DeltaTime * minus;
		CurrentPlayingPosition = FMath::Clamp(CurrentPlayingPosition,0,BaseData->TotalLength);
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "SNE_PlaySoundwave.h"

void USNE_PlaySoundwave::Tick(UKuruStoryContext* Context, float DeltaTime,float Time)
{
	Super::Tick(Context, DeltaTime, Time);
	UE_LOG(LogInit,Error,TEXT("在想我的事情？%g"),Time)
}

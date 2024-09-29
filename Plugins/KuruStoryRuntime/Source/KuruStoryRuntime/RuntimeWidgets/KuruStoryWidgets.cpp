// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryWidgets.h"

#include "KuruStoryRuntime/Model/KuruStoryManager.h"

UKuruStoryContext* UKuruStoryWidgets::GetContext()
{
	if (AKuruStoryManager* AM = AKuruStoryManager::GetKuruStoryManager(this))
	{
		return AM->Context;
	}
	return nullptr;
}

void UKuruStoryWidgets::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bAutoBlendLocked)
	{
		return;
	}
	
	switch (CurrentState)
	{
	case 0:
		CurrentOpcaticy = 1;
		break;
	case 1:
		CurrentOpcaticy += InDeltaTime * BlendSpeed;
		
		if (CurrentOpcaticy >= 1)
		{
			Show();
		}
		
		break;
	case 2:

		CurrentOpcaticy -= InDeltaTime * BlendSpeed;

		if (CurrentOpcaticy <= 0)
		{
			Hide();
		}
		
		break;
	case 3:
		CurrentOpcaticy = 0;
		break;
	default: ;
	}
	

	SetRenderOpacity(CurrentOpcaticy);
}

void UKuruStoryWidgets::PlayBlendInAnimation(float BlendInDuration)
{
	if (FMath::IsNearlyZero(BlendInDuration))
	{
		Show();
		return;
	}
	BlendSpeed = 1./BlendInDuration;
	Hide();
	CurrentState = 1;
}

void UKuruStoryWidgets::PlayBlendOutAnimation(float BlendInDuration)
{
	if (FMath::IsNearlyZero(BlendInDuration))
	{
		Hide();
		return;
	}
	BlendSpeed = 1./BlendInDuration;
	Show();
	CurrentState = 2;
}

void UKuruStoryWidgets::Hide()
{
	SetRenderOpacity(0);
	CurrentOpcaticy = 0;
	CurrentState = 3;
}

void UKuruStoryWidgets::Show()
{
	SetRenderOpacity(1);
	CurrentOpcaticy = 1;
	CurrentState = 0;
}

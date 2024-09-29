// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryManager.h"

#include "KuruStoryRuntime/Model/DA_KuruStoryConfig.h"
#include "KuruStoryRuntime/Model/FKuruStoryContext.h"
#include "EngineUtils.h"
#include "KuruStoryRuntime/RuntimeWidgets/MainGamePanelWidget.h"
#include "RunnerComponent/KuruSectionRunner.h"
#include "RunnerComponent/KuruStoryAttributeSet.h"
#include "RunnerComponent/KuruStoryInputComponent.h"


AKuruStoryManager::AKuruStoryManager()
{
	PrimaryActorTick.bCanEverTick = true;
}

AKuruStoryManager* AKuruStoryManager::GetKuruStoryManager(const UObject* WorldContext)
{
	UWorld* World = WorldContext->GetWorld();
	if (World)
	{
		TActorIterator<AKuruStoryManager> Manager(World);
		return *Manager;
	}

	return nullptr;
}

void AKuruStoryManager::BeginPlay()
{
	Super::BeginPlay();
	bInitializeFinished = false;
	Context = NewObject<UKuruStoryContext>(this);

	if (Context){

		if (DefaultConfig)
		{
			Context->Config = DefaultConfig;
		}else
		{
			Context->Config = NewObject<UDA_KuruStoryConfig>(this);
		}

		if (Context->Config)
		{
			if (Context->Config->GamePanelClass)
			{
				if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
				{
					Context->GamePanel = CreateWidget<UMainGamePanelWidget>(PlayerController,Context->Config->GamePanelClass);
					Context->GamePanel->AddToViewport();
				}
			}
		}

		Context->SectionRunner = NewObject<UKuruSectionRunner>(this);
		Context->AttributeSet = NewObject<UKuruStoryAttributeSet>(this);
		Context->InputComponent = NewObject<UKuruStoryInputComponent>(this);

		Context->SectionRunner->Context = Context;
		Context->InputComponent->Context = Context;

		Context->SectionRunner->RegisterComponent();
		Context->AttributeSet->RegisterComponent();
		Context->InputComponent->RegisterComponent();
		
		bInitializeFinished = true;
		
	}
}

void AKuruStoryManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


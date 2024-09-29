// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryPawn.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Model/DA_KuruStoryConfig.h"
#include "Model/FKuruStoryContext.h"
#include "Model/KuruStoryManager.h"
#include "Model/RunnerComponent/KuruStoryInputComponent.h"


// Sets default values
AKuruStoryPawn::AKuruStoryPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EIC = CreateDefaultSubobject<UEnhancedInputComponent>(FName("EnhancedInputComponent"));
}

// Called when the game starts or when spawned
void AKuruStoryPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKuruStoryPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bInputInitialized == false)
	{
		BindEnhancedInput();
	}
}

void AKuruStoryPawn::BindEnhancedInput()
{
	if (EIC)
	{
		if (UKuruStoryContext* Context = GetContext())
		{
			if (UDA_KuruStoryConfig* Config = Context->Config)
			{
				if (UInputMappingContext* IMC = Config->IMC)
				{
					if (APlayerController* PC = Cast<APlayerController>(GetController()))
					{
						if (UEnhancedInputLocalPlayerSubsystem* Sys =
							ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
						{
							Sys->AddMappingContext(IMC, 1);


							// 绑定键位
							for (const FEnhancedActionKeyMapping& Mapping:IMC->GetMappings())
							{
								const UInputAction* IA =  Mapping.Action.Get();
								if (IA)
								{
									if (IA->GetFName()==TEXT("IA_Next"))
									{
										EIC->BindAction(IA, ETriggerEvent::Triggered, this, &AKuruStoryPawn::Key_ToNext);
									}
								}
							}
							bInputInitialized = true;
							UE_LOG(LogInit,Display,TEXT("输入绑定成功喵"))
						}
					}
				}
			}
		}
	}
}

// Called to bind functionality to input
void AKuruStoryPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
}

UKuruStoryContext* AKuruStoryPawn::GetContext()
{
	if (mContext)
	{
		
	}else
	{
		AKuruStoryManager* Manager = AKuruStoryManager::GetKuruStoryManager(this);
		if (Manager)
		{
			mContext = Manager->Context;
		}
	}
	return mContext;
}

void AKuruStoryPawn::AddInputAction(EStoryPanelOperation Type, int ExtraWaitTick)
{
	if (UKuruStoryContext* Context = GetContext())
	{
		if (Context->InputComponent)
		{
			Context->InputComponent->AddInputActionToNextFramePin(Type,ExtraWaitTick);
		}
	}
}

void AKuruStoryPawn::Key_ToNext()
{
	AddInputAction(E_GotoNext, 0);
}

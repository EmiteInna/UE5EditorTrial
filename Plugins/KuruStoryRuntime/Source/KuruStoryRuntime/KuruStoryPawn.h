// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "KuruStoryPawn.generated.h"

enum EStoryPanelOperation : uint8;
class UKuruStoryContext;

UCLASS()
class KURUSTORYRUNTIME_API AKuruStoryPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AKuruStoryPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	bool bInputInitialized = false;

	void BindEnhancedInput();
	
	UPROPERTY()
	class UEnhancedInputComponent* EIC;

	UPROPERTY()
	UKuruStoryContext* mContext = nullptr;

	UKuruStoryContext* GetContext();


	void Key_ToNext();

	void AddInputAction(EStoryPanelOperation Type, int ExtraWaitTick = 0);
};

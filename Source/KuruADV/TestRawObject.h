// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestRawObject.generated.h"

/**
 * 感觉我是真有点急了
 */
UCLASS(Blueprintable)
class KURUADV_API UTestRawObject : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere,Instanced,Category="Test")
	UAnimNotifyState* State;
};

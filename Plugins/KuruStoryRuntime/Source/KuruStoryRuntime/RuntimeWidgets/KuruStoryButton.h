// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryWidgets.h"
#include "KuruStoryButton.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UKuruStoryButton : public UKuruStoryWidgets
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UButton* Button;
};

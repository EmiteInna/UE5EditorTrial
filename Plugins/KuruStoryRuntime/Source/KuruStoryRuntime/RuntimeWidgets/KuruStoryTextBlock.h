// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryWidgets.h"
#include "KuruStoryTextBlock.generated.h"

class UTextBlock;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UKuruStoryTextBlock : public UKuruStoryWidgets
{
	GENERATED_BODY()

public:
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text;
	
};

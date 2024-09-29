// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryWidgets.h"
#include "KuruStoryImage.generated.h"

class UImage;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UKuruStoryImage : public UKuruStoryWidgets
{
	GENERATED_BODY()

public:
	
	UPROPERTY(meta = (BindWidget))
	UImage* Image;
};

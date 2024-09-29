// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryWidgets.h"
#include "KuruStoryPanel.generated.h"


class UPanelWidget;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UKuruStoryPanel : public UKuruStoryWidgets
{
	GENERATED_BODY()

public:
	
	UPROPERTY(meta = (BindWidget))
	UPanelWidget* Panel;
};

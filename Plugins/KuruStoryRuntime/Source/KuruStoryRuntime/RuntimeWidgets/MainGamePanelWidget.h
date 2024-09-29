// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryPanel.h"
#include "MainGamePanelWidget.generated.h"

class UFrontGamePanelWidget;
/**
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API UMainGamePanelWidget : public UKuruStoryPanel
{
	GENERATED_BODY()

public:
	UPROPERTY(meta=(BindWidget))
	UFrontGamePanelWidget* FrontGamePanel;
};

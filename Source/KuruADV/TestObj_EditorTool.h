
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "UObject/Object.h"

class UTestObj;
class SMyTestWidget;
/**
 *
 */
class KURUADV_API FTestObj_EditorTool : public FAssetEditorToolkit
{
    static const FName MyTestTabID;
    static const FName MyDetailPropertyID;
public:
    virtual FName GetToolkitFName() const override;
    virtual FText GetBaseToolkitName() const override;
    virtual FString GetWorldCentricTabPrefix() const override;
    virtual FLinearColor GetWorldCentricTabColorScale() const override;

    virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;
    virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;

    void InitializeAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UObject* InAssets);

private:
    /*Detail面板*/
    TSharedRef<SDockTab> SpawnDetailTab(const FSpawnTabArgs& SpawnTabArgs)const;

    UPROPERTY()
    UTestObj* EditingObject;

};

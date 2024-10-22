
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Toolkits/AssetEditorToolkit.h"
#include "UObject/Object.h"

class SKuruStoryTimelineTopWidget;
class FKuruStoryTimelinerCore;
class SSectionEditorWidget;
class UKuruStorySectionData;
class SMyTestWidget;
/**
 *
 */
class KURUSTORYMODULE_API FKuruStorySectionData_EditorTool : public FAssetEditorToolkit,FEditorUndoClient
{
    static const FName EditorTabID;
    static const FName MyDetailPropertyID;

public:
    ~FKuruStorySectionData_EditorTool();
    
    virtual FName GetToolkitFName() const override;
    virtual FText GetBaseToolkitName() const override;
    virtual FString GetWorldCentricTabPrefix() const override;
    virtual FLinearColor GetWorldCentricTabColorScale() const override;

    virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;
    virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;

    void InitializeAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UObject* InAssets);

    virtual void PostRedo(bool bSuccess) override;
    virtual void PostUndo(bool bSuccess) override;
private:
    /*Detail面板*/
    TSharedRef<SDockTab> SpawnDetailTab(const FSpawnTabArgs& SpawnTabArgs)const;

    TSharedRef<SDockTab> SpawnEditorTab(const FSpawnTabArgs& SpawnTabArgs);

    TSharedPtr<SSectionEditorWidget> EditorWidget;
    
    
    UKuruStorySectionData* EditingObject=nullptr;
public:
    TSharedPtr<SDockTab> TimelinePanelDockTab = nullptr;
    TSharedPtr<FKuruStoryTimelinerCore> Core;
    TSharedPtr<SKuruStoryTimelineTopWidget> TimelineWidget;
protected:
    void RefreshWidget();
    void Bind_OnSectionPropertyChanged(UObject* Object, FPropertyChangedEvent& PropertyChangedEvent);

};

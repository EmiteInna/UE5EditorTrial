// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipData_AssetDefinition.h"

#include "KuruStoryClipData_EditorTool.h"

EAssetCommandResult UKuruStoryClipData_AssetDefinition::OpenAssets(const FAssetOpenArgs& OpenArgs) const
{
    if (OpenArgs.OpenMethod == EAssetOpenMethod::Edit)
    {
        for (const auto& Object : OpenArgs.LoadObjects<UObject>())
        {
            if (UKuruStoryClipData* Asset = Cast<UKuruStoryClipData>(Object))
            {
                const TSharedRef< FKuruStoryClipData_EditorTool> NewEditor = MakeShareable(new FKuruStoryClipData_EditorTool());
                NewEditor->InitializeAssetEditor(EToolkitMode::Standalone, OpenArgs.ToolkitHost, Asset);
            }
        }
        return EAssetCommandResult::Handled;

    }
    return EAssetCommandResult::Unhandled;
}

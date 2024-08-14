// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStorySectionData_AssetDefinition.h"

#include "KuruStorySectionData_EditorTool.h"

EAssetCommandResult UKuruStorySectionData_AssetDefinition::OpenAssets(const FAssetOpenArgs& OpenArgs) const
{
    if (OpenArgs.OpenMethod == EAssetOpenMethod::Edit)
    {
        for (const auto& Object : OpenArgs.LoadObjects<UObject>())
        {
            if (UKuruStorySectionData* Asset = Cast<UKuruStorySectionData>(Object))
            {
                const TSharedRef< FKuruStorySectionData_EditorTool> NewEditor = MakeShareable(new FKuruStorySectionData_EditorTool());
                NewEditor->InitializeAssetEditor(EToolkitMode::Standalone, OpenArgs.ToolkitHost, Asset);
            }
        }
        return EAssetCommandResult::Handled;

    }
    return EAssetCommandResult::Unhandled;
}

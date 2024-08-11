// Fill out your copyright notice in the Description page of Project Settings.


#include "TestObj_AssetDefinition.h"

#include "TestObj_EditorTool.h"

EAssetCommandResult UTestObj_AssetDefinition::OpenAssets(const FAssetOpenArgs& OpenArgs) const
{
    if (OpenArgs.OpenMethod == EAssetOpenMethod::Edit)
    {
        for (const auto& Object : OpenArgs.LoadObjects<UObject>())
        {
            if (UTestObj* Asset = Cast<UTestObj>(Object))
            {
                const TSharedRef< FTestObj_EditorTool> NewEditor = MakeShareable(new FTestObj_EditorTool());
                NewEditor->InitializeAssetEditor(EToolkitMode::Standalone, OpenArgs.ToolkitHost, Asset);
            }
        }
        return EAssetCommandResult::Handled;

    }
    return EAssetCommandResult::Unhandled;
}

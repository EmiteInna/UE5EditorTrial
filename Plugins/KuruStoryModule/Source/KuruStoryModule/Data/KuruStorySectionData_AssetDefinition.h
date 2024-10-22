// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetDefinitionDefault.h"
#include "AssetTypeActions_Base.h"
#include "KuruStoryRuntime/KuruStorySectionData.h"
#include "KuruStorySectionData_AssetDefinition.generated.h"

/**
 * 资产的标识符。
 */
UCLASS()
class KURUSTORYMODULE_API UKuruStorySectionData_AssetDefinition :public UAssetDefinitionDefault
{
    GENERATED_BODY()
public:
    // UAssetDefinition Begin
    virtual FText GetAssetDisplayName() const override { return FText::FromString(TEXT("KuruStorySectionData")); }
    virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return FText::FromString(TEXT("一个对话片段>_<")); };
    virtual FLinearColor GetAssetColor() const override { return FLinearColor(FColor(255, 210, 230)); }
    virtual TSoftClassPtr<UObject> GetAssetClass() const override { return UKuruStorySectionData::StaticClass(); }
    virtual TConstArrayView<FAssetCategoryPath> GetAssetCategories() const override
    {
        static const auto Categories = { FAssetCategoryPath(EAssetCategoryPaths::Gameplay) };
        return Categories;
    }
    virtual EAssetCommandResult OpenAssets(const FAssetOpenArgs& OpenArgs) const override;

    // UAssetDefinition End

};

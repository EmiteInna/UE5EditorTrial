// Fill out your copyright notice in the Description page of Project Settings.


#include "TestObj_EditorTool.h"
#include "PropertyEditorModule.h"
#include "TestObj.h"

const FName FTestObj_EditorTool::MyTestTabID = TEXT("PreviewViewportTabID");
const FName FTestObj_EditorTool::MyDetailPropertyID = TEXT("DetailsTabID");


FName FTestObj_EditorTool::GetToolkitFName() const
{
return FName(TEXT("TestObj编辑器"));
}

FText FTestObj_EditorTool::GetBaseToolkitName() const
{
return FText::FromName(FName(TEXT("TestObj编辑器")));
}

FString FTestObj_EditorTool::GetWorldCentricTabPrefix() const
{
return TEXT("TestObj编辑器");
}

FLinearColor FTestObj_EditorTool::GetWorldCentricTabColorScale() const
{
return FLinearColor::Green;
}

void FTestObj_EditorTool::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
FAssetEditorToolkit::RegisterTabSpawners(InTabManager);
InTabManager->RegisterTabSpawner(MyDetailPropertyID, FOnSpawnTab::CreateRaw(this,
&FTestObj_EditorTool::SpawnDetailTab));
}

void FTestObj_EditorTool::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
InTabManager->UnregisterTabSpawner(MyDetailPropertyID);
FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
}

void FTestObj_EditorTool::InitializeAssetEditor(const EToolkitMode::Type Mode,
const TSharedPtr<IToolkitHost>& InitToolkitHost, UObject* InAssets)
{

EditingObject = Cast<UTestObj>(InAssets);
const TSharedRef<FTabManager::FLayout> StandaloneOurAssetEditor =
FTabManager::NewLayout("TestObjAssetEditor3")->AddArea(
FTabManager::NewPrimaryArea()->SetOrientation(EOrientation::Orient_Horizontal)
->Split(FTabManager::NewStack()->AddTab(MyDetailPropertyID, ETabState::OpenedTab))
);
InitAssetEditor(Mode, InitToolkitHost, FName(TEXT("TestObj编辑器")), StandaloneOurAssetEditor, true, true, InAssets);
}

TSharedRef<SDockTab> FTestObj_EditorTool::SpawnDetailTab(const FSpawnTabArgs& SpawnTabArgs) const
{
//加载属性编辑器模块
FPropertyEditorModule& PropertyEditorModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
const FDetailsViewArgs DetailsViewArgs;
//创建属性编辑器的Slate
const TSharedRef<IDetailsView> AssetPropertyView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
//将对象传入，这样就是自动生成对象的属性面板
AssetPropertyView->SetObject(GetEditingObject());
return SNew(SDockTab)
[
AssetPropertyView
];
}


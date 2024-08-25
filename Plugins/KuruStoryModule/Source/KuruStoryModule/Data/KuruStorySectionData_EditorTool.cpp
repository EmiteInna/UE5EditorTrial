// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStorySectionData_EditorTool.h"
#include "PropertyEditorModule.h"
#include "KuruStorySectionData.h"
#include "DataEditorWidgets/SSectionEditorWidget.h"

const FName FKuruStorySectionData_EditorTool::EditorTabID = TEXT("EditorTabID");
const FName FKuruStorySectionData_EditorTool::MyDetailPropertyID = TEXT("DetailsTabID");


FKuruStorySectionData_EditorTool::~FKuruStorySectionData_EditorTool()
{
	if (GEditor)
	{
		GEditor->UnregisterForUndo(this);
	}
}

FName FKuruStorySectionData_EditorTool::GetToolkitFName() const
{
return FName(TEXT("KuruStorySectionData编辑器"));
}

FText FKuruStorySectionData_EditorTool::GetBaseToolkitName() const
{
return FText::FromName(FName(TEXT("KuruStorySectionData编辑器")));
}

FString FKuruStorySectionData_EditorTool::GetWorldCentricTabPrefix() const
{
return TEXT("KuruStorySectionData编辑器");
}

FLinearColor FKuruStorySectionData_EditorTool::GetWorldCentricTabColorScale() const
{
return FLinearColor::Green;
}

void FKuruStorySectionData_EditorTool::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);
	InTabManager->RegisterTabSpawner(MyDetailPropertyID, FOnSpawnTab::CreateRaw(this,
	&FKuruStorySectionData_EditorTool::SpawnDetailTab));
	InTabManager->RegisterTabSpawner(EditorTabID, FOnSpawnTab::CreateSP(this,
		&FKuruStorySectionData_EditorTool::SpawnEditorTab));
}

void FKuruStorySectionData_EditorTool::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	InTabManager->UnregisterTabSpawner(MyDetailPropertyID);
	InTabManager->UnregisterTabSpawner(EditorTabID);
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
}

void FKuruStorySectionData_EditorTool::InitializeAssetEditor(const EToolkitMode::Type Mode,
const TSharedPtr<IToolkitHost>& InitToolkitHost, UObject* InAssets)
{
	GEditor->RegisterForUndo(this);
	EditingObject = Cast<UKuruStorySectionData>(InAssets);
	FCoreUObjectDelegates::OnObjectPropertyChanged.AddSP(this,&FKuruStorySectionData_EditorTool::Bind_OnSectionPropertyChanged);
	
	const TSharedRef<FTabManager::FLayout> StandaloneOurAssetEditor =
	FTabManager::NewLayout("KuruStorySectionDataAssetEditor3")->AddArea(
		FTabManager::NewPrimaryArea()->SetOrientation(EOrientation::Orient_Horizontal)
		->Split(FTabManager::NewStack()->AddTab(EditorTabID,ETabState::OpenedTab))
		->Split(FTabManager::NewStack()->AddTab(MyDetailPropertyID, ETabState::OpenedTab))
	);
	InitAssetEditor(Mode, InitToolkitHost, FName(TEXT("KuruStorySectionData编辑器")),
		StandaloneOurAssetEditor, true, true, InAssets);
	RegenerateMenusAndToolbars();
	//FLayoutSaveRestore::SaveToConfig(GEditorLayoutIni, StandaloneOurAssetEditor);

}

void FKuruStorySectionData_EditorTool::PostRedo(bool bSuccess)
{
	FEditorUndoClient::PostRedo(bSuccess);
	RefreshWidget();
}

void FKuruStorySectionData_EditorTool::PostUndo(bool bSuccess)
{
	FEditorUndoClient::PostUndo(bSuccess);
	RefreshWidget();
}

void FKuruStorySectionData_EditorTool::RefreshWidget()
{
	if (EditorWidget.Get())
	{
		EditorWidget->Bind_RefreshProperty();
	}
}

TSharedRef<SDockTab> FKuruStorySectionData_EditorTool::SpawnDetailTab(const FSpawnTabArgs& SpawnTabArgs) const
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

TSharedRef<SDockTab> FKuruStorySectionData_EditorTool::SpawnEditorTab(const FSpawnTabArgs& SpawnTabArgs)
{
	TSharedRef<SDockTab> SpawnTab = SNew(SDockTab);
	TSharedRef<SSectionEditorWidget> Widget = SNew(SSectionEditorWidget,SharedThis(this));
	EditorWidget = Widget;
	Widget->ToolPtr = this;
	Widget->EditingData = EditingObject;

	SpawnTab->SetContent(Widget);
	RefreshWidget();
	return SpawnTab;
}

void FKuruStorySectionData_EditorTool::Bind_OnSectionPropertyChanged(UObject* Object,
	FPropertyChangedEvent& PropertyChangedEvent)
{
	RefreshWidget();
}


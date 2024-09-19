#include "EITimelinerTopWidgetBase.h"

#include "EITimelinerContext.h"
#include "EITimelinerCoreBase.h"
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"
#include "EITimeliner/EditorComponents/FEINotifyLibrary.h"
#include "EITimeliner/EditorComponents/FEIPreviewScene.h"
#include "EITimeliner/EditorComponents/Widgets/SEIEditorViewport.h"
#include "EITimeliner/EditorComponents/Widgets/SEITimelineContainer.h"
#include "EITimeliner/EditorComponents/Widgets/SEIToolBox.h"
#include "EITimeliner/EditorUtils/EIWidgetStore.h"

FName SEITimelinerTopWidgetBase::FirstTabName = "ToolTab";
FName SEITimelinerTopWidgetBase::SecondTabName = "TimelineTab";
FName SEITimelinerTopWidgetBase::ThirdTabName = "PreviewTab";
FName SEITimelinerTopWidgetBase::FourthTabName = "EventDetailTab";
FName SEITimelinerTopWidgetBase::FifthTabName = "DetailTab";

void SEITimelinerTopWidgetBase::OnUnregisterTabs()
{
	WidgetTabManager->UnregisterTabSpawner(FirstTabName);
	WidgetTabManager->UnregisterTabSpawner(SecondTabName);
	WidgetTabManager->UnregisterTabSpawner(ThirdTabName);
	WidgetTabManager->UnregisterTabSpawner(FourthTabName);
	WidgetTabManager->UnregisterTabSpawner(FifthTabName);
}

void SEITimelinerTopWidgetBase::Construct(const FArguments& InArgs,
	const TSharedPtr<FAssetEditorToolkit>& InEditorToolkit,
	const TSharedRef<SDockTab>& InParentDockTab,
	const TSharedRef<FEITimelinerCoreBase> InCore,
		UObject* EditingObject)
{
	FEIWidgetStores::InitializeKuruStores();
	
	Context = MakeShareable(new FEITimelinerContext);

	AssetEditorToolkit = InEditorToolkit;

	SpawnCore = InCore;
	
	EditingModel = SpawnCore->CreateModel(EditingObject,Context.ToSharedRef());

	PreviewScene =SpawnCore->CreatePreviewScene();

	NotifyLibrary = SpawnCore->CreateNotifyLibrary(Context.ToSharedRef());

	Context->SpawnCore = InCore;
	Context->AssetEditorToolkit = AssetEditorToolkit;
	Context->EditingModel = EditingModel;
	Context->PreviewScene = PreviewScene;
	Context->NotifyLibrary = NotifyLibrary;
	Context->TopWidget = SharedThis(this);

	//Controller是在Container里创建的。
	
	PreviewScene->CreatePreviewInstance(Context.ToSharedRef());

	
	WidgetTabManager = FGlobalTabmanager::Get()->NewTabManager(
		InParentDockTab).ToSharedPtr(); 
	
	WidgetTabManager->RegisterTabSpawner(FirstTabName, FOnSpawnTab::CreateRaw(this, &SEITimelinerTopWidgetBase::SpawnToolTab));
	WidgetTabManager->RegisterTabSpawner(SecondTabName, FOnSpawnTab::CreateRaw(this, &SEITimelinerTopWidgetBase::SpawnTimelineTab));
	WidgetTabManager->RegisterTabSpawner(ThirdTabName, FOnSpawnTab::CreateRaw(this, &SEITimelinerTopWidgetBase::SpawnPreviewTab));
	WidgetTabManager->RegisterTabSpawner(FourthTabName, FOnSpawnTab::CreateRaw(this, &SEITimelinerTopWidgetBase::SpawnEventDetailTab));
	WidgetTabManager->RegisterTabSpawner(FifthTabName, FOnSpawnTab::CreateRaw(this, &SEITimelinerTopWidgetBase::SpawnDetailTab));

    TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("ClipTimelineLayout")
        ->AddArea(
            FTabManager::NewPrimaryArea()
            ->SetOrientation(Orient_Horizontal)
            ->Split(
                FTabManager::NewSplitter()
                ->SetOrientation(Orient_Vertical)
                ->SetSizeCoefficient(0.45f) // 第一列宽度比例
                ->Split(
                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.25f) 
                    ->AddTab(FirstTabName, ETabState::OpenedTab)
                    ->SetForegroundTab(FName(FirstTabName))
                )
                ->Split(
                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.75f) 
                    ->AddTab(SecondTabName, ETabState::OpenedTab)
                )
            )
            ->Split(
                FTabManager::NewSplitter()
                ->SetOrientation(Orient_Vertical)
                ->SetSizeCoefficient(0.35f) // 第二列宽度比例
                ->Split(
                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.4f) 
                    ->AddTab(ThirdTabName, ETabState::OpenedTab)
                    ->SetForegroundTab(FName(ThirdTabName))
                )
                ->Split(
                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.6f) 
                    ->AddTab(FourthTabName, ETabState::OpenedTab)
                )
            )
            ->Split(
                FTabManager::NewStack()
                ->SetSizeCoefficient(0.2f) 
                ->AddTab(FifthTabName, ETabState::OpenedTab)
                ->SetForegroundTab(FName(FifthTabName))
            )
        );

  
	ChildSlot[
		SNew(SOverlay)+
		
		SOverlay::Slot().Padding(0)
		[
			WidgetTabManager->RestoreFrom(Layout, TSharedPtr<SWindow>()).ToSharedRef()
		]
	];
}

TSharedRef<SDockTab> SEITimelinerTopWidgetBase::SpawnToolTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
			[
				 SpawnCore->CreateToolBox(Context.ToSharedRef())
			];
}

TSharedRef<SDockTab> SEITimelinerTopWidgetBase::SpawnTimelineTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
				SpawnCore->CreateTimelineContainer(Context->PreviewScene,Context.ToSharedRef())
		   ];
}

TSharedRef<SDockTab> SEITimelinerTopWidgetBase::SpawnPreviewTab(const FSpawnTabArgs& Args)
{
	FEIEditorViewportRequireArgs Arg(PreviewScene.ToSharedRef(),AssetEditorToolkit.Pin().ToSharedRef());
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
				Context->SpawnCore.Pin()->CreateEditorViewPort(Arg, Context.ToSharedRef())
				//SNew(SEIEditorViewport, Arg, Context.ToSharedRef()
		   ];
}

TSharedRef<SDockTab> SEITimelinerTopWidgetBase::SpawnEventDetailTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
			   SNew(STextBlock).Text(FText::FromString("Spawn EventDetail Tab Content"))
		   ];
}

TSharedRef<SDockTab> SEITimelinerTopWidgetBase::SpawnDetailTab(const FSpawnTabArgs& Args)
{
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	const FDetailsViewArgs DetailsViewArgs;
	const TSharedRef<IDetailsView> AssetPropertyView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	AssetPropertyView->SetObject(EditingModel->EditingInstacne);
	return SNew(SDockTab)
	[
		AssetPropertyView
	];
}

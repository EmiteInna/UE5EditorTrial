#include "SClipTimelineWidget.h"

#include "SKuruTimelineContainer.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "KuruStoryModule/Types/ColorStores.h"

FName SClipTimelineWidget::FirstTabName = "ToolTab";
FName SClipTimelineWidget::SecondTabName = "TimelineTab";
FName SClipTimelineWidget::ThirdTabName = "PreviewTab";
FName SClipTimelineWidget::FourthTabName = "EventDetailTab";
FName SClipTimelineWidget::FifthTabName = "DetailTab";


void SClipTimelineWidget::OnUnregisterTabs()
{
	FGlobalTabmanager::Get()->UnregisterTabSpawner(FirstTabName);
	FGlobalTabmanager::Get()->UnregisterTabSpawner(SecondTabName);
	FGlobalTabmanager::Get()->UnregisterTabSpawner(ThirdTabName);
	FGlobalTabmanager::Get()->UnregisterTabSpawner(FourthTabName);
	FGlobalTabmanager::Get()->UnregisterTabSpawner(FifthTabName);
}

void SClipTimelineWidget::Construct(const FArguments& InArgs)
{
	mEditingData = InArgs._EditingData;
	mParentWidget = InArgs._ParentWidget;
	FSlateBrush* MyBackgroundBrush = new FSlateBrush();
    	MyBackgroundBrush->TintColor = KuruColorStores::KawaiiOrange;


	FGlobalTabmanager::Get()->RegisterTabSpawner(FirstTabName, FOnSpawnTab::CreateRaw(this, &SClipTimelineWidget::SpawnToolTab));
	FGlobalTabmanager::Get()->RegisterTabSpawner(SecondTabName, FOnSpawnTab::CreateRaw(this, &SClipTimelineWidget::SpawnTimelineTab));
	FGlobalTabmanager::Get()->RegisterTabSpawner(ThirdTabName, FOnSpawnTab::CreateRaw(this, &SClipTimelineWidget::SpawnPreviewTab));
	FGlobalTabmanager::Get()->RegisterTabSpawner(FourthTabName, FOnSpawnTab::CreateRaw(this, &SClipTimelineWidget::SpawnEventDetailTab));
	FGlobalTabmanager::Get()->RegisterTabSpawner(FifthTabName, FOnSpawnTab::CreateRaw(this, &SClipTimelineWidget::SpawnDetailTab));

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
		SOverlay::Slot().Padding(0)[
			SNew(SImage).Image(MyBackgroundBrush)
		]
		+
		SOverlay::Slot().Padding(0)
		[
			FGlobalTabmanager::Get()->RestoreFrom(Layout, TSharedPtr<SWindow>()).ToSharedRef()
		]
	];
	
}

TSharedRef<SDockTab> SClipTimelineWidget::SpawnToolTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
			   SNew(STextBlock).Text(FText::FromString("Spawn Tool Tab Content"))
		   ];
}

TSharedRef<SDockTab> SClipTimelineWidget::SpawnTimelineTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
		//	   SNew(STextBlock).Text(FText::FromString("Spawn Timeline Tab Content"))
				SNew(SKuruTimelineContainer).EditingData(mEditingData)
		   ];
}

TSharedRef<SDockTab> SClipTimelineWidget::SpawnPreviewTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
			   SNew(STextBlock).Text(FText::FromString("Spawn Preview Tab Content"))
		   ];
}

TSharedRef<SDockTab> SClipTimelineWidget::SpawnEventDetailTab(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		   .TabRole(ETabRole::PanelTab)
		   [
			   SNew(STextBlock).Text(FText::FromString("Spawn EventDetail Tab Content"))
		   ];
}

TSharedRef<SDockTab> SClipTimelineWidget::SpawnDetailTab(const FSpawnTabArgs& Args)
{
	FPropertyEditorModule& PropertyEditorModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	const FDetailsViewArgs DetailsViewArgs;
	const TSharedRef<IDetailsView> AssetPropertyView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	AssetPropertyView->SetObject(mEditingData);
	return SNew(SDockTab)
	[
		AssetPropertyView
	];
}

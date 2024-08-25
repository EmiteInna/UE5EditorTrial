#include "StoryClipPreviewScene.h"

#include "KuruStoryModule/Data/Runtime/KuruStoryClipDataInstance.h"
#include "KuruStoryModule/Data/Runtime/KuruStoryClipEditorExecutor.h"

FStoryClipPreviewScene::FStoryClipPreviewScene(ConstructionValues CVS, float InFloorOffset): FAdvancedPreviewScene(CVS)
{
}

FStoryClipPreviewScene::~FStoryClipPreviewScene()
{
}

void FStoryClipPreviewScene::CreatePreviewInstance(UKuruStoryClipData* InEditingData)
{
	EditingData=InEditingData;
	PreviewInstance = PreviewWorld->SpawnActor<AKuruStoryClipEditorExecutor>();
	UKuruStoryClipDataInstance* NewInstance = NewObject<UKuruStoryClipDataInstance>(PreviewInstance);
	NewInstance->BaseData = InEditingData;
	PreviewInstance->PlayingInstance = NewInstance;
}

void FStoryClipPreviewScene::Tick(float DeltaTime)
{
	FAdvancedPreviewScene::Tick(DeltaTime);
	if (PreviewInstance)
	{
		PreviewInstance->Tick(DeltaTime);
	}
}

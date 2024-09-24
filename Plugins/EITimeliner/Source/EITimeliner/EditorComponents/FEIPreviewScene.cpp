#include "FEIPreviewScene.h"
FEIPreviewScene::FEIPreviewScene(ConstructionValues CVS, float InFloorOffset): FAdvancedPreviewScene(CVS)
{
}

FEIPreviewScene::~FEIPreviewScene()
{
	if(GetWorld())
	{
		GetWorld()->CleanupWorld(true,true);
		FlushRenderingCommands();
		CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
	}
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] PreviewScene 被摧毁"))
}

void FEIPreviewScene::CreatePreviewInstance(TSharedRef<FEITimelinerContext> InContext)
{
	Context=InContext;
}

void FEIPreviewScene::Tick(float DeltaTime)
{
	FAdvancedPreviewScene::Tick(DeltaTime);
	
}

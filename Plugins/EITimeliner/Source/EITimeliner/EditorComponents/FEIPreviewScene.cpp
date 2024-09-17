#include "FEIPreviewScene.h"
FEIPreviewScene::FEIPreviewScene(ConstructionValues CVS, float InFloorOffset): FAdvancedPreviewScene(CVS)
{
}

FEIPreviewScene::~FEIPreviewScene()
{
}

void FEIPreviewScene::CreatePreviewInstance(TSharedRef<FEITimelinerContext> InContext)
{
	Context=InContext;
}

void FEIPreviewScene::Tick(float DeltaTime)
{
	FAdvancedPreviewScene::Tick(DeltaTime);
	
}

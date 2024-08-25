#pragma once
#include "AdvancedPreviewScene.h"

class UKuruStoryClipData;
class AKuruStoryClipEditorExecutor;

class FStoryClipPreviewScene : public FAdvancedPreviewScene
{
public:
	FStoryClipPreviewScene(ConstructionValues CVS,float InFloorOffset = 0.f);
	~FStoryClipPreviewScene();

	AKuruStoryClipEditorExecutor* PreviewInstance;

	UKuruStoryClipData* EditingData;

	void CreatePreviewInstance(UKuruStoryClipData* EditingData);

	virtual void Tick(float DeltaTime) override;

	AKuruStoryClipEditorExecutor* GetPreviewInstance()const{return PreviewInstance;}
};

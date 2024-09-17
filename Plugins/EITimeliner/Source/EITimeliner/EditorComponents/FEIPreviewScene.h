#pragma once

#include "AdvancedPreviewScene.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"



class EITIMELINER_API  FEIPreviewScene : public FAdvancedPreviewScene
{
public:
	FEIPreviewScene(ConstructionValues CVS,float InFloorOffset = 0.f);
	~FEIPreviewScene();
	
	TWeakPtr<FEITimelinerContext> Context;

	//在场景中创建出要创建的东西
	virtual void CreatePreviewInstance(TSharedRef<FEITimelinerContext> InContext);

	//对场景进行Tick
	virtual void Tick(float DeltaTime) override;

	TWeakPtr<FEITimelinerContext> GetPreviewInstance()const{return Context;}
};

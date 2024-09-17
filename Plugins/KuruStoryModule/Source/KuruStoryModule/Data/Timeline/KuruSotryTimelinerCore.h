#pragma once
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"

class FKuruStoryTimelinerCore:public FEITimelinerCoreBase
{
public:
	virtual TSharedPtr<FEITimelineEditingModel> CreateModel(UObject* Object) override;
};



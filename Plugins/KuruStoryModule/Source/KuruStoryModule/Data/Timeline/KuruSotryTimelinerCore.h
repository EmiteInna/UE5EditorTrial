#pragma once
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"

class KURUSTORYMODULE_API FKuruStoryTimelinerCore:public FEITimelinerCoreBase
{
public:
	virtual TSharedPtr<FEITimelineEditingModel> CreateModel(UObject* Object,const TSharedRef<FEITimelinerContext>& Context) override;

	virtual TSharedPtr<FEINotifyLibrary> CreateNotifyLibrary(const TSharedRef<FEITimelinerContext>& Context) override;
};



#pragma once
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"

class UKuruStoryClipData;

class FKuruStoryClipData_Model:public FEITimelineEditingModel
{
public:

	FKuruStoryClipData_Model();
	
	UKuruStoryClipData* GetEditingObj()const;
	
	virtual void AddDefaultNewTrack() override;

	virtual void RemoveTrack(int trackId) override;

	virtual void ReconcileTracks() override;
};



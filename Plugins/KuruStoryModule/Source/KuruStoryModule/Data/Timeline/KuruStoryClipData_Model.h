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

	virtual float GetTrackStartTime(int trackId) override;

	virtual float GetTrackEndTime(int trackId) override;

	virtual void OnTrackNodeMoved(float DeltaMoveTime,int trackId) override;

	virtual void OnTrackNodeStretched(float NewStartTime, float NewEndTime,int trackId) override;
};




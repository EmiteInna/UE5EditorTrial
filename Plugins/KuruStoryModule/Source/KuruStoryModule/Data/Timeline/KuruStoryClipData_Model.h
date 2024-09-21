#pragma once
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"

class UStoryNotifyBase;
class UKuruStoryClipData;

class KURUSTORYMODULE_API FKuruStoryClipData_Model:public FEITimelineEditingModel
{
public:

	FKuruStoryClipData_Model();
	
	UKuruStoryClipData* GetEditingObj()const;

	UStoryNotifyBase* GetNotifyByTrackID(int trackId)const;

	virtual float GetTotalLength() override;
	
	virtual void AddDefaultNewTrack() override;

	virtual void RemoveTrack(int trackId) override;

	virtual void ReconcileTracks() override;

	virtual float GetTrackStartTime(int trackId) override;

	virtual float GetTrackEndTime(int trackId) override;

	virtual void OnTrackNodeMoved(float DeltaMoveTime,int trackId) override;


	virtual void OnDropWithNewStartDelta(float DeltaMoveTime, int trackId) override;

	virtual void OnDropWithNewEndDelta(float DeltaMoveTime, int trackId) override;
};






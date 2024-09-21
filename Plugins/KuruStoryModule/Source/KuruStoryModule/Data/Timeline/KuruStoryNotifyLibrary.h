#pragma once
#include "EITimeliner/EditorComponents/FEINotifyLibrary.h"

class UKuruStoryClipData;

class KURUSTORYMODULE_API FKuruStoryNotifyLibrary : public FEINotifyLibrary
{
public:

	UKuruStoryClipData* GetEdittingObj()const;
	
	virtual void Initialize() override;

	virtual FReply OnClickAddNotify(FName NotifyName) override;

	virtual float GetCurrentChosenTrackEndTime() const override;
	virtual float GetCurrentChosenTrackStartTime() const override;
	virtual void SetCurrentChosenTrackEndTime(float newValue) override;
	virtual void SetCurrentChosenTrackStartTime(float newValue) override;
	virtual void SetClipTotalDuration(float newValue) override;
	virtual FReply OnDeleteChosenNotify() override;
	virtual FReply OnChooseTrack(int ChooseID) override;
};



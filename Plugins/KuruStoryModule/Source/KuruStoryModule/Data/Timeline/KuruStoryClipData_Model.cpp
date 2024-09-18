#include "KuruStoryClipData_Model.h"

#include "EITimeliner/EditorComponents/FEITimelineTrack.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "KuruStoryModule/Data/StoryNotifies/StoryNotifyBase.h"

FKuruStoryClipData_Model::FKuruStoryClipData_Model()
{
}

UKuruStoryClipData* FKuruStoryClipData_Model::GetEditingObj() const
{
	return Cast<UKuruStoryClipData>(EditingInstacne);
}

void FKuruStoryClipData_Model::AddDefaultNewTrack()
{
	FStoryNotifyBase NotifyBase;
	if (GetEditingObj())
	{
		GetEditingObj()->Notifies.Emplace(NotifyBase);
	}

	TSharedRef<FEITimelineTrack> NewTrack = MakeShared<FEITimelineTrack>
		(FText::FromString("NewTrack"),FText::FromString(TEXT("新NotifyTrack")),Context.Pin().ToSharedRef(),true);
	RootTracks.Emplace(NewTrack);
}


void FKuruStoryClipData_Model::RemoveTrack(int trackId)
{
	if (GetEditingObj() && GetEditingObj()->Notifies.Num() > trackId)
	{
		GetEditingObj()->Notifies.RemoveAt(trackId);
	}
	
	if (RootTracks.Num() > trackId)
	{
		RootTracks.RemoveAt(trackId);
	}
}

void FKuruStoryClipData_Model::ReconcileTracks()
{
	if (GetEditingObj())
	{
		for (auto n:GetEditingObj()->Notifies)
		{
			TSharedRef<FEITimelineTrack> NewTrack = MakeShared<FEITimelineTrack>
			(FText::FromString(n.GetName().ToString()),FText::FromString(TEXT("新NotifyTrack")),Context.Pin().ToSharedRef(),true);
			RootTracks.Emplace(NewTrack);
		}
	}
}
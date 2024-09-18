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

	ReconcileTracks();
	
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

	ReconcileTracks();
}

void FKuruStoryClipData_Model::ReconcileTracks()
{
	RootTracks.Empty();
	if (GetEditingObj())
	{
		for (int i =0 ;i<GetEditingObj()->Notifies.Num();i++)
		{
			auto& n=GetEditingObj()->Notifies[i];
			n.StartFrame=n.GetStartFrame();
			n.EndFrame=n.GetEndFrame();
			TSharedRef<FEITimelineTrack> NewTrack = MakeShared<FEITimelineTrack>
			(FText::FromString(n.GetName().ToString()),FText::FromString(TEXT("新NotifyTrack")),Context.Pin().ToSharedRef(),true);
			NewTrack->trackIndex = i;
			RootTracks.Emplace(NewTrack);
			
		}
	}
}

float FKuruStoryClipData_Model::GetTrackStartTime(int trackId)
{
	if (GetEditingObj())
	{
		if (GetEditingObj()->Notifies.Num()>trackId)
		{
			return GetEditingObj()->Notifies[trackId].GetStartTime();
		}
	}
	return FEITimelineEditingModel::GetTrackStartTime(trackId);
}

float FKuruStoryClipData_Model::GetTrackEndTime(int trackId)
{
	if (GetEditingObj())
	{
		if (GetEditingObj()->Notifies.Num()>trackId)
		{
			return GetEditingObj()->Notifies[trackId].GetEndTime();
		}
	}
	return FEITimelineEditingModel::GetTrackEndTime(trackId);
}

void FKuruStoryClipData_Model::OnTrackNodeMoved(float DeltaMoveTime,int trackId)
{
	if (GetEditingObj())
	{
		if (GetEditingObj()->Notifies.Num()>trackId)
		{
			auto& notify = GetEditingObj()->Notifies[trackId];
			float Total = GetEditingObj()->TotalLength;
			float Start = notify.GetStartTime();
			float End = notify.GetEndTime();
			float Delta = DeltaMoveTime;
			if (Start+Delta < 0)
			{
				Delta = -Start;
			}

			if (End + Delta > Total)
			{
				Delta = Total - End;
			}
			Delta = FMath::RoundToFloat(Delta*GetFrameRate().AsDecimal())/GetFrameRate().AsDecimal();
			notify.SetStartTime(Start+Delta);
			notify.SetEndTime(End+Delta);
			notify.StartFrame=notify.GetStartFrame();
			UE_LOG(LogInit,Error,TEXT("Decimal is %g, ret is %d"),notify.BaseFrameRate.AsDecimal(),notify.GetStartFrame());
			notify.EndFrame=notify.GetEndFrame();
		}
	}
}

void FKuruStoryClipData_Model::OnTrackNodeStretched(float NewStartTime, float NewEndTime,int trackId)
{
	
}
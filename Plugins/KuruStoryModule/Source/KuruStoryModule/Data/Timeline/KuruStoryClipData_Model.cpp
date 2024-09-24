#include "KuruStoryClipData_Model.h"

#include "EITimeliner/EditorComponents/FEITimelineTrack.h"
#include "EITimeliner/EditorComponents/Widgets/SEITrackOutliner.h"
#include "KuruStoryRuntime/KuruStoryClipData.h"
#include "KuruStoryRuntime/StoryNotifies/StoryNotifyBase.h"


FKuruStoryClipData_Model::FKuruStoryClipData_Model()
{
	
}

UKuruStoryClipData* FKuruStoryClipData_Model::GetEditingObj() const
{
	return Cast<UKuruStoryClipData>(EditingInstacne);
}

UStoryNotifyBase* FKuruStoryClipData_Model::GetNotifyByTrackID(int trackId) const
{

	if (trackId < 0)
	{
		return nullptr;
	}
	
	if (GetEditingObj())
	{
		if (GetEditingObj()->Notifies.Num() > trackId)
		{
			return GetEditingObj()->Notifies[trackId];
		}
	}
	return nullptr;
}

float FKuruStoryClipData_Model::GetTotalLength()
{
	if (GetEditingObj())
	{
		return GetEditingObj()->TotalLength;
	}
	return 114514;
}

void FKuruStoryClipData_Model::AddDefaultNewTrack()
{
	UStoryNotifyBase* NotifyBase = NewObject<UStoryNotifyBase>(GetEditingObj());
	if (GetEditingObj())
	{
		GetEditingObj()->Notifies.Emplace(NotifyBase);
	}

	ReconcileTracks();
	
}


void FKuruStoryClipData_Model::RemoveTrack(int trackId)
{
	if (GetNotifyByTrackID(trackId))
	{
		
		GetEditingObj()->Notifies.RemoveAt(trackId);
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
			auto n=GetEditingObj()->Notifies[i];

			if (n==nullptr)
			{
				continue;
			}
			
			n->StartFrame=n->GetStartFrame();
			n->EndFrame=n->GetEndFrame();
			TSharedRef<FEITimelineTrack> NewTrack = MakeShared<FEITimelineTrack>
			(FText::FromString(n->GetName().ToString()),FText::FromString(TEXT("新NotifyTrack")),Context.Pin().ToSharedRef(),true);
			NewTrack->trackIndex = i;
			RootTracks.Emplace(NewTrack);
			
		}
	}

	if (Context.IsValid())
	{
		if (Context.Pin()->TrackOutliner.IsValid())
		{
			Context.Pin()->TrackOutliner.Pin()->HandleTracksChanged();
		}
	}
}

float FKuruStoryClipData_Model::GetTrackStartTime(int trackId)
{
	if (GetEditingObj())
	{
		if (GetEditingObj()->Notifies.Num()>trackId && GetEditingObj()->Notifies[trackId])
		{
			return GetEditingObj()->Notifies[trackId]->GetStartTime();
		}
	}
	return FEITimelineEditingModel::GetTrackStartTime(trackId);
}

float FKuruStoryClipData_Model::GetTrackEndTime(int trackId)
{
	if (GetEditingObj())
	{
		if (GetEditingObj()->Notifies.Num()>trackId && GetEditingObj()->Notifies[trackId])
		{
			return GetEditingObj()->Notifies[trackId]->GetEndTime();
		}
	}
	return FEITimelineEditingModel::GetTrackEndTime(trackId);
}

void FKuruStoryClipData_Model::OnTrackNodeMoved(float DeltaMoveTime,int trackId)
{
	
	auto Parent = GetEditingObj()->Parent;
	
	auto notify = GetNotifyByTrackID(trackId);
	
	const FScopedTransaction AddTaskTransaction(FText::FromString("NotifyModify"));
	notify->Modify();

	
	if (notify == nullptr)
	{
		return;
	}
	
	float Total = GetEditingObj()->TotalLength;
	float Start = notify->GetStartTime();
	float End = notify->GetEndTime();
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
	notify->SetStartTime(Start+Delta);
	notify->SetEndTime(End+Delta);
	notify->StartFrame=notify->GetStartFrame();
	//UE_LOG(LogInit,Error,TEXT("Decimal is %g, ret is %d"),notify->BaseFrameRate.AsDecimal(),notify->GetStartFrame());
	notify->EndFrame=notify->GetEndFrame();
		
}

void FKuruStoryClipData_Model::OnDropWithNewStartDelta(float DeltaMoveTime, int trackId)
{
	auto notify = GetNotifyByTrackID(trackId);

	if (notify == nullptr)
	{
		return;
	}
	
	const FScopedTransaction AddTaskTransaction(FText::FromString("NotifyModify"));
	notify->Modify();
	
	DeltaMoveTime = FMath::RoundToFloat(DeltaMoveTime*GetFrameRate().AsDecimal())/GetFrameRate().AsDecimal();
	float Start = notify->GetStartTime();
	float End = notify->GetEndTime();

	float NewStart = Start + DeltaMoveTime;
	NewStart = FMath::Clamp(NewStart,0 , End - 1/GetFrameRate().AsDecimal() );
	notify->SetStartTime(NewStart);
	notify->StartFrame = notify->GetStartFrame();
}

void FKuruStoryClipData_Model::OnDropWithNewEndDelta(float DeltaMoveTime, int trackId)
{

	
	auto notify = GetNotifyByTrackID(trackId);

	if (notify == nullptr)
	{
		return;
	}

	const FScopedTransaction AddTaskTransaction(FText::FromString("NotifyModify"));
	notify->Modify();

	DeltaMoveTime = FMath::RoundToFloat(DeltaMoveTime*GetFrameRate().AsDecimal())/GetFrameRate().AsDecimal();
	float Total = GetEditingObj()->TotalLength;
	float Start = notify->GetStartTime();
	float End = notify->GetEndTime();

	float NewEnd = End + DeltaMoveTime;
	NewEnd = FMath::Clamp(NewEnd,Start + 1/GetFrameRate().AsDecimal() , Total);
	notify->SetEndTime(NewEnd);
	notify->EndFrame = notify->GetEndFrame();
}
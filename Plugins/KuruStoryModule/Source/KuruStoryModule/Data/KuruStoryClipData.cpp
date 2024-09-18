// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipData.h"

#include "DataEditorWidgets/TimelineTrack/StoryTimelineTrack.h"
#include "EditorEg/StoryClipPreviewScene.h"
#include "KuruStoryModule/Types/KuruSerializeUtil.h"
#include "Runtime/KuruStoryClipDataInstance.h"
#include "Runtime/KuruStoryClipEditorExecutor.h"
#include "StoryNotifies/StoryNotifyBase.h"

UKuruStoryClipData::UKuruStoryClipData()
{
	Notifies.Emplace(FStoryNotifyBase());
	Notifies.Emplace(FStoryNotifyBase());
	Notifies.Emplace(FStoryNotifyBase());
}

void UKuruStoryClipData::Serialize(FArchive& Ar)
{
	if (Ar.IsSaving())
	{
		Ar<<KuruSerializeUtil::St;
		KuruSerializeUtil::WriteToSerialize(Ar,'0',Number,false);
		KuruSerializeUtil::WriteToSerialize(Ar,'1',Texture2D,false);
		KuruSerializeUtil::WriteToSerialize(Ar,'2',Teller,false);
		KuruSerializeUtil::WriteToSerialize(Ar,'3',SimpleContent,false);
		KuruSerializeUtil::WriteToSerialize(Ar,'4',EditableItems,false);
		KuruSerializeUtil::WriteToSerialize(Ar,'5',TotalLength,false);
	//	KuruSerializeUtil::WriteToSerialize(Ar,'6',Notifies,false);
		Ar<<KuruSerializeUtil::Et;
	
	}else if (Ar.IsLoading())
	{
		char pls = '?';
		Ar<<pls;
		check(pls=='<');

		while(true)
		{
			Ar<<pls;
			if (pls=='>')
			{
				break;
			}

			check(pls=='<');
			char mark='$';
			Ar<<mark;
			int ret=0;
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'0',Number,false);
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'1',Texture2D,false);
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'2',Teller,false);
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'3',SimpleContent,false);
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'4',EditableItems,false);
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'5',TotalLength,false);
		//	ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'6',Notifies,false);
			if (ret==0)
			{
				int stk = 1;
				//废弃数据
				while(true)
				{
					Ar<<pls;
					if (pls=='<')stk++;
					if(pls=='>')stk--;
					if(stk==0)break;
				}
			}else
			{
				Ar<<pls;
				check(pls=='>')
			}
		}
		
		
	}
}

int UKuruStoryClipData::GetTickResolution() const
{
	return FMath::RoundToInt32(TickResolution.AsDecimal()*GetFrameRate().AsDecimal());
}

FFrameNumber UKuruStoryClipData::GetScrubPosition() const
{
	if (UKuruStoryClipDataInstance* Instance = GetPreviewInstance())
	{
		return FFrameNumber(FMath::RoundToInt32(Instance->CurrentPlayingPosition*GetTickResolution()));
	}
	return FFrameNumber(0);
}

double UKuruStoryClipData::GetScrubTime() const
{
	if (UKuruStoryClipDataInstance* Instance = GetPreviewInstance())
	{
		return Instance->CurrentPlayingPosition;
	}
	return 0.;
}

void UKuruStoryClipData::SetScrubPosition(const FFrameTime& InputFrameNumber)
{
	if (UKuruStoryClipDataInstance* Instance = GetPreviewInstance())
	{
		double inFrame = InputFrameNumber.AsDecimal();
		double tickReso = GetTickResolution();
		Instance->CurrentPlayingPosition = inFrame/tickReso;
	}
}

TRange<FFrameNumber> UKuruStoryClipData::GetPlaybackRange() const
{
	const int32 Resolution = GetTickResolution();
	return TRange<FFrameNumber>(FFrameNumber(FMath::RoundToInt32(
		PlayRange.GetLowerBoundValue() * (double)Resolution)),
		FFrameNumber(FMath::RoundToInt32(PlayRange.GetUpperBoundValue() * (double)Resolution)));
}

UKuruStoryClipDataInstance* UKuruStoryClipData::GetPreviewInstance()const
{
	if (CurrentPreviewScene)
	{
		if (AKuruStoryClipEditorExecutor* Exe = CurrentPreviewScene->GetPreviewInstance())
		{
			return Exe->PlayingInstance;
		}
	}
	return nullptr;
}

void UKuruStoryClipData::ForEachRootTrack(TFunctionRef<void(FStoryTimelineTrack&)> InFunction)
{
	for (TSharedRef<FStoryTimelineTrack>& Track : RootTracks)
	{
		InFunction(Track.Get());
	}
}

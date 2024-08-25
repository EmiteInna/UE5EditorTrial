// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipData.h"

#include "KuruStoryModule/Types/KuruSerializeUtil.h"
#include "Preferences/PersonaOptions.h"

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

TRange<FFrameNumber> UKuruStoryClipData::GetPlaybackRange() const
{
	const int32 Resolution = GetTickResolution();
	return TRange<FFrameNumber>(FFrameNumber(FMath::RoundToInt32(
		PlayRange.GetLowerBoundValue() * (double)Resolution)),
		FFrameNumber(FMath::RoundToInt32(PlayRange.GetUpperBoundValue() * (double)Resolution)));
}

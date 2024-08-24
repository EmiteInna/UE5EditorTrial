// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipData.h"

#include "Preferences/PersonaOptions.h"

void UKuruStoryClipData::Serialize(FArchive& Ar)
{
	if (Ar.IsSaving())
	{
		int key=-1;
		Ar<<key;
		
		key=0;
		Ar<<key;
		Ar<<Number;
		
		key = 1;
		Ar<<key;
		Ar<<Texture2D;

		key = 2;
		Ar<<key;
		Ar<<Teller;

		key = 3;
		Ar<<key;
		Ar<<SimpleContent;

		key = 4;
		double lower=ViewRange.GetLowerBound().GetValue();
		double upper=ViewRange.GetUpperBound().GetValue();
		Ar<<key;
		Ar<<lower<<upper;

		key =5;
		Ar<<key;
		lower = PlayRange.GetLowerBound().GetValue();
		upper = PlayRange.GetUpperBound().GetValue();
		Ar<<lower<<upper;

		key =6;
		Ar<<key;
		lower = WorkingRange.GetLowerBound().GetValue();
		upper = WorkingRange.GetUpperBound().GetValue();
		Ar<<lower<<upper;
		
		key=7;
		Ar<<key;
		int EditableItemNum = EditableItems.Num();
		Ar<<EditableItemNum;
		for(int i=0;i<EditableItemNum;i++)
		{
			double val = EditableItems[i];
			Ar<<val;
		}
		
		key = -1;
		Ar<<key;
	
	}else if (Ar.IsLoading())
	{
		int key=-1;
		Ar<<key;
		float placeholder[10];
		
		for (int i=0;i<=114514;i++)
		{
			Ar<<key;
			if (key==-1)
			{
				break;
			}
			switch (key)
			{
			case 0:
				Ar<<Number;
				break;
			case 1:
				Ar<<Texture2D;
				break;
			case 2:
				Ar <<Teller;
				break;
			case 3:
				Ar<<SimpleContent;
				break;
			case 4:
				Ar<<placeholder[0]<<placeholder[1];
				ViewRange = FAnimatedRange(placeholder[0],placeholder[1]);
				break;
			case 5:
				Ar<<placeholder[0]<<placeholder[1];
				PlayRange = FAnimatedRange(placeholder[0],placeholder[1]);
				break;
			case 6:
				Ar<<placeholder[0]<<placeholder[1];
				WorkingRange = FAnimatedRange(placeholder[0],placeholder[1]);
				break;
			case 7:
				int num;
				Ar<<num;
				for(int idx=0;idx<num;idx++)
				{
					Ar<<placeholder[0];
					EditableItems.Emplace(placeholder[0]);
				}
				break;
			}
		}
	}
}

int UKuruStoryClipData::GetTickResolution() const
{
	return FMath::RoundToInt32(GetFrameRate().AsDecimal());
}

TRange<FFrameNumber> UKuruStoryClipData::GetPlaybackRange() const
{
	const int32 Resolution = GetTickResolution();
	return TRange<FFrameNumber>(FFrameNumber(FMath::RoundToInt32(
		PlayRange.GetLowerBoundValue() * (double)Resolution)),
		FFrameNumber(FMath::RoundToInt32(PlayRange.GetUpperBoundValue() * (double)Resolution)));
}

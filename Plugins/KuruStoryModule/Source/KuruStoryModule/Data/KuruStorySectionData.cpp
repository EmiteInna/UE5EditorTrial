// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStorySectionData.h"

#include "KuruStoryClipData.h"

void UKuruStorySectionData::Serialize(FArchive& Ar)
{
	if (Ar.IsSaving())
	{
		int key=-1;
		
		key=0;
		Ar<<key;
		Ar<<Title;
		
		key = 1;
		Ar<<key;
		int ClipDataNum = ClipDatas.Num();
		Ar<<ClipDataNum;
		for(int i=0;i<ClipDataNum;i++)
		{
			ClipDatas[i]->Serialize(Ar);
		}
	}else if (Ar.IsLoading())
	{
		for (int i=0;i<=1;i++)
		{
			int key=-1;
			Ar<<key;
			switch (key)
			{
			case 0:
				Ar<<Title;
				break;
			case 1:
				int ClipDataNum = -1;
				Ar<<ClipDataNum;
				ClipDatas.Empty();
				for (int j=0;j<ClipDataNum;j++)
				{
					UKuruStoryClipData* NewObj = NewObject<UKuruStoryClipData>();
					NewObj->Serialize(Ar);
					ClipDatas.Emplace(NewObj);
				}
				break;
			}
		}
	}
}

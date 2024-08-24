// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStorySectionData.h"

#include "KuruStoryClipData.h"
#include "KuruStoryModule/Types/KuruSerializeUtil.h"

void UKuruStorySectionData::Serialize(FArchive& Ar)
{
	if (Ar.IsSaving())
	{
		Ar<<KuruSerializeUtil::St;
		KuruSerializeUtil::WriteToSerialize(Ar,'0',Title,false);
		KuruSerializeUtil::WriteToSerialize(Ar,'1',ClipDatas,true);

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
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'0',Title,false);
			ret|=KuruSerializeUtil::ReadFromSerial(Ar,mark,'1',ClipDatas,true);

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

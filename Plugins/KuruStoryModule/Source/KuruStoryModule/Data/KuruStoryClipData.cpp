// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipData.h"

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

		key = -1;
		Ar<<key;
	
	}else if (Ar.IsLoading())
	{
		int key=-1;
		Ar<<key;
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
			}
		}
	}
}

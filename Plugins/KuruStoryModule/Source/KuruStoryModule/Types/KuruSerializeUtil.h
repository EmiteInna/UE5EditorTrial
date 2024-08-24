#pragma once
#include "KuruStoryModule/Data/KuruStoryClipData.h"


class KuruSerializeUtil
{
public:
	inline static char St = '<';
	inline static char Et = '>';
	template<typename T>
	static int ReadFromSerial(FArchive& Ar,char InputMark, char Mark, T& Content, bool bSerializeFunc)
	{
		if (InputMark == Mark)
		{
			Ar<<Content;
			return 0;
		}
		return -1;
	}
	
	template<typename T>
	static int ReadFromSerial(FArchive& Ar,char InputMark, char Mark, T* Content, bool bSerializeFunc)
	{
		if (InputMark == Mark)
		{
			if (!bSerializeFunc)
			{
				Ar<<Content;
			}else
			{
				Content = NewObject<T>();
				Content->Serialize(Ar);
			}
			return 0;
		}
		return -1;
	}

	template<typename T>
	static int ReadFromSerial(FArchive& Ar,char InputMark, char Mark, TArray<T>& Content, bool bSerializeFunc)
	{
		if (InputMark == Mark)
		{
			Content.Empty();
			int ArrCnt;
			Ar<<ArrCnt;
			for(int i=0;i<ArrCnt;i++)
			{
				T c;
				Ar<<c;
				Content.Emplace(c);
			}
			return 0;
		}
		return -1;
	}

	template<typename T>
	static int ReadFromSerial(FArchive& Ar,char InputMark, char Mark, TArray<T*>& Content, bool bSerializeFunc)
	{
		if (InputMark == Mark)
		{
			Content.Empty();
			int ArrCnt;
			Ar<<ArrCnt;
			for(int i=0;i<ArrCnt;i++)
			{
				T* c = NewObject<T>();
				if(!bSerializeFunc)
				{
					Ar<<c;
					Content.Emplace(c);
				}else
				{
					c->Serialize(Ar);
					Content.Emplace(c);
				}
			}
			return 0;
		}
		return -1;
	}

	template <typename T>
	static void WriteToSerialize(FArchive& Ar, char Mark, T Val, bool bSerializeFunc)
	{
		Ar<<St;
		Ar<<Val;
		Ar<<Et;
	}
	template <typename T>
	static void WriteToSerialize(FArchive& Ar, char Mark, TArray<T> Val, bool bSerializeFunc)
	{
		Ar<<St;
		int num = Val.Num();
		Ar<<num;
		for(int i=0;i<num;i++)
		{
			Ar<<Val[i];
		}
		Ar<<Et;
	}
	template <typename T>
	static void WriteToSerialize(FArchive& Ar, char Mark, T* Val, bool bSerializeFunc)
	{
		Ar<<St;
		if(bSerializeFunc)
		{
			Val->Serialize(Ar);
		}
		else
		{
			Ar<<Val;
		}
	
		Ar<<Et;
	}
	template <typename T>
	static void WriteToSerialize(FArchive& Ar, char Mark, TArray<T*> Val, bool bSerializeFunc)
	{
		Ar<<St;
		int num = Val.Num();
		Ar<<num;
		for(int i=0;i<num;i++)
		{
			if(bSerializeFunc)
			{
				Val[i]->Serialize(Ar);
			}
			else
			{
				Ar<<Val[i];
			}
		}
		Ar<<Et;
	}
};

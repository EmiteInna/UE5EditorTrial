#pragma once


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
			return 1;
		}
		return 0;
	}
	
	template<typename T>
	static int ReadFromSerial(FArchive& Ar,char InputMark, char Mark, T*& Content, bool bSerializeFunc)
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
			return 1;
		}
		return 0;
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
			return 1;
		}
		return 0;
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
			return 1;
		}
		return 0;
	}

	template <typename T>
	static void WriteToSerialize(FArchive& Ar, char Mark, T Val, bool bSerializeFunc)
	{
		Ar<<St;
		Ar<<Mark;
		Ar<<Val;
		Ar<<Et;
	}
	template <typename T>
	static void WriteToSerialize(FArchive& Ar, char Mark, TArray<T> Val, bool bSerializeFunc)
	{
		Ar<<St;
		Ar<<Mark;
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
		Ar<<Mark;
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
		Ar<<Mark;
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

// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryRichText.h"

#include "Components/RichTextBlock.h"


void UKuruStoryRichText::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bTyping)
	{
		CurrentTickTime += InDeltaTime;

		if (CurrentTickTime >= TotalTime)
		{
			FinishTyping(FText::FromString(TargetText),true);
			return;
		}
		
		const int WordNeed = FMath::RoundToFloat(CurrentTickTime/(TickSpeedPerWord+0.00001f));
		FString NeedText = GetRichTextWithFirstNWords(TargetText, WordNeed);

		RichText->SetText(FText::FromString(NeedText));
	}
}

void UKuruStoryRichText::SetContentAndTypeDuration(FText& InText, float InTypeDuration)
{
	//根据Duration算出速度
	CachedLastText = InText.ToString();
	TargetText = CachedLastText;
	const int Num = GetRichTextWordsNum(TargetText);
	TickSpeedPerWord = InTypeDuration/Num;
}

void UKuruStoryRichText::SetContentAndTypeSpeed(FText& InText, float InTypeSpeed)
{
	CachedLastText = InText.ToString();
	TargetText = CachedLastText;
	TickSpeedPerWord = InTypeSpeed;
}

void UKuruStoryRichText::StartToTypewrite()
{
	bTyping = true;
	//因为计算和StartToType不一定是同时进行，所以为了保底还是再算一遍，实在担心性能问题你不会缓存吗
	WordCnt = GetRichTextWordsNum(TargetText);
	TotalTime = TickSpeedPerWord * WordCnt;
	CurrentTickTime = 0;
}

void UKuruStoryRichText::FinishTyping(const FText& InText, bool bUpdateText)
{
	bTyping = false;
	
	if (bUpdateText)
	{
		RichText->SetText(InText);
	}else
	{
		RichText->SetText(FText::FromString(TargetText));
	}
}

int UKuruStoryRichText::GetRichTextWordsNum(FString& OriginalText)
{
	int Ret = 0;
	bool bInQuot = false;
	for (int i = 0;i<OriginalText.Len();i++)
	{
		const auto C = OriginalText[i];
		if (C ==  TEXT('<'))
		{
			bInQuot = true;
		}else if (C == TEXT('>'))
		{
			bInQuot = false;
		}else
		{
			if (!bInQuot)
			{
				Ret++;
			}
		}
	}
	return Ret;
}

FString UKuruStoryRichText::GetRichTextWithFirstNWords(FString& OriginalText, int Num)
{

	if (Num == 0)
	{
		return TEXT("");
	}
	
	bool bHasReached = false;
	int CurrentWordCnt = 0;
	bool bInQuot = false;
	int MaxStackDepth = 0;
	//不会吧，不会这算法也看不懂吧？
	FString Ret = "";

	const int Len = OriginalText.Len();
	TArray<int> StackDepth;
	TArray<bool> IsBackQuote;

	
	for (int i = 0; i<Len ;i++)
	{
		StackDepth.Emplace(0);
		IsBackQuote.Emplace(false);
	}

	int CurrentStackDepth = 0;
	for (int i = 0; i<Len;i++)
	{
		const auto C = OriginalText[i];
		if (C == TEXT('>'))
		{
			bool bIsClose = false;
			int last = i;
			int first = last;
			for (int j = i - 1; j>= 0 ; j--)
			{
				//找到了一个>，往前找<，并通过有没有/来判断是开是闭
				//是开则StackDepth++，否则--，括号的StackDepth不受影响
				//这个的复杂度是2N，懂的都懂
				const auto D = OriginalText[j];
				if (D == TEXT('/'))
				{
					bIsClose = true;
				}
				if (D == TEXT('<'))
				{
					first = j;
					break;
				}
			}
			
			if (bIsClose)
			{
				CurrentStackDepth--;
			}
			
			for (int j = first; j <= last; j++)
			{
				StackDepth[j] = CurrentStackDepth;
				if (bIsClose)
				{
					IsBackQuote[j] = true;
				}
			}
			
			if (!bIsClose)
			{
				CurrentStackDepth++;
			}
		}else
		{
			StackDepth[i] = CurrentStackDepth;
		}
	}

	
	bHasReached = false;
	for (int i =0;i<Len;i++)
	{
		
		const auto C = OriginalText[i];
		if (C ==  TEXT('<'))
		{
			bInQuot = true;
			
			if (bHasReached && StackDepth[i] == MaxStackDepth - 1 && IsBackQuote[i])
			{
				// 到了之后不再取前半边和普通文字，而是找匹配的后半边，匹配逻辑是当前最大栈深-1，找到之后最大栈深-1
				for (int j = i;j<Len;j++)
				{
					if (IsBackQuote[j] == false)
					{
						i = j - 1;
						MaxStackDepth--;
						break;
					}
					Ret+=OriginalText[j];
				}
			}
		}else if (C == TEXT('>'))
		{
			bInQuot = false;
		}else
		{
			if (!bInQuot)
			{
				CurrentWordCnt++;
			}
		}

		if (!bHasReached)
		{
			Ret += C;
			if (CurrentWordCnt == Num)
			{
				bHasReached = true;
				MaxStackDepth = StackDepth[i];
			}
		}
		
	}
//	UE_LOG(LogInit,Warning,TEXT("Origin is : %s, %d, Result: %s"), *OriginalText, Num, *Ret)
	return Ret;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "FrontGamePanelWidget.h"

#include "KuruStoryImage.h"
#include "KuruStoryRichText.h"
#include "Components/Image.h"
#include "Components/RichTextBlock.h"

void UFrontGamePanelWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Hide();
}

void UFrontGamePanelWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (CurrentState != TargetState)
	{
		TickStateTransition(InDeltaTime);
	}
}


void UFrontGamePanelWidget::TickStateTransition(float DeltaTime)
{

	if (CurrentState != E_Transitioning)
	{
		return;
	}
	
	CurrentTransitionTime += DeltaTime;
	if (CurrentTransitionTime >= TransitionTotalTime)
	{
		ToNewStateInstant(TargetState);
		return;
	}

	const float Alpha = CurrentTransitionTime / TransitionTotalTime;
	
	if (FromState == E_ShowBlank)
	{
		if (TargetState == E_ShowOnlyContent)
		{
			// 白板切文本，这里可以设置文本的透明度
			ContentText->SetRenderOpacity(Alpha);
		}else if (TargetState == E_ShowAll)
		{
			// 白板切All，三个透明度
			ContentText->SetRenderOpacity(Alpha);
			HeadImage->SetRenderOpacity(Alpha);
			SpeakerText->SetRenderOpacity(Alpha);
		}
	}else if (FromState == E_ShowOnlyContent)
	{
		if (TargetState == E_ShowBlank)
		{
			// 文本切白板，这里可以设置文本的透明度
			ContentText->SetRenderOpacity(1-Alpha);
		}else if (TargetState == E_ShowAll)
		{
			// 文本切All，两个透明度
			HeadImage->SetRenderOpacity(Alpha);
			SpeakerText->SetRenderOpacity(Alpha);
		}
	}else if(FromState == E_ShowAll)
	{
		if (TargetState == E_ShowBlank)
		{
			// All切白板，三个的透明度
			ContentText->SetRenderOpacity(1-Alpha);
			HeadImage->SetRenderOpacity(1-Alpha);
			SpeakerText->SetRenderOpacity(1-Alpha);
		}else if (TargetState == E_ShowAll)
		{
			// All切文本，两个透明度
			HeadImage->SetRenderOpacity(1-Alpha);
			SpeakerText->SetRenderOpacity(1-Alpha);
		}
	}
}

void UFrontGamePanelWidget::ToNewState(EKuruFrontGamePanelState InTargetState, float InTransitionTime)
{
	//本身就在Transition状态就不允许跳转了
	if (CurrentState == E_Transitioning)
	{
		return;
	}
	
	//如果同样的目标又做了一次，直接跳转
	if (InTargetState == TargetState)
	{
		ToNewStateInstant(InTargetState);
		return;
	}

	TargetState = InTargetState;
	FromState = CurrentState;
	CurrentState = E_Transitioning;

	TransitionTotalTime = InTransitionTime;
	CurrentTransitionTime = 0;

	HeadImage->SetAutoBlendLocked(true);
	SpeakerText->SetAutoBlendLocked(true);
	ContentText->SetAutoBlendLocked(true);
}

void UFrontGamePanelWidget::ToNewStateInstant(EKuruFrontGamePanelState InTargetState)
{
	CurrentState = InTargetState;
	TargetState = CurrentState;

	HeadImage->SetAutoBlendLocked(false);
	SpeakerText->SetAutoBlendLocked(false);
	ContentText->SetAutoBlendLocked(false);
	
	switch (CurrentState)
	{
	case E_ShowBlank:
		HeadImage->Hide();
		SpeakerText->Hide();
		ContentText->Hide();
		break;
	case E_ShowOnlyContent:
		HeadImage->Hide();
		SpeakerText->Hide();
		ContentText->Show();
		break;
	case E_ShowAll:
		HeadImage->Show();
		SpeakerText->Show();
		ContentText->Show();
		break;
	case E_Transitioning:
		UE_LOG(LogInit,Error,TEXT("不是哥们，你想干嘛(不要用ToNewState对过渡状态进行调用)"))
		break;
	default:
		break;
	}
}

void UFrontGamePanelWidget::SetImagePic(UTexture2D* InImage)
{
	HeadImage->Image->SetBrushFromTexture(InImage);
}

void UFrontGamePanelWidget::SetSpeaker(FText& InText)
{
	FString Text = InText.ToString();
	Text  = TEXT("<Speaker>")+Text+TEXT("</>");
	SpeakerText->RichText->SetText(FText::FromString(Text));	
}

void UFrontGamePanelWidget::SetContentAndTypeDuration(FText& InText, float InTypeDuration, bool bIsDialog)
{
	FString Text = InText.ToString();
	
	if (bIsDialog)
	{
		Text  = TEXT("<MainContent>「")+Text+TEXT("」</>");
	}else
	{
		Text  = TEXT("<MainContent>")+Text+TEXT("</>");
	}
	
	FText PassText = FText::FromString(Text);
	ContentText->SetContentAndTypeDuration(PassText,InTypeDuration);
}

void UFrontGamePanelWidget::SetContentAndTypeSpeed(FText& InText, float InTypeSpeed, bool bIsDialog)
{
	FString Text = InText.ToString();
	
	if (bIsDialog)
	{
		Text  = TEXT("<MainContent>「")+Text+TEXT("」</>");
	}else
	{
		Text  = TEXT("<MainContent>")+Text+TEXT("</>");
	}
	
	FText PassText = FText::FromString(Text);
	ContentText->SetContentAndTypeSpeed(PassText,InTypeSpeed);
}

void UFrontGamePanelWidget::StartToTypewrite()
{
	ContentText->StartToTypewrite();
}

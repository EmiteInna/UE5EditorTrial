#include "SKuruTimelineControlPanel.h"

#include "EditorWidgetsModule.h"
#include "KuruTimeSliderController.h"
#include "SKuruTimelineContainer.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "KuruStoryModule/Data/Runtime/KuruStoryClipDataInstance.h"

void SKuruTimelineControlPanel::Construct(const FArguments& InArgs, TSharedPtr<FKuruTimeSliderController> InController)
{
	Controller = InController;

	FEditorWidgetsModule& EditorWidgetsModule = FModuleManager::LoadModuleChecked<FEditorWidgetsModule>("EditorWidgets");
	
	FTransportControlArgs TransportControlArgs;
	TransportControlArgs.OnForwardPlay = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Forward);
	TransportControlArgs.OnRecord = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Record);
	TransportControlArgs.OnBackwardPlay = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Backward);
	TransportControlArgs.OnForwardStep = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Forward_Step);
	TransportControlArgs.OnBackwardStep = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Backward_Step);
	TransportControlArgs.OnForwardEnd = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Forward_End);
	TransportControlArgs.OnBackwardEnd = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_Backward_End);
	TransportControlArgs.OnToggleLooping = FOnClicked::CreateSP(this, &SKuruTimelineControlPanel::OnClick_ToggleLoop);
	TransportControlArgs.OnGetLooping = FOnGetLooping::CreateSP(this, &SKuruTimelineControlPanel::IsLoopStatusOn);
	TransportControlArgs.OnGetPlaybackMode = FOnGetPlaybackMode::CreateSP(this, &SKuruTimelineControlPanel::GetPlaybackMode);
	TransportControlArgs.OnGetRecording = FOnGetRecording::CreateSP(this, &SKuruTimelineControlPanel::IsRecording);

	ChildSlot
	[
		EditorWidgetsModule.CreateTransportControl(TransportControlArgs)
	];
	
}

UKuruStoryClipDataInstance* SKuruTimelineControlPanel::GetEditingInstance() const
{
	if (Controller)
	{
		if(SKuruTimelineContainer* Container = Controller->WeakTimeline.Pin().Get())
		{
			return Container->GetPreviewInstance();
		}
	}
	return nullptr;
}

FReply SKuruTimelineControlPanel::OnClick_Forward_Step()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->SetIsPlaying(false);
		GetEditingInstance()->SetIsReversed(false);
		GetEditingInstance()->TickPlaying(GetEditingInstance()->BaseData->GetFrameRate().AsDecimal());
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Forward_End()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->SetIsPlaying(false);
		GetEditingInstance()->CurrentPlayingPosition = GetEditingInstance()->BaseData->TotalLength;
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Backward_Step()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->SetIsPlaying(false);
		GetEditingInstance()->SetIsReversed(true);
		GetEditingInstance()->TickPlaying(1./GetEditingInstance()->BaseData->GetFrameRate().AsDecimal());
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Backward_End()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->SetIsPlaying(false);
		GetEditingInstance()->CurrentPlayingPosition = 0;
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Forward()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->bIsPlaying ^= 1;
		GetEditingInstance()->SetIsReversed(false);
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Backward()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->bIsPlaying ^= 1;
		GetEditingInstance()->SetIsReversed(true);
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_ToggleLoop()
{
	if (GetEditingInstance())
	{
		GetEditingInstance()->bIsLooped ^= 1;
	}
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Record()
{
	return FReply::Handled();
}

bool SKuruTimelineControlPanel::IsLoopStatusOn() const
{
	if (GetEditingInstance())
	{
		return GetEditingInstance()->bIsLooped;
	}
	return false;
}

EPlaybackMode::Type SKuruTimelineControlPanel::GetPlaybackMode() const
{
	if (GetEditingInstance())
	{
		if (GetEditingInstance()->bIsPlaying)
		{
			return GetEditingInstance()->bIsReversed?EPlaybackMode::PlayingReverse:EPlaybackMode::PlayingForward;
		}
		return EPlaybackMode::Stopped;
	}
	return EPlaybackMode::Stopped;
}

bool SKuruTimelineControlPanel::IsRecording() const
{
	return false;
}

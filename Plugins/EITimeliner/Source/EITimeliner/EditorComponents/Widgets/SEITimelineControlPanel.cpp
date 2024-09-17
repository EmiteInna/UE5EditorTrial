#include "SEITimelineControlPanel.h"

#include "EditorWidgetsModule.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/DataInterface/EITimelineEditingModel.h"

void SEITimelineControlPanel::Construct(const FArguments& InArgs,
                                        TSharedPtr<FEITimelinerContext> InContext)
{
	Context = InContext;

	FEditorWidgetsModule& EditorWidgetsModule = FModuleManager::LoadModuleChecked<FEditorWidgetsModule>("EditorWidgets");
	
	FTransportControlArgs TransportControlArgs;
	TransportControlArgs.OnForwardPlay = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Forward);
	TransportControlArgs.OnRecord = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Record);
	TransportControlArgs.OnBackwardPlay = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Backward);
	TransportControlArgs.OnForwardStep = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Forward_Step);
	TransportControlArgs.OnBackwardStep = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Backward_Step);
	TransportControlArgs.OnForwardEnd = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Forward_End);
	TransportControlArgs.OnBackwardEnd = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_Backward_End);
	TransportControlArgs.OnToggleLooping = FOnClicked::CreateSP(this, &SEITimelineControlPanel::OnClick_ToggleLoop);
	TransportControlArgs.OnGetLooping = FOnGetLooping::CreateSP(this, &SEITimelineControlPanel::IsLoopStatusOn);
	TransportControlArgs.OnGetPlaybackMode = FOnGetPlaybackMode::CreateSP(this, &SEITimelineControlPanel::GetPlaybackMode);
	TransportControlArgs.OnGetRecording = FOnGetRecording::CreateSP(this, &SEITimelineControlPanel::IsRecording);

	ChildSlot
	[
		EditorWidgetsModule.CreateTransportControl(TransportControlArgs)
	];
	
}

TWeakPtr<FEITimelineEditingModel> SEITimelineControlPanel::GetEditingInstance() const
{
	if (Context.IsValid())
	{
		return Context.Pin()->EditingModel;
	}

	return nullptr;
}

FReply SEITimelineControlPanel::OnClick_Forward_Step()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->SetIsPlaying(false);
		GetEditingInstance().Pin()->SetIsReversed(false);
		GetEditingInstance().Pin()->TickPlaying(GetEditingInstance().Pin()->
			GetFrameRate().AsDecimal());
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_Forward_End()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->SetIsPlaying(false);
		GetEditingInstance().Pin()->CurrentPlayingPosition = GetEditingInstance().Pin()->GetTotalLength();
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_Backward_Step()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->SetIsPlaying(false);
		GetEditingInstance().Pin()->SetIsReversed(true);
		GetEditingInstance().Pin()->TickPlaying(1./GetEditingInstance().Pin()->GetFrameRate().AsDecimal());
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_Backward_End()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->SetIsPlaying(false);
		GetEditingInstance().Pin()->CurrentPlayingPosition = 0;
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_Forward()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->bIsPlaying ^= 1;
		GetEditingInstance().Pin()->SetIsReversed(false);
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_Backward()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->bIsPlaying ^= 1;
		GetEditingInstance().Pin()->SetIsReversed(true);
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_ToggleLoop()
{
	if (GetEditingInstance().IsValid())
	{
		GetEditingInstance().Pin()->bIsLooped ^= 1;
	}
	return FReply::Handled();
}

FReply SEITimelineControlPanel::OnClick_Record()
{
	return FReply::Handled();
}

bool SEITimelineControlPanel::IsLoopStatusOn() const
{
	if (GetEditingInstance().IsValid())
	{
		return GetEditingInstance().Pin()->bIsLooped;
	}
	return false;
}

EPlaybackMode::Type SEITimelineControlPanel::GetPlaybackMode() const
{
	if (GetEditingInstance().IsValid())
	{
		if (GetEditingInstance().Pin()->bIsPlaying)
		{
			return GetEditingInstance().Pin()->bIsReversed?EPlaybackMode::PlayingReverse:EPlaybackMode::PlayingForward;
		}
		return EPlaybackMode::Stopped;
	}
	return EPlaybackMode::Stopped;
}

bool SEITimelineControlPanel::IsRecording() const
{
	return false;
}

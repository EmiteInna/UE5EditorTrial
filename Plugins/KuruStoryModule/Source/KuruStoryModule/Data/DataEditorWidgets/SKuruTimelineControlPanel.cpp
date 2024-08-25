#include "SKuruTimelineControlPanel.h"

#include "EditorWidgetsModule.h"

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

FReply SKuruTimelineControlPanel::OnClick_Forward_Step()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Forward_End()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Backward_Step()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Backward_End()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Forward()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Backward()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_ToggleLoop()
{
	return FReply::Handled();
}

FReply SKuruTimelineControlPanel::OnClick_Record()
{
	return FReply::Handled();
}

bool SKuruTimelineControlPanel::IsLoopStatusOn() const
{
	return false;
}

EPlaybackMode::Type SKuruTimelineControlPanel::GetPlaybackMode() const
{
	return EPlaybackMode::Stopped;
}

bool SKuruTimelineControlPanel::IsRecording() const
{
	return false;
}

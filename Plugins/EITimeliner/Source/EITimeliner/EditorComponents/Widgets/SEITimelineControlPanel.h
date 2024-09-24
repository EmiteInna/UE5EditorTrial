#pragma once
#include "ITransportControl.h"

class FEITimelinerContext;
class FEITimelineEditingModel;
class FEITimeSliderController;

class  EITIMELINER_API SEITimelineControlPanel : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEITimelineControlPanel){}
	
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,
		TSharedPtr<FEITimelinerContext> InContext);



	TWeakPtr<FEITimelinerContext> Context;

	TWeakPtr<FEITimelineEditingModel> GetEditingInstance()const;

	FReply OnClick_Forward_Step();

	FReply OnClick_Forward_End();

	FReply OnClick_Backward_Step();

	FReply OnClick_Backward_End();

	FReply OnClick_Forward();

	FReply OnClick_Backward();

	FReply OnClick_ToggleLoop();

	FReply OnClick_Record();

	bool IsLoopStatusOn() const;

	EPlaybackMode::Type GetPlaybackMode() const;

	bool IsRecording() const;

	~SEITimelineControlPanel();
};

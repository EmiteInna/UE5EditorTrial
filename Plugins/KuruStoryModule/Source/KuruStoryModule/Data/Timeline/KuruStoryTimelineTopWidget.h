#pragma once
#include "EITimeliner/ControllerInterface/EITimelinerTopWidgetBase.h"

class FKuruStoryTimelinerCore;
class FKuruStorySectionData_EditorTool;

class SKuruStoryTimelineTopWidget:public SEITimelinerTopWidgetBase
{
public:
	SLATE_BEGIN_ARGS(SKuruStoryTimelineTopWidget){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,
	const TSharedPtr<FKuruStorySectionData_EditorTool>& InEditorToolkit,
	const TSharedRef<SDockTab>& InParentDockTab,
	const TSharedRef<FKuruStoryTimelinerCore>& InCore,
		UObject* EditingObject);
};



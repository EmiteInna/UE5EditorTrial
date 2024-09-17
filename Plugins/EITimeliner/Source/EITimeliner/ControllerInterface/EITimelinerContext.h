#pragma once

class FEITimelinerCoreBase;
class FEIPreviewScene;
class FEITimeSliderController;
class FEITimelineEditingModel;
/*
 * 编辑器语境下的临时变量，负责保有一份上下文，原则上所有指针全是WeakPtr。
 * 上下文里命名尽量直观，不要起花里胡哨的命名。
 */
class EITIMELINER_API  FEITimelinerContext
{
public:
	TWeakPtr<FEITimelinerCoreBase> SpawnCore = nullptr;
	TWeakPtr<FAssetEditorToolkit> AssetEditorToolkit = nullptr;
	TWeakPtr<FEITimelineEditingModel> EditingModel = nullptr;
	TWeakPtr<FEITimeSliderController> TimeSliderController = nullptr;
	TWeakPtr<FEIPreviewScene> PreviewScene = nullptr;
};

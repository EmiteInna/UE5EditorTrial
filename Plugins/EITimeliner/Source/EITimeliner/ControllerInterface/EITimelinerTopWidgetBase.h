#pragma once

class FEITimelinerCoreBase;
class FEITimelineEditingModel;
class FEIPreviewScene;
class FEITimeSliderController;
class FEITimelinerContext;

class EITIMELINER_API SEITimelinerTopWidgetBase:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SEITimelinerTopWidgetBase){}
	SLATE_END_ARGS()

	static FName FirstTabName;
	static FName SecondTabName;
	static FName ThirdTabName;
	static FName FourthTabName;
	static FName FifthTabName;
	
	virtual void OnUnregisterTabs();

	void Construct(const FArguments& InArgs,
		const TSharedPtr<FAssetEditorToolkit>& InEditorToolkit,
		const TSharedRef<SDockTab>& InParentDockTab,
		const TSharedRef<FEITimelinerCoreBase> InCore,
		UObject* EditingObject);

	virtual TSharedRef<SDockTab> SpawnToolTab(const FSpawnTabArgs& Args);
	virtual TSharedRef<SDockTab> SpawnTimelineTab(const FSpawnTabArgs& Args);
	virtual TSharedRef<SDockTab> SpawnPreviewTab(const FSpawnTabArgs& Args);
	virtual TSharedRef<SDockTab> SpawnEventDetailTab(const FSpawnTabArgs& Args);
	virtual TSharedRef<SDockTab> SpawnDetailTab(const FSpawnTabArgs& Args);

	TSharedPtr<FEITimelinerCoreBase> SpawnCore;

	TSharedPtr<FEITimelinerContext> Context;

	//这个不能share，因为是外面传进来的而非自己创建的，多注意这种坑哦
	TWeakPtr<FAssetEditorToolkit> AssetEditorToolkit = nullptr;
	
	TSharedPtr<FEITimelineEditingModel> EditingModel = nullptr;
	TSharedPtr<FEITimeSliderController> TimeSliderController = nullptr;
	TSharedPtr<FEIPreviewScene> PreviewScene = nullptr;
	
	TSharedPtr<FTabManager> WidgetTabManager; 
};

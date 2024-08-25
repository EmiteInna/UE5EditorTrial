#pragma once

class FKuruStorySectionData_EditorTool;
class UKuruStoryClipData;
class SSectionClipRowWidget;

class SClipTimelineWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SClipTimelineWidget){}
		SLATE_ARGUMENT(UKuruStoryClipData*, EditingData)
		SLATE_ARGUMENT(SSectionClipRowWidget*,ParentWidget)
	SLATE_END_ARGS()
	
	static FName FirstTabName;
	static FName SecondTabName;
	static FName ThirdTabName;
	static FName FourthTabName;
	static FName FifthTabName;
	
	void OnUnregisterTabs();

	UKuruStoryClipData* mEditingData;
	SSectionClipRowWidget* mParentWidget;

	void Construct(const FArguments& InArgs,const TSharedPtr<FKuruStorySectionData_EditorTool>& InEditorToolkit);

	TSharedRef<SDockTab> SpawnToolTab(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnTimelineTab(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnPreviewTab(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnEventDetailTab(const FSpawnTabArgs& Args);
	TSharedRef<SDockTab> SpawnDetailTab(const FSpawnTabArgs& Args);

	TWeakPtr<FKuruStorySectionData_EditorTool> EditorTool;
};

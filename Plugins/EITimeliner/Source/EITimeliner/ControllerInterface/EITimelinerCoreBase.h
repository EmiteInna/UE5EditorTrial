#pragma once

class FEITimelineEditingModel;
struct FTimeSliderArgs;
class FEITimeSliderController;
class FEIViewportClient;
class SEITrackOutlinerItem;
class FEITimelineTrack;
class SEITrack;
class SEITimelineNode;
class SEITimelineSplitterOverlay;
class SEITimelineOverlay;
class SEITimelineControlPanel;
class SEITrackOutliner;
class SEITrackArea;
class FEITimelinerContext;
struct FEIEditorViewportRequireArgs;
class SEIEditorViewport;
class FEIPreviewScene;
class SEITimelineContainer;
/*
 * 用于生成的核心，用于灵活替换流程中的某个Widget，支持灵活替换。
 */
class EITIMELINER_API FEITimelinerCoreBase
{
public:
	virtual TSharedRef<SEITimelineContainer> CreateTimelineContainer(TWeakPtr<FEIPreviewScene> PreviewScene,
		const TSharedRef<FEITimelinerContext> Context);

	virtual TSharedRef<SEIEditorViewport> CreateEditorViewPort(const FEIEditorViewportRequireArgs& Args,
		const TSharedRef<FEITimelinerContext>& InContext);

	virtual TSharedRef<SEITrackArea> CreateTrackArea(const TSharedRef<FEITimelinerContext>& InContext);

	virtual TSharedRef<SEITrackOutliner> CreateTrackOutliner(SEITimelineContainer* Container);

	virtual TSharedRef<SEITrackOutlinerItem> CreateTrackOutlinerItem(SEITrackOutliner* OutLiner,
		TSharedRef<FEITimelineTrack> InTrack,
		const TSharedRef<STableViewBase>& OwnerTable);

	virtual TSharedRef<SEITimelineControlPanel> CreateTimelineControlPanel(SEITimelineContainer* Container);

	//Type里1是DrawTicklines，2是DrawSrubPosition，可自由扩展
	virtual TSharedRef<SEITimelineOverlay> CreateTimelineOverlay(SEITimelineContainer* Container,int Type);

	//由于这个不能和+直接兼容，暂不可用
	virtual TSharedRef<SEITimelineSplitterOverlay> CreateTimelineSplitterOverlay(SEITimelineContainer* Container);

	virtual TSharedRef<SEITimelineNode> CreateTimelineNode(const TSharedRef<FEITimelinerContext>& InContext, int trackIndex);

	virtual TSharedRef<SEITrack> CreateTrack(const TSharedRef<FEITimelineTrack> InTrack,
		const TSharedRef<SEITrackOutliner> InOutLiner, const TSharedRef<FEITimelinerContext>& InContext,int trackId);

	virtual TSharedPtr<FEIViewportClient> CreateViewportClient(SEIEditorViewport* Viewport);

	virtual TSharedPtr<FEITimeSliderController> CreateTimeSliderController(SEITimelineContainer* Container, FTimeSliderArgs& Args);

	//留用，基类中无效果
	virtual TSharedPtr<FEITimelineTrack> CreateTimelineTrack(){return  nullptr;};

	virtual TSharedRef<FEIPreviewScene> CreatePreviewScene();

	virtual TSharedPtr<FEITimelineEditingModel> CreateModel(UObject* Object,const TSharedRef<FEITimelinerContext>& Context);
};





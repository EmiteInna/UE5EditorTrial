#pragma once

class FKuruStorySectionData_EditorTool;

class FStoryClipViewportClient:public FEditorViewportClient, public TSharedFromThis<FStoryClipViewportClient>
{
public:
	//实现接口
	FStoryClipViewportClient(const TSharedRef<class FStoryClipPreviewScene>& InPreviewScene,
		const TSharedRef<class SStoryClipEditorViewport>& InViewport,const TSharedRef<FKuruStorySectionData_EditorTool>& InEditorToolkit);
	virtual ~FStoryClipViewportClient() override;

	virtual void Tick(float DeltaSeconds) override;
	virtual void Draw(FViewport* Viewport, FCanvas* Canvas) override;
	virtual void DrawCanvas(FViewport& InViewport, FSceneView& View, FCanvas& Canvas) override;
	virtual bool InputKey(const FInputKeyEventArgs& EventArgs) override;
	virtual bool InputAxis(FViewport* Viewport, FInputDeviceId InputDevice, FKey Key, float Delta, float DeltaTime, int32 NumSamples, bool bGamepad) override;
	virtual void TrackingStarted(const FInputEventState& InInputState, bool bIsDraggingWidget, bool bNudge) override;
	virtual void TrackingStopped() override;
	virtual FVector GetWidgetLocation() const override;
	virtual FMatrix GetWidgetCoordSystem() const override;
	virtual ECoordSystem GetWidgetCoordSystemSpace() const override;;
	virtual void SetViewMode(EViewModeIndex InViewModeIndex) override;
	virtual void SetViewportType(ELevelViewportType InViewportType) override;
	virtual void RotateViewportType() override;
	virtual bool CanCycleWidgetMode() const override;
	virtual void SetupViewForRendering(FSceneViewFamily& ViewFamily, FSceneView& View) override;
	virtual void HandleToggleShowFlag(FEngineShowFlags::EShowFlag EngineShowFlagIndex) override;
	virtual FMatrix CalcViewRotationMatrix(const FRotator& InViewRotation) const override;

	TSharedPtr<FStoryClipPreviewScene> PreviewScene;
	TWeakPtr<SStoryClipEditorViewport> EditorViewport;
	
};

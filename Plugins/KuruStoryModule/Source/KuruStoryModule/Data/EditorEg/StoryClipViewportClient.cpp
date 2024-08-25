#include "StoryClipViewportClient.h"

#include "SStoryClipEditorViewport.h"
#include "StoryClipPreviewScene.h"
#include "KuruStoryModule/Data/KuruStoryClipData_EditorTool.h"
#include "KuruStoryModule/Data/KuruStorySectionData_EditorTool.h"

FStoryClipViewportClient::FStoryClipViewportClient(const TSharedRef<FStoryClipPreviewScene>& InPreviewScene,
                                                   const TSharedRef<SStoryClipEditorViewport>& InViewport,const TSharedRef<FKuruStorySectionData_EditorTool>& InEditorToolkit):
FEditorViewportClient(&InEditorToolkit->GetEditorModeManager(),&InPreviewScene.Get(),StaticCastSharedRef<SEditorViewport>(InViewport))
{
	PreviewScene = InPreviewScene;
	EditorViewport = InViewport;
}

FStoryClipViewportClient::~FStoryClipViewportClient()
{
}

void FStoryClipViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);
}

void FStoryClipViewportClient::Draw(FViewport* InViewport, FCanvas* Canvas)
{
	FEditorViewportClient::Draw(InViewport, Canvas);
}

void FStoryClipViewportClient::DrawCanvas(FViewport& InViewport, FSceneView& View, FCanvas& Canvas)
{
	FEditorViewportClient::DrawCanvas(InViewport, View, Canvas);
}

bool FStoryClipViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	return FEditorViewportClient::InputKey(EventArgs);
}

bool FStoryClipViewportClient::InputAxis(FViewport* InViewport, FInputDeviceId InputDevice, FKey Key, float Delta,
	float DeltaTime, int32 NumSamples, bool bGamepad)
{
	return FEditorViewportClient::InputAxis(InViewport, InputDevice, Key, Delta, DeltaTime, NumSamples, bGamepad);
}

void FStoryClipViewportClient::TrackingStarted(const FInputEventState& InInputState, bool bIsDraggingWidget,
	bool bNudge)
{
	FEditorViewportClient::TrackingStarted(InInputState, bIsDraggingWidget, bNudge);
}

void FStoryClipViewportClient::TrackingStopped()
{
	FEditorViewportClient::TrackingStopped();
}

FVector FStoryClipViewportClient::GetWidgetLocation() const
{
	return FEditorViewportClient::GetWidgetLocation();
}

FMatrix FStoryClipViewportClient::GetWidgetCoordSystem() const
{
	return FEditorViewportClient::GetWidgetCoordSystem();
}

ECoordSystem FStoryClipViewportClient::GetWidgetCoordSystemSpace() const
{
	return FEditorViewportClient::GetWidgetCoordSystemSpace();
}

void FStoryClipViewportClient::SetViewMode(EViewModeIndex InViewModeIndex)
{
	FEditorViewportClient::SetViewMode(InViewModeIndex);
}

void FStoryClipViewportClient::SetViewportType(ELevelViewportType InViewportType)
{
	FEditorViewportClient::SetViewportType(InViewportType);
}

void FStoryClipViewportClient::RotateViewportType()
{
	FEditorViewportClient::RotateViewportType();
}

bool FStoryClipViewportClient::CanCycleWidgetMode() const
{
	return FEditorViewportClient::CanCycleWidgetMode();
}

void FStoryClipViewportClient::SetupViewForRendering(FSceneViewFamily& ViewFamily, FSceneView& View)
{
	FEditorViewportClient::SetupViewForRendering(ViewFamily, View);
}

void FStoryClipViewportClient::HandleToggleShowFlag(FEngineShowFlags::EShowFlag EngineShowFlagIndex)
{
	FEditorViewportClient::HandleToggleShowFlag(EngineShowFlagIndex);
}

FMatrix FStoryClipViewportClient::CalcViewRotationMatrix(const FRotator& InViewRotation) const
{
	return FEditorViewportClient::CalcViewRotationMatrix(InViewRotation);
}

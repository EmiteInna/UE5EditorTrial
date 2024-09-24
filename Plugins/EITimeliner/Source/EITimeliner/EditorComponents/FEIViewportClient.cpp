#include "FEIViewportClient.h"
#include "FEIPreviewScene.h"
#include "Widgets/SEIEditorViewport.h"


FEIViewportClient::FEIViewportClient(const TSharedRef<class FEIPreviewScene>& InPreviewScene,
		const TSharedRef<SEIEditorViewport>& InViewport,
		const TSharedRef<FAssetEditorToolkit>& InEditorToolkit,
		const TSharedRef<FEITimelinerContext>& InContext):
FEditorViewportClient(&InEditorToolkit->GetEditorModeManager(),
	&InPreviewScene.Get(),
	StaticCastSharedRef<SEditorViewport>(InViewport))
{
	PreviewScene = InPreviewScene;
	EditorViewport = InViewport;
	Context = InContext;
}

FEIViewportClient::~FEIViewportClient()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] ViewportClient 被摧毁"))
}

void FEIViewportClient::Tick(float DeltaSeconds)
{
	FEditorViewportClient::Tick(DeltaSeconds);
}

void FEIViewportClient::Draw(FViewport* InViewport, FCanvas* Canvas)
{
	FEditorViewportClient::Draw(InViewport, Canvas);
}

void FEIViewportClient::DrawCanvas(FViewport& InViewport, FSceneView& View, FCanvas& Canvas)
{
	FEditorViewportClient::DrawCanvas(InViewport, View, Canvas);
}

bool FEIViewportClient::InputKey(const FInputKeyEventArgs& EventArgs)
{
	return FEditorViewportClient::InputKey(EventArgs);
}

bool FEIViewportClient::InputAxis(FViewport* InViewport, FInputDeviceId InputDevice, FKey Key, float Delta,
	float DeltaTime, int32 NumSamples, bool bGamepad)
{
	return FEditorViewportClient::InputAxis(InViewport, InputDevice, Key, Delta, DeltaTime, NumSamples, bGamepad);
}

void FEIViewportClient::TrackingStarted(const FInputEventState& InInputState, bool bIsDraggingWidget,
	bool bNudge)
{
	FEditorViewportClient::TrackingStarted(InInputState, bIsDraggingWidget, bNudge);
}

void FEIViewportClient::TrackingStopped()
{
	FEditorViewportClient::TrackingStopped();
}

FVector FEIViewportClient::GetWidgetLocation() const
{
	return FEditorViewportClient::GetWidgetLocation();
}

FMatrix FEIViewportClient::GetWidgetCoordSystem() const
{
	return FEditorViewportClient::GetWidgetCoordSystem();
}

ECoordSystem FEIViewportClient::GetWidgetCoordSystemSpace() const
{
	return FEditorViewportClient::GetWidgetCoordSystemSpace();
}

void FEIViewportClient::SetViewMode(EViewModeIndex InViewModeIndex)
{
	FEditorViewportClient::SetViewMode(InViewModeIndex);
}

void FEIViewportClient::SetViewportType(ELevelViewportType InViewportType)
{
	FEditorViewportClient::SetViewportType(InViewportType);
}

void FEIViewportClient::RotateViewportType()
{
	FEditorViewportClient::RotateViewportType();
}

bool FEIViewportClient::CanCycleWidgetMode() const
{
	return FEditorViewportClient::CanCycleWidgetMode();
}

void FEIViewportClient::SetupViewForRendering(FSceneViewFamily& ViewFamily, FSceneView& View)
{
	FEditorViewportClient::SetupViewForRendering(ViewFamily, View);
}

void FEIViewportClient::HandleToggleShowFlag(FEngineShowFlags::EShowFlag EngineShowFlagIndex)
{
	FEditorViewportClient::HandleToggleShowFlag(EngineShowFlagIndex);
}

FMatrix FEIViewportClient::CalcViewRotationMatrix(const FRotator& InViewRotation) const
{
	return FEditorViewportClient::CalcViewRotationMatrix(InViewRotation);
}

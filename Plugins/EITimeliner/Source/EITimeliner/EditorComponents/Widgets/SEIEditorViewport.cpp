#include "SEIEditorViewport.h"
#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"
#include "EITimeliner/EditorComponents/FEIPreviewScene.h"
#include "EITimeliner/EditorComponents/FEIViewportClient.h"

TSharedRef<FEditorViewportClient> SEIEditorViewport::MakeEditorViewportClient()
{
	ViewportClient =Context.Pin()->SpawnCore.Pin()->CreateViewportClient(this);

	return ViewportClient.ToSharedRef();
}

TSharedPtr<SWidget> SEIEditorViewport::MakeViewportToolbar()
{
	return SEditorViewport::MakeViewportToolbar();
}

void SEIEditorViewport::OnFocusViewportToSelection()
{
	SEditorViewport::OnFocusViewportToSelection();
}

void SEIEditorViewport::PopulateViewportOverlays(TSharedRef<SOverlay> Overlay)
{
	SEditorViewport::PopulateViewportOverlays(Overlay);
}

void SEIEditorViewport::Construct(const FArguments& InArgs,
                                  		const FEIEditorViewportRequireArgs& InRequiredArgs,
                                  		const TSharedRef<FEITimelinerContext>& InContext)
{
	EditorTool = InRequiredArgs.EditorToolkit;
	Context = InContext;

	SEditorViewport::Construct(
		SEditorViewport::FArguments()
		.IsEnabled(FSlateApplication::Get().GetNormalExecutionAttribute())
			.AddMetaData<FTagMetaData>(TEXT("StoryClip.Viewport"))
	);

	auto ScenePtr = Context.Pin()->PreviewScene.Pin();
	if (ScenePtr.IsValid())
	{
		UWorld* World = ScenePtr->GetWorld();
		if (World)
		{
			World->ChangeFeatureLevel(GWorld->GetFeatureLevel());
		}
	}
	
	
}

void SEIEditorViewport::PostUndo(bool bSuccess)
{
	FEditorUndoClient::PostUndo(bSuccess);
}

void SEIEditorViewport::PostRedo(bool bSuccess)
{
	FEditorUndoClient::PostRedo(bSuccess);
}

SEIEditorViewport::~SEIEditorViewport()
{
	UE_LOG(LogMemory,Display,TEXT("[Kuru编辑器内存] EditorViewport 被摧毁"))
}

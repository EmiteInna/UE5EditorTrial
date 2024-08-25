#include "SStoryClipEditorViewport.h"

#include "StoryClipPreviewScene.h"
#include "StoryClipViewportClient.h"

TSharedRef<FEditorViewportClient> SStoryClipEditorViewport::MakeEditorViewportClient()
{
	ViewportClient =MakeShareable(new FStoryClipViewportClient(PreviewScenePtr.Pin().ToSharedRef(),
		SharedThis(this),EditorTool.Pin().ToSharedRef()));

	return ViewportClient.ToSharedRef();
}

TSharedPtr<SWidget> SStoryClipEditorViewport::MakeViewportToolbar()
{
	return SEditorViewport::MakeViewportToolbar();
}

void SStoryClipEditorViewport::OnFocusViewportToSelection()
{
	SEditorViewport::OnFocusViewportToSelection();
}

void SStoryClipEditorViewport::PopulateViewportOverlays(TSharedRef<SOverlay> Overlay)
{
	SEditorViewport::PopulateViewportOverlays(Overlay);
}

void SStoryClipEditorViewport::Construct(const FArguments& InArgs,
                                         const FStoryClipEditorViewportRequireArgs& InRequiredArgs)
{
	PreviewScenePtr = InRequiredArgs.PreScene;
	EditorTool = InRequiredArgs.EditorToolkit;

	SEditorViewport::Construct(
		SEditorViewport::FArguments()
		.IsEnabled(FSlateApplication::Get().GetNormalExecutionAttribute())
			.AddMetaData<FTagMetaData>(TEXT("StoryClip.Viewport"))
	);

	auto ScenePtr = PreviewScenePtr.Pin();
	if (ScenePtr.IsValid())
	{
		UWorld* World = ScenePtr->GetWorld();
		if (World)
		{
			World->ChangeFeatureLevel(GWorld->GetFeatureLevel());
		}
	}
	
	
}

void SStoryClipEditorViewport::PostUndo(bool bSuccess)
{
	FEditorUndoClient::PostUndo(bSuccess);
}

void SStoryClipEditorViewport::PostRedo(bool bSuccess)
{
	FEditorUndoClient::PostRedo(bSuccess);
}

#pragma once

#include "SEditorViewport.h"

class FStoryClipViewportClient;
class FKuruStorySectionData_EditorTool;

struct FStoryClipEditorViewportRequireArgs
{
	TSharedRef<class FStoryClipPreviewScene> PreScene;
	TSharedRef<FKuruStorySectionData_EditorTool> EditorToolkit;
};

class SStoryClipEditorViewport : public SEditorViewport, public FEditorUndoClient
{
public:
	SLATE_BEGIN_ARGS(SStoryClipEditorViewport)
	{}
	
	SLATE_END_ARGS()

//实现接口
	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
	virtual TSharedPtr<SWidget> MakeViewportToolbar() override;
	virtual void OnFocusViewportToSelection() override;
	virtual void PopulateViewportOverlays(TSharedRef<SOverlay> Overlay) override;
	
	void Construct(const FArguments& InArgs, const FStoryClipEditorViewportRequireArgs& InRequiredArgs);
	virtual void PostUndo ( bool bSuccess )override;
	virtual void PostRedo( bool bSuccess )override;
	
	TWeakPtr<class FStoryClipPreviewScene> PreviewScenePtr;
	TSharedPtr<FStoryClipViewportClient> ViewportClient;
	TWeakPtr<class FKuruStorySectionData_EditorTool> EditorTool;
};

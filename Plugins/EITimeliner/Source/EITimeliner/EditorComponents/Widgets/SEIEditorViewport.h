#pragma once
#include "SEditorViewport.h"

class FEITimelinerContext;
class FEIPreviewScene;
class FEIViewportClient;

struct FEIEditorViewportRequireArgs
{
	TSharedRef<FEIPreviewScene> PreScene;
	TSharedRef<FAssetEditorToolkit> EditorToolkit;
};

class EITIMELINER_API SEIEditorViewport: public SEditorViewport, public FEditorUndoClient
{
public:
	SLATE_BEGIN_ARGS(SEIEditorViewport)
	{}
	
	SLATE_END_ARGS()

//实现接口
	virtual TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
	virtual TSharedPtr<SWidget> MakeViewportToolbar() override;
	virtual void OnFocusViewportToSelection() override;
	virtual void PopulateViewportOverlays(TSharedRef<SOverlay> Overlay) override;
	
	void Construct(const FArguments& InArgs,
		const FEIEditorViewportRequireArgs& InRequiredArgs,
		const TSharedRef<FEITimelinerContext>& Context);
	virtual void PostUndo ( bool bSuccess )override;
	virtual void PostRedo( bool bSuccess )override;
	
	TSharedPtr<FEIViewportClient> ViewportClient;
	TWeakPtr<FAssetEditorToolkit> EditorTool;

	TWeakPtr<FEITimelinerContext> Context;

	virtual ~SEIEditorViewport();
};

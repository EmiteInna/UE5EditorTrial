#include "KuruStoryTimelineTopWidget.h"

#include "EITimeliner/ControllerInterface/EITimelinerContext.h"
#include "EITimeliner/ControllerInterface/EITimelinerCoreBase.h"
#include "EITimeliner/EditorComponents/FEIPreviewScene.h"
#include "KuruSotryTimelinerCore.h"
#include "KuruStoryModule/Data/KuruStorySectionData_EditorTool.h"

void SKuruStoryTimelineTopWidget::Construct(const FArguments& InArgs,
                                            const TSharedPtr<FKuruStorySectionData_EditorTool>& InEditorToolkit,
                                            const TSharedRef<SDockTab>& InParentDockTab,
                                            const TSharedRef<FKuruStoryTimelinerCore>& InCore, UObject* EditingObject)
{
	SEITimelinerTopWidgetBase::FArguments Arg;
	SEITimelinerTopWidgetBase::Construct(Arg,InEditorToolkit,InParentDockTab,InCore,EditingObject);
	
	/*AssetEditorToolkit = InEditorToolkit;

	SpawnCore = InCore;
	
	EditingModel = SpawnCore->CreateModel(EditingObject);

	PreviewScene = SpawnCore->CreatePreviewScene();
	
	
	Context = MakeShareable(new FEITimelinerContext);
	Context->SpawnCore = InCore;
	Context->AssetEditorToolkit = AssetEditorToolkit;
	Context->EditingModel = EditingModel;
	Context->PreviewScene = PreviewScene;
	
	PreviewScene->CreatePreviewInstance(Context.ToSharedRef());*/
}

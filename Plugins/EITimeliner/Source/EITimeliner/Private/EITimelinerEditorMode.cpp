// Copyright Epic Games, Inc. All Rights Reserved.

#include "EITimelinerEditorMode.h"
#include "EITimelinerEditorModeToolkit.h"
#include "EdModeInteractiveToolsContext.h"
#include "InteractiveToolManager.h"
#include "EITimelinerEditorModeCommands.h"


//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
// AddYourTool Step 1 - include the header file for your Tools here
//////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////// 
#include "Tools/EITimelinerSimpleTool.h"
#include "Tools/EITimelinerInteractiveTool.h"

// step 2: register a ToolBuilder in FEITimelinerEditorMode::Enter() below


#define LOCTEXT_NAMESPACE "EITimelinerEditorMode"

const FEditorModeID UEITimelinerEditorMode::EM_EITimelinerEditorModeId = TEXT("EM_EITimelinerEditorMode");

FString UEITimelinerEditorMode::SimpleToolName = TEXT("EITimeliner_ActorInfoTool");
FString UEITimelinerEditorMode::InteractiveToolName = TEXT("EITimeliner_MeasureDistanceTool");


UEITimelinerEditorMode::UEITimelinerEditorMode()
{
	FModuleManager::Get().LoadModule("EditorStyle");

	// appearance and icon in the editing mode ribbon can be customized here
	Info = FEditorModeInfo(UEITimelinerEditorMode::EM_EITimelinerEditorModeId,
		LOCTEXT("ModeName", "EITimeliner"),
		FSlateIcon(),
		true);
}


UEITimelinerEditorMode::~UEITimelinerEditorMode()
{
}


void UEITimelinerEditorMode::ActorSelectionChangeNotify()
{
}

void UEITimelinerEditorMode::Enter()
{
	UEdMode::Enter();

	//////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////
	// AddYourTool Step 2 - register the ToolBuilders for your Tools here.
	// The string name you pass to the ToolManager is used to select/activate your ToolBuilder later.
	//////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////// 
	const FEITimelinerEditorModeCommands& SampleToolCommands = FEITimelinerEditorModeCommands::Get();

	RegisterTool(SampleToolCommands.SimpleTool, SimpleToolName, NewObject<UEITimelinerSimpleToolBuilder>(this));
	RegisterTool(SampleToolCommands.InteractiveTool, InteractiveToolName, NewObject<UEITimelinerInteractiveToolBuilder>(this));

	// active tool type is not relevant here, we just set to default
	GetToolManager()->SelectActiveToolType(EToolSide::Left, SimpleToolName);
}

void UEITimelinerEditorMode::CreateToolkit()
{
	Toolkit = MakeShareable(new FEITimelinerEditorModeToolkit);
}

TMap<FName, TArray<TSharedPtr<FUICommandInfo>>> UEITimelinerEditorMode::GetModeCommands() const
{
	return FEITimelinerEditorModeCommands::Get().GetCommands();
}

#undef LOCTEXT_NAMESPACE

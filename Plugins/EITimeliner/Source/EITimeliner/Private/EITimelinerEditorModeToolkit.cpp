// Copyright Epic Games, Inc. All Rights Reserved.

#include "EITimelinerEditorModeToolkit.h"
#include "EITimelinerEditorMode.h"
#include "Engine/Selection.h"

#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "IDetailsView.h"
#include "EditorModeManager.h"

#define LOCTEXT_NAMESPACE "EITimelinerEditorModeToolkit"

FEITimelinerEditorModeToolkit::FEITimelinerEditorModeToolkit()
{
}

void FEITimelinerEditorModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost, TWeakObjectPtr<UEdMode> InOwningMode)
{
	FModeToolkit::Init(InitToolkitHost, InOwningMode);
}

void FEITimelinerEditorModeToolkit::GetToolPaletteNames(TArray<FName>& PaletteNames) const
{
	PaletteNames.Add(NAME_Default);
}


FName FEITimelinerEditorModeToolkit::GetToolkitFName() const
{
	return FName("EITimelinerEditorMode");
}

FText FEITimelinerEditorModeToolkit::GetBaseToolkitName() const
{
	return LOCTEXT("DisplayName", "EITimelinerEditorMode Toolkit");
}

#undef LOCTEXT_NAMESPACE

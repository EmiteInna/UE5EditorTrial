// Copyright Epic Games, Inc. All Rights Reserved.

#include "EITimelinerModule.h"
#include "EITimelinerEditorModeCommands.h"

#define LOCTEXT_NAMESPACE "EITimelinerModule"

void FEITimelinerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FEITimelinerEditorModeCommands::Register();
}

void FEITimelinerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	FEITimelinerEditorModeCommands::Unregister();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FEITimelinerModule, EITimelinerEditorMode)
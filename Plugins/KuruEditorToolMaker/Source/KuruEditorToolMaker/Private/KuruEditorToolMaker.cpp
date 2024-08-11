// Copyright Epic Games, Inc. All Rights Reserved.

#include "KuruEditorToolMaker.h"

#include "LevelEditor.h"

#define LOCTEXT_NAMESPACE "FKuruEditorToolMakerModule"

void FKuruEditorToolMakerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::
	CreateRaw(this, &FKuruEditorToolMakerModule::CreateAddNewUObjectTypeMenu));
}

void FKuruEditorToolMakerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	UToolMenus::UnRegisterStartupCallback(this);
 
	UToolMenus::UnregisterOwner(this);
}

void FKuruEditorToolMakerModule::GE_PrintMessage(const FString& Message)
{
	GEngine->AddOnScreenDebugMessage(-1,5,FColor::Cyan,Message);
}

void FKuruEditorToolMakerModule::BindAction_CreateNewUObjectCode()
{
	GE_PrintMessage(TEXT("准备创建UObject附带类"));
}

void FKuruEditorToolMakerModule::CreateAddNewUObjectTypeMenu()
{

	FToolMenuOwnerScoped OwnerScoped(this);
	if(UToolMenu* Menu = UToolMenus::Get()->
		ExtendMenu("LevelEditor.MainMenu")){
		FToolMenuSection& Section = Menu->AddSection("KuruEditorTool",
			FText::FromString(TEXT("Kuru编辑器")));
		Section.AddSubMenu("KuruEditorBase",
			FText::FromString(TEXT("Kuru编辑器")),
			FText::FromString(TEXT("基础工具栏")),
			FNewToolMenuDelegate::CreateLambda([this](UToolMenu* InMenu)
		{
			FToolMenuSection& NewSection = InMenu->AddSection("Section");
			NewSection.AddMenuEntry(
			"KuruEditorEntry",
			FText::FromString(TEXT("创建一个新的自定义UAsset")),
			FText::FromString(TEXT("关注EmiteInna谢谢喵")),
			FSlateIcon(),
			FUIAction(FExecuteAction::CreateRaw(this,
				&FKuruEditorToolMakerModule::BindAction_CreateNewUObjectCode))
			);}));
		
		}

	
}
#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FKuruEditorToolMakerModule, KuruEditorToolMaker)
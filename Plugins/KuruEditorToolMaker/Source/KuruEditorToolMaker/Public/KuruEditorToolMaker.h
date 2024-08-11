// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FKuruEditorToolMakerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	static void GE_PrintMessage(const FString& Message);
	
	void BindAction_CreateNewUObjectCode();

	
private:
	//创建创建新UObject代码的菜单。
	void CreateAddNewUObjectTypeMenu();
};



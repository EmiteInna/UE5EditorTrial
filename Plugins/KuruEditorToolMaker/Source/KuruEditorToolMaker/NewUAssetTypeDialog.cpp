#include "NewUAssetTypeDialog.h"

#include "DesktopPlatformModule.h"
#include "IDesktopPlatform.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Misc/ScopedSlowTask.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"
#include "Widgets/Notifications/SNotificationList.h"

void SNewUAssetTypeDialog::Construct(const FArguments& InArgs)
{
	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	TitleTextFont.Size = 18;
	
	ChildSlot[
		SNew(SVerticalBox)

		+
		SVerticalBox::Slot()[
			SNew(SHorizontalBox)
			+
			SHorizontalBox::Slot()[
				SNew(STextBlock).Text(FText::FromString(TEXT("输入要创建的资产类型名称：")))
				.Font(TitleTextFont).Justification(ETextJustify::Left)
			].AutoWidth().Padding(FMargin(10, 5)).
			VAlign(VAlign_Center).HAlign(HAlign_Center)
			+
			SHorizontalBox::Slot()[
				
				SAssignNew(SW_InputName,SMultiLineEditableTextBox).Text(FText::FromString(InArgs._DefaultClassNmae))
				.Font(TitleTextFont).
				OnTextCommitted(this,&SNewUAssetTypeDialog::OnAssetNameTextCommitted)
				.OnTextChanged(this,&SNewUAssetTypeDialog::OnAssetNameTextChanged)
				
			].AutoWidth().Padding(FMargin(10, 5))
			
		].AutoHeight().Padding(FMargin(10, 5))
		+
		SVerticalBox::Slot()[
			SNew(SHorizontalBox)
			+
			SHorizontalBox::Slot()[
				SNew(STextBlock).Text(FText::FromString(TEXT("输入要创建文件的路径：")))
				.Font(TitleTextFont).Justification(ETextJustify::Left)
				
			].AutoWidth().Padding(FMargin(10, 5)).
			VAlign(VAlign_Center).HAlign(HAlign_Center)
			
			+
			SHorizontalBox::Slot()[
				
				SAssignNew(SW_InputPath,SMultiLineEditableTextBox).Text(FText::FromString(InArgs._InitialPath))
				.Font(TitleTextFont)
				
				
			].AutoWidth().Padding(FMargin(10, 5)).
			VAlign(VAlign_Center).HAlign(HAlign_Center).MaxWidth(400.f)
			
			+
			SHorizontalBox::Slot()[
				SNew(SButton).Text(FText::FromString("..."))
				.OnClicked(this,&SNewUAssetTypeDialog::HandleChooseFolderButtonClicked)
				
			].AutoWidth().Padding(FMargin(10, 5)).
			VAlign(VAlign_Center).HAlign(HAlign_Center)
				
		].AutoHeight().Padding(FMargin(10, 5))
		+
		SVerticalBox::Slot()[
			SNew(SHorizontalBox)
			+
			SHorizontalBox::Slot()[
				SNew(SButton).Text(FText::FromString(TEXT("取消"))).
				ForegroundColor(FSlateColor(FLinearColor(0.8f, 0.2f, 0.2f, 1.0f)))
				.OnClicked(this,&SNewUAssetTypeDialog::CancelTheProcess)	
			].AutoWidth().Padding(FMargin(10, 5)).
			VAlign(VAlign_Center).HAlign(HAlign_Center)
			+
			
			SHorizontalBox::Slot()[
				SNew(SButton).Text(FText::FromString(TEXT("确定"))).
				ForegroundColor(FSlateColor(FLinearColor(0.2f, 0.8f, 0.2f, 1.0f)))
				.OnClicked(this,&SNewUAssetTypeDialog::CreateTheUAsset)
				
			].AutoWidth().Padding(FMargin(10, 5)).
			VAlign(VAlign_Center).HAlign(HAlign_Center)
		].FillHeight(1.).Padding(FMargin(10, 5)).HAlign(HAlign_Center).VAlign(VAlign_Bottom)
	];
}

void SNewUAssetTypeDialog::OnAssetNameTextChanged(const FText& NewText)
{
	SelectedName = NewText.ToString();
}

void SNewUAssetTypeDialog::OnAssetNameTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
	SelectedName = NewText.ToString();
}

void SNewUAssetTypeDialog::OnTargetPathTextChanged(const FText& NewText)
{
}

void SNewUAssetTypeDialog::OnTargetPathTextCommitted(const FText& NewText, ETextCommit::Type CommitType)
{
}

void SNewUAssetTypeDialog::CancelClicked()
{
}

void SNewUAssetTypeDialog::FinishClicked()
{
}

FReply SNewUAssetTypeDialog::HandleChooseFolderButtonClicked()
{
	IDesktopPlatform* DesktopPlatform =FDesktopPlatformModule::Get();

	if (DesktopPlatform)
	{
		FString DefaultPath = FPaths::ProjectDir();
		bool bOpened = DesktopPlatform->OpenDirectoryDialog(
			nullptr, TEXT("Select a Folder"),
			DefaultPath, SelectedPath);

		if (bOpened)
		{
			SW_InputPath->SetText(FText::FromString(SelectedPath));
			return FReply::Handled();
		}
	}
	
	return FReply::Unhandled();
}

FReply SNewUAssetTypeDialog::CreateTheUAsset()
{
	if (SelectedName == "")
	{
		FNotificationInfo Info(FText::FromString(TEXT("资产的名称不能为空！")));
		Info.ExpireDuration = 5.f;
		Info.bFireAndForget = true;
		Info.Image = FCoreStyle::Get().GetBrush("MessageLog.Error");

		FSlateNotificationManager::Get().AddNotification(Info);
		return FReply::Handled();
	}

	if(!FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(*SelectedPath))
	{
		FNotificationInfo Info(FText::FromString(TEXT("选定的路径不存在！")));
		Info.ExpireDuration = 5.f;
		Info.bFireAndForget = true;
		Info.Image = FCoreStyle::Get().GetBrush("MessageLog.Error");

		FSlateNotificationManager::Get().AddNotification(Info);
		return FReply::Handled();
	}
	
	FString Objecth = FPaths::Combine(SelectedPath, SelectedName+".h");
	FString Objectcpp = FPaths::Combine(SelectedPath, SelectedName+".cpp");
	FString Factoryh = FPaths::Combine(SelectedPath, SelectedName+"_Factory.h");
	FString Factorycpp = FPaths::Combine(SelectedPath, SelectedName+"_Factory.cpp");
	FString AssetDefinitionh = FPaths::Combine(SelectedPath, SelectedName+"_AssetDefinition.h");
	FString AssetDefinitioncpp = FPaths::Combine(SelectedPath, SelectedName+"_AssetDefinition.cpp");
	FString EditorToolh = FPaths::Combine(SelectedPath, SelectedName+"_EditorTool.h");
	FString EditorToolcpp = FPaths::Combine(SelectedPath, SelectedName+"_EditorTool.cpp");

	if(FPlatformFileManager::Get().GetPlatformFile().FileExists(*Objecth)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*Objectcpp)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*Factoryh)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*Factorycpp)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*AssetDefinitionh)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*AssetDefinitioncpp)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*EditorToolh)||
		FPlatformFileManager::Get().GetPlatformFile().FileExists(*EditorToolcpp))
	{
		FNotificationInfo Info(FText::FromString(TEXT("已存在同名文件，请更改名称！")));
		Info.ExpireDuration = 5.f;
		Info.bFireAndForget = true;
		Info.Image = FCoreStyle::Get().GetBrush("MessageLog.Error");

		FSlateNotificationManager::Get().AddNotification(Info);
		return FReply::Handled();
	}

	FString ObjContenth = FString::Printf(
	TEXT("// Fill out your copyright notice in the Description page of Project Settings.\n"
			"\n"
			"#pragma once\n"
			"\n"
			"#include \"CoreMinimal.h\"\n"
			"#include \"UObject/Object.h\"\n"
			"#include \"%s.generated.h\"\n"
			"\n"
			"/**\n"
			" * 资产本身\n"
			" */\n"
			"UCLASS()\n"
			"class %s_API U%s : public UObject\n"
			"{\n"
			"    GENERATED_BODY()\n"
			"};\n"),*SelectedName,*SelectedName,*SelectedName);
	
	FString ObjContentcpp = FString::Printf(
		TEXT(
		"// Fill out your copyright notice in the Description page of Project Settings.\n"
		"\n"
		"\n"
		"#include \"%s.h\"\n"
		"\n"
			),*SelectedName);

	FString FactoryContenth = FString::Printf(
		TEXT(
		"// Fill out your copyright notice in the Description page of Project Settings.\n"
		"\n"
		"#pragma once\n"
		"\n"
		"#include \"CoreMinimal.h\"\n"
		"#include \"Factories/Factory.h\"\n"
		"\n"
		"#include \"%s_Factory.generated.h\"\n"
		"\n"
		"UCLASS()\n"
		"class %s_API U%s_Factory : public UFactory\n"
		"{\n"
		"    GENERATED_BODY()\n"
		"public:\n"
		"    U%s_Factory();\n"
		"    virtual bool CanCreateNew() const override;\n"
		"    virtual bool ShouldShowInNewMenu() const override;\n"
		"    virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;\n"
		"};\n"
			),*SelectedName,*SelectedName,*SelectedName,*SelectedName);
	FString FactoryContentcpp = FString::Printf(
		TEXT(
		"// Fill out your copyright notice in the Description page of Project Settings.\n"
		"\n"
		"\n"
		"#include \"%s_Factory.h\"\n"
		"\n"
		"#include \"%s.h\"\n"
		"\n"
		"U%s_Factory::U%s_Factory()\n"
		"{\n"
		"    SupportedClass = U%s::StaticClass();\n"
		"    bCreateNew = true;\n"
		"}\n"
		"\n"
		"bool U%s_Factory::CanCreateNew() const\n"
		"{\n"
		"    return true;\n"
		"}\n"
		"\n"
		"bool U%s_Factory::ShouldShowInNewMenu() const\n"
		"{\n"
		"    return true;\n"
		"}\n"
		"\n"
		"UObject* U%s_Factory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,\n"
		"    UObject* Context, FFeedbackContext* Warn)\n"
		"{\n"
		"    return NewObject<U%s>(InParent, InClass, InName, Flags);\n"
		"}\n"
			),*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName);
	FString AssetDefinitionContenth = FString::Printf(
		TEXT(
		"// Fill out your copyright notice in the Description page of Project Settings.\n"
		"\n"
		"#pragma once\n"
		"\n"
		"#include \"CoreMinimal.h\"\n"
		"#include \"AssetDefinitionDefault.h\"\n"
		"#include \"AssetTypeActions_Base.h\"\n"
		"#include \"%s.h\"\n"
		"#include \"%s_AssetDefinition.generated.h\"\n"
		"\n"
		"/**\n"
		" * 资产的标识符。\n"
		" */\n"
		"UCLASS()\n"
		"class %s_API U%s_AssetDefinition :public UAssetDefinitionDefault\n"
		"{\n"
		"    GENERATED_BODY()\n"
		"public:\n"
		"    // UAssetDefinition Begin\n"
		"    virtual FText GetAssetDisplayName() const override { return FText::FromString(TEXT(\"%s\")); }\n"
		"    virtual FText GetAssetDescription(const FAssetData& AssetData) const override { return FText::FromString(TEXT(\"是~这样吗~\")); };\n"
		"    virtual FLinearColor GetAssetColor() const override { return FLinearColor(FColor(255, 210, 230)); }\n"
		"    virtual TSoftClassPtr<UObject> GetAssetClass() const override { return U%s::StaticClass(); }\n"
		"    virtual TConstArrayView<FAssetCategoryPath> GetAssetCategories() const override\n"
		"    {\n"
		"        static const auto Categories = { FAssetCategoryPath(EAssetCategoryPaths::Gameplay) };\n"
		"        return Categories;\n"
		"    }\n"
		"    virtual EAssetCommandResult OpenAssets(const FAssetOpenArgs& OpenArgs) const override;\n"
		"\n"
		"    // UAssetDefinition End\n"
		"\n"
		"};\n"
			),*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName);
	FString AssetDefinitionContentcpp = FString::Printf(
		TEXT(
		"// Fill out your copyright notice in the Description page of Project Settings.\n"
		"\n"
		"\n"
		"#include \"%s_AssetDefinition.h\"\n"
		"\n"
		"#include \"%s_EditorTool.h\"\n"
		"\n"
		"EAssetCommandResult U%s_AssetDefinition::OpenAssets(const FAssetOpenArgs& OpenArgs) const\n"
		"{\n"
		"    if (OpenArgs.OpenMethod == EAssetOpenMethod::Edit)\n"
		"    {\n"
		"        for (const auto& Object : OpenArgs.LoadObjects<UObject>())\n"
		"        {\n"
		"            if (U%s* Asset = Cast<U%s>(Object))\n"
		"            {\n"
		"                const TSharedRef< F%s_EditorTool> NewEditor = MakeShareable(new F%s_EditorTool());\n"
		"                NewEditor->InitializeAssetEditor(EToolkitMode::Standalone, OpenArgs.ToolkitHost, Asset);\n"
		"            }\n"
		"        }\n"
		"        return EAssetCommandResult::Handled;\n"
		"\n"
		"    }\n"
		"    return EAssetCommandResult::Unhandled;\n"
		"}\n"	
			),*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName,*SelectedName);
	FString EditorToolContenth = FString::Printf(
		TEXT(
		"\n"
		"// Fill out your copyright notice in the Description page of Project Settings.\n"
		"\n"
		"#pragma once\n"
		"\n"
		"#include \"CoreMinimal.h\"\n"
		"#include \"Toolkits/AssetEditorToolkit.h\"\n"
		"#include \"UObject/Object.h\"\n"
		"\n"
		"class U%s;\n"
		"class SMyTestWidget;\n"
		"/**\n"
		" *\n"
		" */\n"
		"class %s_API F%s_EditorTool : public FAssetEditorToolkit\n"
		"{\n"
		"    static const FName MyTestTabID;\n"
		"    static const FName MyDetailPropertyID;\n"
		"public:\n"
		"    virtual FName GetToolkitFName() const override;\n"
		"    virtual FText GetBaseToolkitName() const override;\n"
		"    virtual FString GetWorldCentricTabPrefix() const override;\n"
		"    virtual FLinearColor GetWorldCentricTabColorScale() const override;\n"
		"\n"
		"    virtual void RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;\n"
		"    virtual void UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;\n"
		"\n"
		"    void InitializeAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UObject* InAssets);\n"
		"\n"
		"private:\n"
		"    /*Detail面板*/\n"
		"    TSharedRef<SDockTab> SpawnDetailTab(const FSpawnTabArgs& SpawnTabArgs)const;\n"
		"\n"
		"    UPROPERTY()\n"
		"    U%s* EditingObject;\n"
		"\n"
		"};\n"
			),*SelectedName,*SelectedName,*SelectedName,*SelectedName);
	FString EditorToolContentcpp = FString::Printf(
		TEXT(
			"// Fill out your copyright notice in the Description page of Project Settings.\n"
			"\n"
			"\n"
			"#include \"%s_EditorTool.h\"\n"
			"#include \"PropertyEditorModule.h\"\n"
			"#include \"%s.h\"\n"
			"\n"
			"const FName F%s_EditorTool::MyTestTabID = TEXT(\"PreviewViewportTabID\");\n"
			"const FName F%s_EditorTool::MyDetailPropertyID = TEXT(\"DetailsTabID\");\n"
			"\n"
			"\n"
			"FName F%s_EditorTool::GetToolkitFName() const\n"
			"{\n"
			"return FName(TEXT(\"%s编辑器\"));\n"
			"}\n"
			"\n"
			"FText F%s_EditorTool::GetBaseToolkitName() const\n"
			"{\n"
			"return FText::FromName(FName(TEXT(\"%s编辑器\")));\n"
			"}\n"
			"\n"
			"FString F%s_EditorTool::GetWorldCentricTabPrefix() const\n"
			"{\n"
			"return TEXT(\"%s编辑器\");\n"
			"}\n"
			"\n"
			"FLinearColor F%s_EditorTool::GetWorldCentricTabColorScale() const\n"
			"{\n"
			"return FLinearColor::Green;\n"
			"}\n"
			"\n"
			"void F%s_EditorTool::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)\n"
			"{\n"
			"FAssetEditorToolkit::RegisterTabSpawners(InTabManager);\n"
			"InTabManager->RegisterTabSpawner(MyDetailPropertyID, FOnSpawnTab::CreateRaw(this,\n"
			"&F%s_EditorTool::SpawnDetailTab));\n"
			"}\n"
			"\n"
			"void F%s_EditorTool::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)\n"
			"{\n"
			"InTabManager->UnregisterTabSpawner(MyDetailPropertyID);\n"
			"FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);\n"
			"}\n"
			"\n"
			"void F%s_EditorTool::InitializeAssetEditor(const EToolkitMode::Type Mode,\n"
			"const TSharedPtr<IToolkitHost>& InitToolkitHost, UObject* InAssets)\n"
			"{\n"
			"\n"
			"EditingObject = Cast<U%s>(InAssets);\n"
			"const TSharedRef<FTabManager::FLayout> StandaloneOurAssetEditor =\n"
			"FTabManager::NewLayout(\"%sAssetEditor3\")->AddArea(\n"
			"FTabManager::NewPrimaryArea()->SetOrientation(EOrientation::Orient_Horizontal)\n"
			"->Split(FTabManager::NewStack()->AddTab(MyDetailPropertyID, ETabState::OpenedTab))\n"
			");\n"
			"InitAssetEditor(Mode, InitToolkitHost, FName(TEXT(\"%s编辑器\")), StandaloneOurAssetEditor, true, true, InAssets);\n"
			"}\n"
			"\n"
			"TSharedRef<SDockTab> F%s_EditorTool::SpawnDetailTab(const FSpawnTabArgs& SpawnTabArgs) const\n"
			"{\n"
			"//加载属性编辑器模块\n"
			"FPropertyEditorModule& PropertyEditorModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>(\"PropertyEditor\");\n"
			"const FDetailsViewArgs DetailsViewArgs;\n"
			"//创建属性编辑器的Slate\n"
			"const TSharedRef<IDetailsView> AssetPropertyView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);\n"
			"//将对象传入，这样就是自动生成对象的属性面板\n"
			"AssetPropertyView->SetObject(GetEditingObject());\n"
			"return SNew(SDockTab)\n"
			"[\n"
			"AssetPropertyView\n"
			"];\n"
			"}\n"
			"\n"
			),*SelectedName,*SelectedName,*SelectedName,*SelectedName
			,*SelectedName,*SelectedName,*SelectedName,*SelectedName
			,*SelectedName,*SelectedName,*SelectedName,*SelectedName
			,*SelectedName,*SelectedName,*SelectedName,*SelectedName
			,*SelectedName,*SelectedName,*SelectedName);

	FScopedSlowTask SlowTask(9,FText::FromString(TEXT("正在执行创建...")));
	SlowTask.MakeDialog((true));

	SlowTask.EnterProgressFrame(1,
		FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 0,*Objecth)));
	if (FFileHelper::SaveStringToFile(ObjContenth, *Objecth))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *Objecth);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *Objecth);
	}
	SlowTask.EnterProgressFrame(1,
			FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 1,*Objectcpp)));
	if (FFileHelper::SaveStringToFile(ObjContentcpp, *Objectcpp))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *Objectcpp);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *Objectcpp);
	}
	SlowTask.EnterProgressFrame(1,
			FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 2,*Factoryh)));
	if (FFileHelper::SaveStringToFile(FactoryContenth, *Factoryh))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *Factoryh);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *Factoryh);
	}
	SlowTask.EnterProgressFrame(1,
			FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 3,*Factorycpp)));
	if (FFileHelper::SaveStringToFile(FactoryContentcpp, *Factorycpp))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *Factorycpp);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *Factorycpp);
	}
	SlowTask.EnterProgressFrame(1,
				FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 4,*AssetDefinitionh)));
	if (FFileHelper::SaveStringToFile(AssetDefinitionContenth, *AssetDefinitionh))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *AssetDefinitionh);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *AssetDefinitionh);
	}
	SlowTask.EnterProgressFrame(1,
				FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 5,*AssetDefinitioncpp)));
	if (FFileHelper::SaveStringToFile(AssetDefinitionContentcpp, *AssetDefinitioncpp))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *AssetDefinitioncpp);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *AssetDefinitioncpp);
	}
	SlowTask.EnterProgressFrame(1,
				FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 6,*EditorToolh)));
	if (FFileHelper::SaveStringToFile(EditorToolContenth, *EditorToolh))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *EditorToolh);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *EditorToolh);
	}
	SlowTask.EnterProgressFrame(1,
				FText::FromString(FString::Printf(TEXT("处理进度 %d/8，正在创建%s"), 7,*EditorToolcpp)));
	if (FFileHelper::SaveStringToFile(EditorToolContentcpp, *EditorToolcpp))
	{
		UE_LOG(LogTemp, Log, TEXT("文件创建成功: %s"), *EditorToolcpp);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("文件创建失败: %s"), *EditorToolcpp);
	}
	SlowTask.EnterProgressFrame(1,
			FText::FromString(FString::Printf(TEXT("处理进度 %d/8，完成创建"), 8)));
	return FReply::Handled();
}

FReply SNewUAssetTypeDialog::CancelTheProcess()
{
	TSharedPtr<SWindow> ContainingWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());

	if ( ContainingWindow.IsValid() )
	{
		ContainingWindow->RequestDestroyWindow();
	}
	return FReply::Handled();
}


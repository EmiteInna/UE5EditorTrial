﻿#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SSectionClipRowWidget;
class UKuruStoryClipData;
class UKuruStorySectionData;
class FKuruStorySectionData_EditorTool;

class KURUSTORYMODULE_API SSectionEditorWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSectionEditorWidget){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,const TSharedPtr<FKuruStorySectionData_EditorTool>& InEditorToolkit);


	UKuruStorySectionData* EditingData = nullptr;
	TArray<UKuruStoryClipData*> Editing_ClipDatas;

	TArray<SSectionClipRowWidget*> ChildWidgets;
public:
	TSharedPtr<SEditableTextBox> TitleTextBox;
	TSharedPtr<SButton> Button_CreatingNewClip;
	TSharedPtr<SListView<UKuruStoryClipData*>> SW_ClipDataList;
	

	
	void Bind_RefreshProperty();

protected:
	FString GetTitleText()const;

	void RefreshClipDatas();

	void Bind_OnEditingTitle(const FText& NewText, ETextCommit::Type CommitType);

	TSharedRef<ITableRow> OnGenerateRowForClip(UKuruStoryClipData* Data, const TSharedRef<STableViewBase>& OwnerTable);

	FReply Button_OnCreatingNewClip();
public:
	FReply ChildMoveUp(SSectionClipRowWidget* ChildWidget);
	FReply ChildMoveDown(SSectionClipRowWidget* ChildWidget);
	FReply ChildDelete(SSectionClipRowWidget* ChildWidget);
	int GetChildClipIndex(UKuruStoryClipData* ChildClip);

	TWeakPtr<FKuruStorySectionData_EditorTool> EditorTool;
};





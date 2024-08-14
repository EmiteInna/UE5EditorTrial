#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class UKuruStoryClipData;
class UKuruStorySectionData;
class FKuruStorySectionData_EditorTool;

class KURUSTORYMODULE_API SSectionEditorWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSectionEditorWidget){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	FKuruStorySectionData_EditorTool* ToolPtr = nullptr;

	UKuruStorySectionData* EditingData = nullptr;
	TArray<UKuruStoryClipData*> Editing_ClipDatas;

public:
	TSharedPtr<SEditableTextBox> TitleTextBox;
	TSharedPtr<SButton> Button_CreatingNewClip;
	TSharedPtr<SListView<UKuruStoryClipData*>> SW_ClipDataList;
	
	FEditableTextBoxStyle KawaiiTextBoxStyle;
	FButtonStyle KawaiiButtonStyle;


	
	void Bind_RefreshProperty();

protected:
	FString GetTitleText()const;

	void RefreshClipDatas();

	void Bind_OnEditingTitle(const FText& NewText, ETextCommit::Type CommitType);

	TSharedRef<ITableRow> OnGenerateRowForClip(UKuruStoryClipData* Data, const TSharedRef<STableViewBase>& OwnerTable);

	FReply Button_OnCreatingNewClip();
};




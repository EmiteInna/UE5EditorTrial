#pragma once

class FKuruStorySectionData_EditorTool;
class SClipTimelineWidget;
class SSectionEditorWidget;
class SAssetView;
class SMultiLineEditableTextBox;
class UKuruStoryClipData;

class SSectionClipRowWidget :public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SSectionClipRowWidget){}
		SLATE_ARGUMENT(UKuruStoryClipData*, EditingData)
		SLATE_ARGUMENT(SSectionEditorWidget*, SectionEditorWidget)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs,const TSharedPtr<FKuruStorySectionData_EditorTool>& InEditorToolkit);
	~SSectionClipRowWidget();

public:

	
	TSharedPtr<STextBlock> SW_Index;
	TSharedPtr<SEditableTextBox> SW_Teller;
	TSharedPtr<SMultiLineEditableTextBox> SW_Content;
	TSharedPtr<SImage> SW_Image;
	TSharedPtr<SButton> SW_ButtonUp;
	TSharedPtr<SButton> SW_ButtonDown;
	TSharedPtr<SButton> SW_ButtonDelete;
	TSharedPtr<SButton> SW_ButtonOpenTimelinePanel;

	
	void BindRefreshProperty();

protected:
	UKuruStoryClipData* mEditingData=nullptr;
	SSectionEditorWidget* mSectionEditorWidget=nullptr;
	TSharedPtr<SClipTimelineWidget> mChildTimelineWidget=nullptr;
	TWeakPtr<FKuruStorySectionData_EditorTool> EditorToolkit;
	
	FString GetAttributeName(FName AttributeType);
	
	void Bind_OnEditingTeller(const FText& NewText, ETextCommit::Type CommitType);
	void Bind_OnEditingContent(const FText& NewText, ETextCommit::Type CommitType);

	FReply BindButton_OnClickUp();
	FReply BindButton_OnClickDown();
	FReply BindButton_OnClickDelete();
	FReply BindButton_OnClickOpenTimelinePanel();

	TSharedPtr<SWidget> AssetPickerInstance=nullptr;
	FReply Bind_OnImageSelectButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent);
	void OnImageSelected(const FAssetData& AssetData);
	FSlateImageBrush* ImageBrush = nullptr;
	bool bOpenedAssetPicker = false;

	bool bOpenedTimePanel = false;
public:
	UKuruStoryClipData* GetEditingData()const{return mEditingData;};
};



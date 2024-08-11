#pragma once

class SMultiLineEditableTextBox;
DECLARE_DELEGATE_TwoParams(FOnAddNewUAsset, const FString& /*ClassName*/, const FString& /*ClassPath*/);

/*
 * 创建新UAsset类型所使用的工具框，
 * 目前的要求只是输入UAsset的名字和路径，即可完成生成。
 */
class SNewUAssetTypeDialog:public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SNewUAssetTypeDialog){}

	SLATE_ARGUMENT(FString, InitialPath)
	
	SLATE_ARGUMENT(FString, DefaultClassNmae)

	SLATE_EVENT(FOnAddNewUAsset, OnAddNewUAsset)
	
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	void OnAssetNameTextChanged(const FText& NewText);

	void OnAssetNameTextCommitted(const FText& NewText, ETextCommit::Type CommitType);

	void OnTargetPathTextChanged(const FText& NewText);

	void OnTargetPathTextCommitted(const FText& NewText, ETextCommit::Type CommitType);

	void CancelClicked();

	void FinishClicked();

	FReply HandleChooseFolderButtonClicked();

	FOnAddNewUAsset OnAddedToProject;


public:
	FString SelectedName = "";
	
	FString SelectedPath = "";
	
	TSharedPtr<SMultiLineEditableTextBox> SW_InputName;

	TSharedPtr<SMultiLineEditableTextBox> SW_InputPath;

	FReply CreateTheUAsset();

	FReply CancelTheProcess();
};

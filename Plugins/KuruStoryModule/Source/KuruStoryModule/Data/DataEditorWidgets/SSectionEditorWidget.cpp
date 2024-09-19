#include "SSectionEditorWidget.h"

#include "SSectionClipRowWidget.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "KuruStoryModule/Data/KuruStorySectionData.h"
#include "KuruStoryModule/Types/ColorStores.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"

#define FTF(a) FText::FromString(TEXT(a))
#define FTFs(a) FText::FromString(a)


void SSectionEditorWidget::Construct(const FArguments& InArgs,const TSharedPtr<FKuruStorySectionData_EditorTool>& InEditorToolkit)
{
	KuruColorStores::InitializeKuruStores();
	EditorTool = InEditorToolkit;
	
	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	TitleTextFont.Size = 25;
	
	
	ChildSlot[
		SNew(SOverlay)+
		SOverlay::Slot()[
			SNew(SImage).Image(KuruColorStores::PinkBrush)
		]
			+
		SOverlay::Slot()
			.Padding(10)[
			
				SNew(SVerticalBox)
				//这个是标题槽
				+SVerticalBox::Slot().Padding(5).MaxHeight(50).HAlign(HAlign_Center)[

					SNew(SHorizontalBox)
					+SHorizontalBox::Slot().Padding(0,5,0,5).AutoWidth()[
							SNew(STextBlock).ColorAndOpacity(KuruColorStores::DeepPink).Text(FTF("标题：")).Font(TitleTextFont)
					].VAlign(VAlign_Center).HAlign(HAlign_Center)
					
					+SHorizontalBox::Slot().Padding(0,5).AutoWidth()[
						SAssignNew(TitleTextBox,SEditableTextBox).Text(FTFs(GetTitleText()))
						.MinDesiredWidth(150)
						.Style(KuruColorStores::KawaiiTextBox)
						.Font(TitleTextFont).OnTextCommitted(this,&SSectionEditorWidget::Bind_OnEditingTitle)
					]	
				]
				//这个是按钮组
				+SVerticalBox::Slot().Padding(0).MaxHeight(50).HAlign(HAlign_Right)[
					SNew(SHorizontalBox)
					+
					SHorizontalBox::Slot().Padding(0).AutoWidth().VAlign(VAlign_Center)[
						SAssignNew(Button_CreatingNewClip,SButton).Text(FTF("创建新Clip"))
						.ButtonStyle(KuruColorStores::KawaiiDefaultButton)
						.ForegroundColor(KuruColorStores::KawaiiBlack)
						.OnClicked(this,&SSectionEditorWidget::Button_OnCreatingNewClip)
						.VAlign(VAlign_Center)
					]
				]
				//这个是分割线
				+SVerticalBox::Slot().Padding(2).MaxHeight(1)[
					SNew(SSeparator).Orientation(Orient_Horizontal)
				]
				//这个是Clip列表
				+SVerticalBox::Slot().Padding(5).VAlign(VAlign_Fill).FillHeight(10.)[
					SNew(SScrollBox)
					.Style(KuruColorStores::KawaiiScrollBox)
					.ScrollBarStyle(KuruColorStores::KawaiiScrollBar)
					+SScrollBox::Slot()[
						SAssignNew(SW_ClipDataList,SListView<UKuruStoryClipData*>)
						.ItemHeight(50.f)
						.ListItemsSource(&Editing_ClipDatas)
						.OnGenerateRow(this,&SSectionEditorWidget::OnGenerateRowForClip)
					]
				]
			]
	];

}

void SSectionEditorWidget::Bind_RefreshProperty()
{
	if (TitleTextBox)
	{
		TitleTextBox->SetText(FTFs(GetTitleText()));
	}
	RefreshClipDatas();
}

void SSectionEditorWidget::Bind_OnEditingTitle(const FText& NewText, ETextCommit::Type CommitType)
{
	if(EditingData)
	{
		const FScopedTransaction AddTaskTransaction(FText::FromString("TitleChange"));
		EditingData->Modify();
		EditingData->Title = FName(NewText.ToString());
	}
}

TSharedRef<ITableRow> SSectionEditorWidget::OnGenerateRowForClip(UKuruStoryClipData* Data,
	const TSharedRef<STableViewBase>& OwnerTable)
{
	ensure(Data);
	TSharedRef<SSectionClipRowWidget> ChildWidget =
		SNew(SSectionClipRowWidget,EditorTool.Pin().ToSharedRef())
			.EditingData(Data)
			.SectionEditorWidget(this);
	
	TSharedRef<STableRow<UKuruStoryClipData*>> ListView =
		SNew(STableRow<UKuruStoryClipData*>,OwnerTable)[
			ChildWidget
		];
	return ListView;
}

FString SSectionEditorWidget::GetTitleText() const
{
	if (EditingData)
	{
		return EditingData->Title.ToString();
	}else
	{
		return TEXT("新对话片段");
	}
}

void SSectionEditorWidget::RefreshClipDatas()
{
	if (EditingData){

		for (int i=0;i<EditingData->ClipDatas.Num();i++)
		{
			if (EditingData->ClipDatas[i]){
				EditingData->ClipDatas[i]->Number = i+1;
				EditingData->ClipDatas[i]->Parent = EditingData;
			}
		}
		
		Editing_ClipDatas.Empty();
		for (auto data:EditingData->ClipDatas)
		{
			Editing_ClipDatas.Emplace(data);
		}
		
	}
	
	if (SW_ClipDataList)
	{
		SW_ClipDataList->SetItemsSource(&Editing_ClipDatas);
		SW_ClipDataList->RequestListRefresh();
	}

	for(auto child:ChildWidgets)
	{
		if (child)
		{
			child->BindRefreshProperty();
		}
	}
	
}

FReply SSectionEditorWidget::Button_OnCreatingNewClip()
{
	if (EditingData)
	{
		UKuruStoryClipData* Clip = NewObject<UKuruStoryClipData>(EditingData);
		Clip->Parent = EditingData;
		const FScopedTransaction AddTaskTransaction(FText::FromString("Create New Clip"));
		EditingData->Modify();
		EditingData->ClipDatas.Emplace(Clip);

		RefreshClipDatas();
	}
	return FReply::Handled();
}
int SSectionEditorWidget::GetChildClipIndex(UKuruStoryClipData* ChildClip)
{
	if (EditingData)
	{
		for(int i=0;i< EditingData->ClipDatas.Num();i++)
		{
			if (ChildClip == EditingData->ClipDatas[i])
			{
				return i;
			}
		}

	}

	return -1;
}
FReply SSectionEditorWidget::ChildMoveUp(SSectionClipRowWidget* ChildWidget)
{
	if (ChildWidget && EditingData)
	{
		UKuruStoryClipData* ClipData = ChildWidget->GetEditingData();
		int index = GetChildClipIndex(ClipData);
		if (index != 0 && index != -1)
		{
			auto tmp = EditingData->ClipDatas[index-1];
			EditingData->ClipDatas[index - 1]=ClipData;
			EditingData->ClipDatas[index] = tmp;

			const FScopedTransaction AddTaskTransaction(FText::FromString("Clip Move"));
			EditingData->Modify();

			RefreshClipDatas();
		}
	}
	return FReply::Handled();
}

FReply SSectionEditorWidget::ChildMoveDown(SSectionClipRowWidget* ChildWidget)
{
	if (ChildWidget && EditingData)
	{
		UKuruStoryClipData* ClipData = ChildWidget->GetEditingData();
		int index = GetChildClipIndex(ClipData);
		if (index != EditingData->ClipDatas.Num()-1 && index != -1)
		{
			auto tmp = EditingData->ClipDatas[index+1];
			EditingData->ClipDatas[index + 1]=ClipData;
			EditingData->ClipDatas[index] = tmp;

			const FScopedTransaction AddTaskTransaction(FText::FromString("Clip Move"));
			EditingData->Modify();

			RefreshClipDatas();
		}
	}
	return FReply::Handled();
}

FReply SSectionEditorWidget::ChildDelete(SSectionClipRowWidget* ChildWidget)
{
	if (ChildWidget && EditingData)
	{
		UKuruStoryClipData* ClipData = ChildWidget->GetEditingData();
		EAppReturnType::Type Ret = FMessageDialog::Open(EAppMsgType::YesNo,FTF("真的要删除对话吗TT？"));
		if (Ret == EAppReturnType::Yes)
		{
			const FScopedTransaction AddTaskTransaction(FText::FromString("Clip Move"));
			EditingData->Modify();

			EditingData->ClipDatas.Remove(ClipData);
			RefreshClipDatas();

		}
	}
	return FReply::Handled();
}

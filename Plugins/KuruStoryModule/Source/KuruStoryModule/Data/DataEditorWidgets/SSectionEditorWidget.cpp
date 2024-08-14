#include "SSectionEditorWidget.h"

#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "KuruStoryModule/Data/KuruStorySectionData.h"
#include "KuruStoryModule/Types/ColorStores.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"

#define FTF(a) FText::FromString(TEXT(a))
#define FTFs(a) FText::FromString(a)


void SSectionEditorWidget::Construct(const FArguments& InArgs)
{
	FSlateFontInfo TitleTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	TitleTextFont.Size = 25;

	FSlateBrush* MyBackgroundBrush = new FSlateBrush();
	MyBackgroundBrush->TintColor = KuruColorStores::KawaiiPink;
	const FEditableTextBoxStyle* DefaultStyle = &FCoreStyle::Get().GetWidgetStyle<FEditableTextBoxStyle>("NormalEditableTextBox");

	KawaiiTextBoxStyle = *DefaultStyle;
	KawaiiTextBoxStyle.BackgroundImageNormal.TintColor = FSlateColor(KuruColorStores::KawaiiBlue);

	KawaiiButtonStyle = KuruColorStores::GetButtonStyleFromColor(KuruColorStores::DeepPink,KuruColorStores::KawaiiPink,
							KuruColorStores::DeepPink,FLinearColor(.6,.6,.6));
	
	ChildSlot[
		SNew(SOverlay)+
		SOverlay::Slot()[
			SNew(SImage).Image(MyBackgroundBrush)
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
						.BackgroundColor(KuruColorStores::DeepBlue)
						.ForegroundColor(KuruColorStores::DeepPink)
						.MinDesiredWidth(150)
						//.Style(&KawaiiTextBoxStyle)
						.Font(TitleTextFont).OnTextCommitted(this,&SSectionEditorWidget::Bind_OnEditingTitle)
					]	
				]
				//这个是按钮组
				+SVerticalBox::Slot().Padding(5).MaxHeight(50).HAlign(HAlign_Right)[
					SNew(SHorizontalBox)
					+
					SHorizontalBox::Slot().Padding(5).AutoWidth().VAlign(VAlign_Center)[
						SAssignNew(Button_CreatingNewClip,SButton).Text(FTF("创建新Clip"))
						//.ButtonStyle(&KawaiiButtonStyle)
						.ForegroundColor(KuruColorStores::KawaiiPink)
						.OnClicked(this,&SSectionEditorWidget::Button_OnCreatingNewClip)
						.VAlign(VAlign_Center)
					]
				]
				//这个是分割线
				+SVerticalBox::Slot().Padding(2).MaxHeight(1)[
					SNew(SSeparator).Orientation(Orient_Horizontal)
				]
				//这个是Clip列表
				+SVerticalBox::Slot().Padding(5).AutoHeight()[
					SNew(SScrollBox)
					+SScrollBox::Slot()[
						SAssignNew(SW_ClipDataList,SListView<UKuruStoryClipData*>)
						.ItemHeight(60.f)
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
	FText NameText;
	if (Data)
	{
		NameText = FTFs(Data->Teller.ToString());
	}else
	{
		NameText = FTF("还没有哦~");
	}
	TSharedRef<STableRow<UKuruStoryClipData*>> ListView =
		SNew(STableRow<UKuruStoryClipData*>,OwnerTable)[
			SNew(STextBlock).Text(NameText)
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
		Editing_ClipDatas.Empty();
		for (auto data:EditingData->ClipDatas)
		{
			Editing_ClipDatas.Emplace(data);
		}
	}
	if (SW_ClipDataList)
	{
		SW_ClipDataList->RequestListRefresh();
	}
}

FReply SSectionEditorWidget::Button_OnCreatingNewClip()
{
	if (EditingData)
	{
		UKuruStoryClipData* Clip = NewObject<UKuruStoryClipData>();
		const FScopedTransaction AddTaskTransaction(FText::FromString("Create New Clip"));
		EditingData->Modify();
		EditingData->ClipDatas.Emplace(Clip);

		RefreshClipDatas();
	}
	return FReply::Handled();
}

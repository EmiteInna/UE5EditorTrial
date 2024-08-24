#include "SSectionClipRowWidget.h"

#include "ContentBrowserModule.h"
#include "SAssetView.h"
#include "SClipTimelineWidget.h"
#include "SSectionEditorWidget.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "KuruStoryModule/Data/KuruStorySectionData.h"
#include "KuruStoryModule/Types/ColorStores.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"
#include "Widgets/Layout/SConstraintCanvas.h"

#define FTF(a) FText::FromString(TEXT(a))
#define FTFs(a) FText::FromString(a)

void SSectionClipRowWidget::Construct(const FArguments& InArgs)
{
	KuruColorStores::InitializeKuruStores();
	FSlateFontInfo IndexTextFont = FCoreStyle::Get().GetFontStyle(FName("NormalBold"));
	IndexTextFont.Size = 20;
	
	FSlateFontInfo TellerTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	TellerTextFont.Size = 12;

	FSlateFontInfo ContentTextFont = FCoreStyle::Get().GetFontStyle(FName("EnbossedText"));
	ContentTextFont.Size = 15;
	
	FSlateBrush* MyBackgroundBrush = new FSlateBrush();
	MyBackgroundBrush->TintColor = KuruColorStores::KawaiiOrange;

	mEditingData = InArgs._EditingData;
	mSectionEditorWidget = InArgs._SectionEditorWidget;

	if (mSectionEditorWidget)
	{
		mSectionEditorWidget->ChildWidgets.Emplace(this);
	}
	
	if (!ImageBrush)
	{
		ImageBrush = new FSlateImageBrush(FName("ImageBrush"),FVector2D(128,128),
			KuruColorStores::DeepPink);
		KuruColorStores::SetKawaiiRounded(ImageBrush);
	}
	
	ChildSlot[
		SNew(SOverlay)+
		SOverlay::Slot().Padding(0)[
			SNew(SImage).Image(MyBackgroundBrush)
		]

		+SOverlay::Slot().Padding(10).HAlign(HAlign_Left)[
			//序号
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot().Padding(5).VAlign(VAlign_Top).HAlign(HAlign_Center).AutoWidth().MaxWidth(45)[
				SAssignNew(SW_Index,STextBlock)
				.Text(FTFs("#"+GetAttributeName(FName("Index"))))
				.ColorAndOpacity(KuruColorStores::KawaiiBlack)
				.Font(IndexTextFont)
			]
			//图片和名字
			+SHorizontalBox::Slot().Padding(5)
			.VAlign(VAlign_Center).HAlign(HAlign_Center)
			.AutoWidth()
			[
				SNew(SBox)
				.HeightOverride(180)
				.WidthOverride(150)
				[
					SNew(SVerticalBox)
					+
					SVerticalBox::Slot().
					Padding(0,5,0,1).AutoHeight()
					[
						SNew(SBox)
						.HeightOverride(140)
						.WidthOverride(140)
						.MaxAspectRatio(1)
						.MinAspectRatio(1)
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						[
							SAssignNew(SW_Image,SImage).Image(KuruColorStores::DeepPinkBrush)
							.Image(ImageBrush)
							.OnMouseButtonDown(this,&SSectionClipRowWidget::Bind_OnImageSelectButtonDown)
							.DesiredSizeOverride(FVector2D(150,150))
							/*.RenderTransformPivot(FVector2D(0.5f, 0.5f))
							.RenderTransform(FSlateRenderTransform(FScale2D(1.0f, 1.0f)))*/
						]
					]
					+SVerticalBox::Slot().Padding(10,1,10,5).AutoHeight()
					[
						SNew(SBox)
						.HeightOverride(30)
						.WidthOverride(150)
						.HAlign(HAlign_Fill)
						.VAlign(VAlign_Fill)
						[
							SAssignNew(SW_Teller,SEditableTextBox).Text(FTFs(GetAttributeName(FName("Teller"))))
							.Font(TellerTextFont)
							.OnTextCommitted(this,&SSectionClipRowWidget::Bind_OnEditingTeller)
							.MinDesiredWidth(1)
							.Style(KuruColorStores::KawaiiTextBox)
							.Justification(ETextJustify::Center)
						]
					]
				]
			]
			//内容
			+SHorizontalBox::Slot().Padding(40,10,10,10).VAlign(VAlign_Fill).HAlign(HAlign_Fill).FillWidth(2)[
				SNew(SBox)
				.MinDesiredWidth(500)
				[
					SAssignNew(SW_Content,SMultiLineEditableTextBox).Text(FTFs(GetAttributeName(FName("Content"))))
					.Font(ContentTextFont)
					.Justification(ETextJustify::Center)
					.OnTextCommitted(this,&SSectionClipRowWidget::Bind_OnEditingContent)
					.Style(KuruColorStores::KawaiiTextBox)
				]
			]
			//三个按钮，分别是上移下移和删除
			+SHorizontalBox::Slot().Padding(30,10,10,10).VAlign(VAlign_Fill).HAlign(HAlign_Fill).AutoWidth()
			[
				SNew(SVerticalBox)
				+
				SVerticalBox::Slot().Padding(5).AutoHeight()
				[
					SNew(SBox)
					.HeightOverride(40)
					.WidthOverride(70)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						SAssignNew(SW_ButtonUp,SButton)
						.Text(FTF("上移"))
						.ButtonStyle(KuruColorStores::KawaiiDefaultButton)
						.ForegroundColor(KuruColorStores::KawaiiBlack)
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Center)
						.OnClicked(this,&SSectionClipRowWidget::BindButton_OnClickUp)
					]
				]
				+
				SVerticalBox::Slot().Padding(5).AutoHeight()
				[
					SNew(SBox)
					.HeightOverride(40)
					.WidthOverride(70)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						SAssignNew(SW_ButtonDown,SButton)
						.Text(FTF("下移"))
						.ButtonStyle(KuruColorStores::KawaiiDefaultButton)
						.ForegroundColor(KuruColorStores::KawaiiBlack)
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Center)
						.OnClicked(this,&SSectionClipRowWidget::BindButton_OnClickDown)
					]
				]
				+
				SVerticalBox::Slot().Padding(5).AutoHeight()
				[
					SNew(SBox)
					.HeightOverride(40)
					.WidthOverride(70)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						SAssignNew(SW_ButtonDelete,SButton)
						.Text(FTF("删除"))
						.ButtonStyle(KuruColorStores::KawaiiDefaultButton)
						.ForegroundColor(KuruColorStores::KawaiiBlack)
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Center)
						.OnClicked(this,&SSectionClipRowWidget::BindButton_OnClickDelete)
					]
				]
			]
			
			//时间轴面板相关
			+SHorizontalBox::Slot().Padding(30,10,10,10).VAlign(VAlign_Center).HAlign(HAlign_Fill).AutoWidth()
			[
				SNew(SVerticalBox)
				+
				SVerticalBox::Slot().Padding(5).AutoHeight()
				[
					SNew(SBox)
					.HeightOverride(60)
					.WidthOverride(150)
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						SAssignNew(SW_ButtonOpenTimelinePanel,SButton)
						.Text(FTF("打开时间轴面板"))
						.ButtonStyle(KuruColorStores::KawaiiDefaultButton)
						.ForegroundColor(KuruColorStores::KawaiiBlack)
						.VAlign(VAlign_Center)
						.HAlign(HAlign_Center)
						.OnClicked(this,&SSectionClipRowWidget::BindButton_OnClickOpenTimelinePanel)
					]
				]
			]
		]
	];

	BindRefreshProperty();
}

SSectionClipRowWidget::~SSectionClipRowWidget()
{
	if (mSectionEditorWidget)
	{
		mSectionEditorWidget->ChildWidgets.Remove(this);
	}
}

FString SSectionClipRowWidget::GetAttributeName(FName AttributeType)
{
	if (mEditingData == nullptr)
	{
		return "";
	}
	if (AttributeType == "Teller")
	{
		return mEditingData->Teller.ToString();
	}
	if (AttributeType == "Content")
	{
		return mEditingData->SimpleContent.ToString();
	}
	if (AttributeType == "Index")
	{
		return FString::FromInt(mEditingData->Number);
	}

	return "";
}

void SSectionClipRowWidget::Bind_OnEditingTeller(const FText& NewText, ETextCommit::Type CommitType)
{
	if (mEditingData && mEditingData->Parent)
	{
		const FScopedTransaction AddTaskTransaction(FText::FromString("Editing Name"));
		mEditingData->Parent->Modify();
		mEditingData->Teller = FName(NewText.ToString());
	}
}

void SSectionClipRowWidget::Bind_OnEditingContent(const FText& NewText, ETextCommit::Type CommitType)
{
	if (mEditingData && mEditingData->Parent)
	{
		const FScopedTransaction AddTaskTransaction(FText::FromString("Editing Content"));
		mEditingData->Parent->Modify();
		mEditingData->SimpleContent = FName(NewText.ToString());
	}
}

void SSectionClipRowWidget::BindRefreshProperty()
{
	if (mEditingData)
	{
		if (SW_Teller)
		{
			SW_Teller->SetText(FTFs(mEditingData->Teller.ToString()));
		}

		if (SW_Content)
		{
			SW_Content->SetText(FTFs(mEditingData->SimpleContent.ToString()));
		}

		if (ImageBrush && mEditingData && mEditingData->Texture2D)
		{
			ImageBrush->SetResourceObject(mEditingData->Texture2D);
			ImageBrush->TintColor = KuruColorStores::KawaiiWhite;
		}

		if(SW_Index){
			SW_Index->SetText(FTFs("#"+GetAttributeName(FName("Index"))));
		}
	}
}

FReply SSectionClipRowWidget::BindButton_OnClickUp()
{
	if (mSectionEditorWidget)
	{
		FReply Rep =  mSectionEditorWidget->ChildMoveUp(this);
		BindRefreshProperty();
		return Rep;
	}
	return FReply::Unhandled();
}

FReply SSectionClipRowWidget::BindButton_OnClickDown()
{
	if (mSectionEditorWidget)
	{
		FReply Rep =  mSectionEditorWidget->ChildMoveDown(this);
		BindRefreshProperty();
		return Rep;
	}
	return FReply::Unhandled();
}

FReply SSectionClipRowWidget::BindButton_OnClickDelete()
{
	if (mSectionEditorWidget)
	{
		FReply Rep =  mSectionEditorWidget->ChildDelete(this);
		BindRefreshProperty();
		return Rep;
	}
	return FReply::Unhandled();
}

FReply SSectionClipRowWidget::BindButton_OnClickOpenTimelinePanel()
{
	if (bOpenedTimePanel)
	{
		return FReply::Handled();
	}
	bOpenedTimePanel = true;
	TSharedRef<SWindow> NewWindow = SNew(SWindow)
	.Title(FTF("TimeEvent Editor"))
	.ClientSize(FVector2D(1600,1280))
	.SupportsMaximize(false)
	.SupportsMinimize(false)
	;

	mChildTimelineWidget = SNew(SClipTimelineWidget).EditingData(mEditingData)
		.ParentWidget(this);
	NewWindow->SetContent(
		mChildTimelineWidget.ToSharedRef()
		);

	NewWindow->SetOnWindowClosed(FOnWindowClosed::CreateLambda(
		[this](const TSharedRef<SWindow>& InWindow)
		{
			if (mChildTimelineWidget)
			{
				mChildTimelineWidget->OnUnregisterTabs();
			}
			bOpenedTimePanel =false;
		}));
	FSlateApplication::Get().AddWindow(NewWindow);

	return FReply::Handled();
}

FReply SSectionClipRowWidget::Bind_OnImageSelectButtonDown(const FGeometry& MyGeometry,
                                                           const FPointerEvent& MouseEvent)
{
	
		
	FAssetPickerConfig AssetPickerConfig;
	AssetPickerConfig.Filter.ClassPaths.Add(UTexture2D::StaticClass()->GetClassPathName());
	AssetPickerConfig.OnAssetSelected = FOnAssetSelected::CreateSP(this, &SSectionClipRowWidget::OnImageSelected);
	AssetPickerConfig.InitialAssetViewType = EAssetViewType::List; 
	AssetPickerConfig.SelectionMode = ESelectionMode::Single;
	AssetPickerConfig.bAllowDragging = true;
	
	FContentBrowserModule& ContentBrowserModule =
		FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	AssetPickerInstance = ContentBrowserModule.Get().CreateAssetPicker(AssetPickerConfig);

	FMenuBuilder MenuBuilder(true,nullptr);
	MenuBuilder.AddWidget(AssetPickerInstance.ToSharedRef(), FText::GetEmpty(),true);
	
	
	if (mSectionEditorWidget)
	{
		FSlateApplication::Get().PushMenu(
			mSectionEditorWidget->AsShared(),
			FWidgetPath(),
			MenuBuilder.MakeWidget(),
			FSlateApplication::Get().GetCursorPos(),
			FPopupTransitionEffect(FPopupTransitionEffect::ContextMenu));
	}
	return FReply::Handled();
}

void SSectionClipRowWidget::OnImageSelected(const FAssetData& AssetData)
{
	
	
	UTexture2D* SelectedTexture = Cast<UTexture2D>(AssetData.GetAsset());
	if (SelectedTexture)
	{
		ImageBrush->SetResourceObject(SelectedTexture);
		ImageBrush->TintColor = KuruColorStores::KawaiiWhite;
		SW_Image->SetImage(ImageBrush);
		if (mEditingData && mEditingData->Parent)
		{
			const FScopedTransaction AddTaskTransaction(FText::FromString("Change Image"));
			mEditingData->Parent->Modify();
			mEditingData->Texture2D = SelectedTexture;
		}
	}
	if (AssetPickerInstance){
		FSlateApplication::Get().DismissMenuByWidget(AssetPickerInstance.ToSharedRef());
	}

	bOpenedAssetPicker = false;
}

﻿#include "EIWidgetStore.h"

FSlateBrush* FEIWidgetStores::PinkBrush = nullptr;
FSlateBrush* FEIWidgetStores::BlueBrush = nullptr;
FSlateBrush* FEIWidgetStores::DeepPinkBrush = nullptr;
FSlateBrush* FEIWidgetStores::OrangeBrush = nullptr;
FSlateBrush* FEIWidgetStores::GrayBrush = nullptr;
FEditableTextBoxStyle* FEIWidgetStores::KawaiiTextBox = nullptr;
FScrollBoxStyle* FEIWidgetStores::KawaiiScrollBox = nullptr;
FScrollBarStyle* FEIWidgetStores::KawaiiScrollBar = nullptr;
FButtonStyle* FEIWidgetStores::KawaiiDefaultButton = nullptr;

void FEIWidgetStores::InitializeKuruStores()
{
	PinkBrush = new FSlateBrush();
	PinkBrush->TintColor = KawaiiPink;
	SetKawaiiRounded(PinkBrush);
	BlueBrush = new FSlateBrush();
	BlueBrush->TintColor = KawaiiBlue;
	SetKawaiiRounded(BlueBrush);
	DeepPinkBrush = new FSlateBrush();
	DeepPinkBrush->TintColor = DeepPink;
	SetKawaiiRounded(DeepPinkBrush);
	OrangeBrush = new FSlateBrush();
	OrangeBrush->TintColor = KawaiiOrange;
	SetKawaiiRounded(OrangeBrush);
	GrayBrush = new FSlateBrush();
	GrayBrush->TintColor = KawaiiGray;
	SetKawaiiRounded(GrayBrush);

	KawaiiTextBox = new FEditableTextBoxStyle();
	
	const FEditableTextBoxStyle* DefaultStyle = &FCoreStyle::Get().GetWidgetStyle<FEditableTextBoxStyle>
	("NormalEditableTextBox");
	*KawaiiTextBox = *DefaultStyle;
	KawaiiTextBox->BackgroundColor = DeepPink;
	KawaiiTextBox->ForegroundColor = KawaiiOrange;
	KawaiiTextBox->FocusedForegroundColor = KawaiiOrange;
	KawaiiTextBox->BackgroundImageNormal = *DeepPinkBrush;
	KawaiiTextBox->BackgroundImageFocused = *GrayBrush;
	KawaiiTextBox->BackgroundImageHovered = *PinkBrush;

	KawaiiScrollBox = new FScrollBoxStyle();
	*KawaiiScrollBox = FCoreStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox");
	KawaiiScrollBox->BottomShadowBrush.TintColor = KawaiiPink;
	KawaiiScrollBox->TopShadowBrush.TintColor = KawaiiPink;
	KawaiiScrollBox->LeftShadowBrush.TintColor = KawaiiPink;
	KawaiiScrollBox->RightShadowBrush.TintColor = KawaiiPink;

	KawaiiScrollBar = new FScrollBarStyle();
	*KawaiiScrollBar = FCoreStyle::Get().GetWidgetStyle<FScrollBarStyle>("ScrollBar");
	KawaiiScrollBar->NormalThumbImage.TintColor = DeepPink;
	KawaiiScrollBar->HoveredThumbImage.TintColor = KawaiiPink;
	KawaiiScrollBar->DraggedThumbImage.TintColor = KawaiiOrange;
	KawaiiScrollBar->HorizontalBackgroundImage.TintColor = KawaiiGray;
	KawaiiScrollBar->VerticalBackgroundImage.TintColor = KawaiiGray;
	KawaiiScrollBar->VerticalTopSlotImage.TintColor = KawaiiGray;
	KawaiiScrollBar->VerticalBottomSlotImage.TintColor = KawaiiGray;

	KawaiiDefaultButton = new FButtonStyle();
	*KawaiiDefaultButton = FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button");
	KawaiiDefaultButton->Disabled.TintColor = KawaiiGray;
	KawaiiDefaultButton->Normal.TintColor = DeepPink;
	KawaiiDefaultButton->Hovered.TintColor = KawaiiPink;
	KawaiiDefaultButton->Pressed.TintColor = DeepPink;
	KawaiiDefaultButton->NormalForeground = KawaiiBlack;
	KawaiiDefaultButton->PressedForeground = KawaiiBlack;
	KawaiiDefaultButton->HoveredForeground = KawaiiGray;
}

FButtonStyle FEIWidgetStores::GetButtonStyleFromColor(FLinearColor NormalColor, FLinearColor HoverColor,
                                                      FLinearColor PressedColor, FLinearColor DisabledColor)
{
	FButtonStyle Style =  FButtonStyle()
	.SetNormal(FSlateBrush())
	.SetHovered(FSlateBrush())
	.SetPressed(FSlateBrush())
	.SetDisabled(FSlateBrush());

	FSlateBrush NormalBrush;
	NormalBrush.TintColor = FSlateColor(NormalColor);
	FSlateBrush HoverBrush;
	HoverBrush.TintColor = FSlateColor(HoverColor);
	FSlateBrush PressedBrush;
	PressedBrush.TintColor = FSlateColor(PressedColor);
	FSlateBrush DisableBrush;
	NormalBrush.TintColor = FSlateColor(DisabledColor);

	Style.SetNormal(NormalBrush);
	Style.SetHovered(HoverBrush);
	Style.SetPressed(PressedBrush);
	Style.SetDisabled(DisableBrush);

	return Style;
}

void FEIWidgetStores::SetKawaiiRounded(FSlateBrush* Brush)
{
	check(Brush)
	Brush->DrawAs = ESlateBrushDrawType::RoundedBox;
	Brush->OutlineSettings.Width=1;
	Brush->OutlineSettings.CornerRadii=FVector4(15,15,15,15);
	Brush->OutlineSettings.RoundingType=ESlateBrushRoundingType::FixedRadius;
}
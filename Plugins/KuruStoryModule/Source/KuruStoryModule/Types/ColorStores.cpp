#include "ColorStores.h"

FButtonStyle KuruColorStores::GetButtonStyleFromColor(FLinearColor NormalColor, FLinearColor HoverColor,
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

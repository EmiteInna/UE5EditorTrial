#pragma once

class KuruColorStores
{
public:
	inline static const FLinearColor KawaiiPink =  FLinearColor(255./255.,207./255.,207./255.);
	inline static const FLinearColor DeepPink =  FLinearColor(198./255., 126./255.,126./255.);
	inline static const FLinearColor KawaiiBlue =  FLinearColor(153./255.,250./255.,255./255.);
	inline static const FLinearColor DeepBlue =  FLinearColor(6./255.,120./255.,172./255.);

	inline static FButtonStyle GetButtonStyleFromColor(FLinearColor NormalColor,
		FLinearColor HoverColor,
		FLinearColor PressedColor,
		FLinearColor DisabledColor);
};

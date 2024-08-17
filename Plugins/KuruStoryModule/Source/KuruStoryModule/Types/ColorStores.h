#pragma once

class KuruColorStores
{
public:
	static void InitializeKuruStores();
	
	inline static const FLinearColor KawaiiPink =  FLinearColor(255./255.,207./255.,207./255.);
	inline static const FLinearColor DeepPink =  FLinearColor(198./255., 126./255.,126./255.);
	inline static const FLinearColor KawaiiBlue =  FLinearColor(153./255.,250./255.,255./255.);
	inline static const FLinearColor DeepBlue =  FLinearColor(6./255.,120./255.,172./255.);
	inline static const FLinearColor KawaiiOrange =  FLinearColor(255./255.,132./255.,64./255.);
	inline static const FLinearColor KawaiiGray =  FLinearColor(207./255.,201./255.,202./255.);
	inline static const FLinearColor KawaiiBlack =  FLinearColor(13./255.,0./255.,0./255.);
	inline static const FLinearColor KawaiiWhite =  FLinearColor(255./255.,255./255.,255./255.);

	static FSlateBrush* PinkBrush;
	static FSlateBrush* BlueBrush;
	static FSlateBrush* DeepPinkBrush;
	static FSlateBrush* OrangeBrush;
	static FSlateBrush* GrayBrush;
	static FScrollBoxStyle* KawaiiScrollBox;
	static FScrollBarStyle* KawaiiScrollBar;
	static FButtonStyle* KawaiiDefaultButton;
	
	static FButtonStyle GetButtonStyleFromColor(FLinearColor NormalColor,
		FLinearColor HoverColor,
		FLinearColor PressedColor,
		FLinearColor DisabledColor);

	static FEditableTextBoxStyle* KawaiiTextBox;

	static void SetKawaiiRounded(FSlateBrush* Brush);
};

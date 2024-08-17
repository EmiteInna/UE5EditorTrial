#pragma once

class SImageSelectorWidget:public  SImage
{
public:
	SLATE_BEGIN_ARGS(SImageSelectorWidget){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	UTexture2D* SelectedImage = nullptr;

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
};

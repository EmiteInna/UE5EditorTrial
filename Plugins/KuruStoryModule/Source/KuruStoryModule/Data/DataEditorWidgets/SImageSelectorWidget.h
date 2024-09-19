#pragma once

class KURUSTORYMODULE_API SImageSelectorWidget:public  SImage
{
public:
	SLATE_BEGIN_ARGS(SImageSelectorWidget){}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

public:
	UTexture2D* SelectedImage = nullptr;

};

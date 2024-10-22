// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KuruStoryTypes.h"
#include "UObject/Object.h"
#include "KuruStoryClipData.generated.h"

class UStoryNotifyBase;
class UKuruStoryClipDataInstance;
class UKuruStorySectionData;


/**
 * 一句对话
 */
UCLASS(EditInlineNew)
class KURUSTORYRUNTIME_API UKuruStoryClipData : public UObject
{
    GENERATED_BODY()

public:
	UKuruStoryClipData();

	// 该Clip的序号，由编辑器动态生成，不用改
	UPROPERTY(VisibleAnywhere, Category="Story", DisplayName="序号")
	int Number = 0;

	// 该Clip的角色头像
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="头像")
	UTexture2D* Texture2D = nullptr;

	// 该Clip的说话者
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="说话者")
	FName Teller = "";

	// 该Clip的简单内容（所以说目前也没有complex内容啊）
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="内容")
	FName SimpleContent = "";

	// 该Clip的长度
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="总长度")
	double TotalLength = 10.;

	// 该Clip是否是一句话（需不需要生成引号）
	UPROPERTY(EditAnywhere, Category="Story", DisplayName="是否是一句对话")
	bool bIsOneDialog=true;

	// 是否关闭前一个对话框
	UPROPERTY(EditAnywhere,Category="Story", DisplayName="是否关闭前一个对话前景框")
	bool bClosePreviousDialogFrontPanel=true;

	// 是否打开前一个新对话框
	UPROPERTY(EditAnywhere,Category="Story", DisplayName="是否打开一个新的对话前景框")
	bool bOpenNewDialogFrontPanel=true;

	// 如果有值，该Clip不会自动结束，而是等待输入对应指令再结束。
	UPROPERTY(EditAnywhere,Category="Story", DisplayName="是否等待输入")
	TArray<TEnumAsByte<EStoryPanelOperation>> WaitForOperation;
	
	//有一说一，这个东西根本没必要暴露给编辑器，只是为了Export我们才这么做。
	UPROPERTY(VisibleAnywhere,Instanced, Category="Story", meta=(EditCondition="false",EditConditionHides))
	TArray<UStoryNotifyBase*> Notifies;
	
	UPROPERTY(EditAnywhere,Category="Hide",meta=(EditCondition="false",EditConditionHides))
	UKuruStorySectionData* Parent = nullptr;
	
	

};

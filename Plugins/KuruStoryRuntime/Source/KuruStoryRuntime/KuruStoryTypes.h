#pragma once

#include "KuruStoryTypes.generated.h"

UENUM(BlueprintType)
enum EStoryPanelOperation:uint8
{
	E_Invalid,//无效操作
	E_GotoNext,//单击下一句
	E_Chose,//进行选择
	E_Zoom,//进行快进
	E_ZoomExit,//退出快进
	E_HidePanel,//隐藏当前前景框
	E_ShowHistory,//显示历史
	E_QuickSave,//快速保存
	E_QuickLoad,//快速读取
};

﻿#pragma once

class FEITimelinerContext;
class UEINotifyItem;
/**
 * 会员制餐厅，靠UEINotifyItem的FName进行索引，触发调用的时候负责做出回调。
 * 必须重写的类之一。
 */
class EITIMELINER_API  FEINotifyLibrary
{
public:
	//负责注册
	virtual void Initialize();

	TWeakPtr<FEITimelinerContext> Context;
	
	//这个是用来建表的，也可以用来做description的索引，但尽量不要把操作的中心放在这里。
	TArray<TSharedPtr<UEINotifyItem>> NotifyItems;

	//不允许添加重复名称，返回true才说明添加成功，否则抛出错误喵。
	virtual bool RegisterNewNotifyItem(FName NotifyName, FString NotifyDescription);

	//尝试打开详细介绍面板。
	virtual FReply OnClickOpenNotifyDescriptionWindow(FName NotifyName);

	virtual FReply OnClickAddNotify(FName NotifyName);

	//当前所选中的Track序号
	int CurrentChosenTrackIndex = 0;

	virtual float GetCurrentChosenTrackStartTime()const{return 0;};
	virtual float GetCurrentChosenTrackEndTime()const{return 10;};
	virtual void SetCurrentChosenTrackStartTime(float newValue){};
	virtual void SetCurrentChosenTrackEndTime(float newValue){};
	virtual void SetClipTotalDuration(float newValue){};
	virtual FReply OnDeleteChosenNotify(){return FReply::Handled();};
};



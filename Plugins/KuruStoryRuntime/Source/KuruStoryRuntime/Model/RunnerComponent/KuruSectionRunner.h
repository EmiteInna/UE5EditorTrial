// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KuruSectionRunner.generated.h"


class UFrontGamePanelWidget;
class UStoryNotifyEventBase;
class UStoryNotifyBase;
class UKuruStoryClipData;
class UKuruStoryContext;
class UKuruStorySectionData;


/*
 * 记录Notify的运行时，时间尺度以WorldTime为准。
 */
USTRUCT()
struct FRunningNotifyData
{
	GENERATED_BODY()

	int index = -1;
	double StartTime = -1;
	double LastTickTime = 0;
	double EndTime = -1;
	bool bStarted = false;
	bool bEnded = false;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class KURUSTORYRUNTIME_API UKuruSectionRunner : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UKuruSectionRunner();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY()
	UKuruStoryContext* Context = nullptr;

#pragma region Resource
	/*
	 * 加载一个新的section，并将其加入到Context的队伍尾部。
	 */
	bool LoadNewSection(TSoftObjectPtr<UKuruStorySectionData> NewSectionData);

	/*
	 * 限制Section的数量，释放不需要的资源。
	 */
	void ManagerSectionList();
#pragma endregion

#pragma region SectionRunner

protected:
	UPROPERTY()
	UKuruStorySectionData* CurrentRunningSection = nullptr;
public:
	UKuruStorySectionData* GetCurrentRunningSection()const;

	void SetCurrentRunningSection(UKuruStorySectionData* SectionData);

	// 只允许放已经Set好的Section，如果还没Set的话自行Set
	void StartPlaySection(int StartClipIndex);
protected:
	/*
	 * 准备进行某个Section的运行。
	 * 原则上Section只是数据载体，并不具有逻辑，所以start，tick，end这些逻辑它是不具备的。
	 * 但是从数据层面上Section可以对Runner做一些初始化，所以放这了。
	 *
	 * 如果你是从途中加载进来这个Section，也需要调用这个。
	 */
	virtual void PrepareForRunningSection();

	int CurrentRunningClipIndex = 0;
	double CurrentClipStartTime = 0;
	double DeltaTimeScale = 1;
	//当前的Clip有没有经过第一次Tick，第一次Tick才算是真正开始。
	bool bCurrentClipFirstTicked = false;
	double StartPlayingWorldTime = 0;
	double CurrentWorldTime = 0;
	
	void ContinuePlayingClip();
	void PausePlayingClip();
	/*
	 * 初始化Clip，只是填装一下Clip的数据并且对里面的Notify进行初始化。
	 */
	virtual void InitializeClip(UKuruStoryClipData* Clip);

	/*
	 * 从生命周期的角度开始Clip。
	 */
	virtual void StartRunningClip(UKuruStoryClipData* Clip);

	/*
	 * 对Clip进行Tick。
	 */
	virtual void TickRunningClip(UKuruStoryClipData* Clip, float DeltaTime);

	/*
	 * 结束Clip。
	 */
	virtual void EndRunningClip(UKuruStoryClipData* Clip);

public:
	/*
	 * (播放)下一个Clip。
	 */
	virtual void ToNextClip(int NextClipId, bool bStart);

	virtual void ToCurrentNextClip(bool bStart);

	virtual bool ClipIndexAvailable(int ClipId);
	
protected:
	
	TArray<FRunningNotifyData> RunningNotifyDataArr;

	/*
	 * 将有生命周期的Notify加入到队列。
	 */
	void CreateRuntimeNotifies(UKuruStoryClipData* Clip);
	void StartNotifyRunning(UStoryNotifyEventBase* Notify, double Time);
	void InitializeNotify(UStoryNotifyBase* Notify, double Time);
	void TickNotify(UStoryNotifyEventBase* Notify,double DeltaTime,double Time);
	void EndNotify(UStoryNotifyEventBase* Notify ,double Time);
public:
	UKuruStoryClipData* GetCurrentRunningClipByCurrentIndex()const;
	UStoryNotifyBase* GetCurrentRunningNotify(int index)const;
	UStoryNotifyEventBase* GetCurrentRunningEventNotify(int index)const;
	double GetTime()const;

#pragma endregion

#pragma region Debug

	void TickDebugPrint(float DeltaTime);
#pragma endregion


	UFrontGamePanelWidget* GetFrontGamePanelWidget()const;
};



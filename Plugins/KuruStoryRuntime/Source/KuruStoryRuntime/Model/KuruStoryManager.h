// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "KuruStoryManager.generated.h"

class UKuruStoryContext;
class UDA_KuruStoryConfig;
/*
 * 用来管理故事系统的Manager，需要提前放在场景里，如果不放就说明该场景不需要这个系统。
 *
 * 原则上故事系统并不是需要很早初始化的系统，因此时序上比较自由，但如果经过迭代发现它需要遵循严格时序了，尽量用接口解决。
 * 就酱。
 * 
 */
UCLASS()
class KURUSTORYRUNTIME_API AKuruStoryManager : public AActor
{
	GENERATED_BODY()

public:
	AKuruStoryManager();

	//给一个Context，返回场景里的Manager
	static AKuruStoryManager* GetKuruStoryManager(const UObject* WorldContext);

protected:
	virtual void BeginPlay() override;

public:

	bool bInitializeFinished = false;
	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category="KuruStory")
	UDA_KuruStoryConfig* DefaultConfig = nullptr;

	UPROPERTY(VisibleAnywhere, Category="KuruStory")
	UKuruStoryContext* Context = nullptr;
};

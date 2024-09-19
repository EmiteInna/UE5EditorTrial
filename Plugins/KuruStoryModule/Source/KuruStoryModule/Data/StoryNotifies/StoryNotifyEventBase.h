#pragma once
#include "StoryNotifyBase.h"
#include "StoryNotifyEventBase.generated.h"

UCLASS()
class UStoryNotifyEventBase :public UStoryNotifyBase
{
	GENERATED_BODY()
public:
	virtual void Start(){}

	virtual void End(){}

	virtual void Tick(float DeltaTime){}

	
};

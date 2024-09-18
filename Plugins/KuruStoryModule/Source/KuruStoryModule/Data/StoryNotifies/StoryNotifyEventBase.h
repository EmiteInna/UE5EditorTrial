#pragma once
#include "StoryNotifyBase.h"
#include "StoryNotifyEventBase.generated.h"

USTRUCT()
struct FStoryNotifyEventBase :public FStoryNotifyBase
{
	GENERATED_BODY()
public:
	virtual void Start(){}

	virtual void End(){}

	virtual void Tick(float DeltaTime){}

	
};

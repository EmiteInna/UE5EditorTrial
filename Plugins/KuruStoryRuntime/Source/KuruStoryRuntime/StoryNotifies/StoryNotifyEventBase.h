#pragma once
#include "StoryNotifyBase.h"
#include "StoryNotifyEventBase.generated.h"

class UKuruStoryContext;

UCLASS()
class KURUSTORYRUNTIME_API UStoryNotifyEventBase :public UStoryNotifyBase
{
	GENERATED_BODY()
public:
	virtual void Start(UKuruStoryContext* Context,float Time){}

	virtual void End(UKuruStoryContext* Context,float Time){}

	virtual void Tick(UKuruStoryContext* Context, float DeltaTime,float Time){}

	
};

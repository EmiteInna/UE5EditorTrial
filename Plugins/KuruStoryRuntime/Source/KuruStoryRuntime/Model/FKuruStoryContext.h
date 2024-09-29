#pragma once

#include "FKuruStoryContext.generated.h"

class UMainGamePanelWidget;
class UKuruStorySectionData;
class UKuruStoryInputComponent;
class UKuruStoryAttributeSet;
class UKuruSectionRunner;
class UDA_KuruStoryConfig;

UCLASS()
class KURUSTORYRUNTIME_API UKuruStoryContext : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere,Category="KuruStory")
	UDA_KuruStoryConfig* Config = nullptr;

	UPROPERTY(VisibleAnywhere,Category="KuruStory")
	UKuruSectionRunner* SectionRunner = nullptr;

	UPROPERTY(VisibleAnywhere,Category="KuruStory")
	UKuruStoryAttributeSet* AttributeSet = nullptr;

	UPROPERTY(VisibleAnywhere,Category="KuruStory")
	UKuruStoryInputComponent* InputComponent = nullptr;

	UPROPERTY(VisibleAnywhere,Category="KuruStory")
	TArray<UKuruStorySectionData*> SectionDataStore;

	UPROPERTY(VisibleAnywhere,Category="KuruStory")
	UMainGamePanelWidget* GamePanel = nullptr;
};

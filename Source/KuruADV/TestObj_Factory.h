// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"

#include "TestObj_Factory.generated.h"

UCLASS()
class KURUADV_API UTestObj_Factory : public UFactory
{
    GENERATED_BODY()
public:
    UTestObj_Factory();
    virtual bool CanCreateNew() const override;
    virtual bool ShouldShowInNewMenu() const override;
    virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "TestObj_Factory.h"

#include "TestObj.h"

UTestObj_Factory::UTestObj_Factory()
{
    SupportedClass = UTestObj::StaticClass();
    bCreateNew = true;
}

bool UTestObj_Factory::CanCreateNew() const
{
    return true;
}

bool UTestObj_Factory::ShouldShowInNewMenu() const
{
    return true;
}

UObject* UTestObj_Factory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
    UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UTestObj>(InParent, InClass, InName, Flags);
}

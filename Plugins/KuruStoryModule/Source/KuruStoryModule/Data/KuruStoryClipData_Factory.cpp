// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStoryClipData_Factory.h"

#include "KuruStoryClipData.h"

UKuruStoryClipData_Factory::UKuruStoryClipData_Factory()
{
    SupportedClass = UKuruStoryClipData::StaticClass();
    bCreateNew = true;
}

bool UKuruStoryClipData_Factory::CanCreateNew() const
{
    return true;
}

bool UKuruStoryClipData_Factory::ShouldShowInNewMenu() const
{
    return true;
}

UObject* UKuruStoryClipData_Factory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
    UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UKuruStoryClipData>(InParent, InClass, InName, Flags);
}

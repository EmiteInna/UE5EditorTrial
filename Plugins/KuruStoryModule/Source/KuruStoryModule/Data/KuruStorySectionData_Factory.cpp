// Fill out your copyright notice in the Description page of Project Settings.


#include "KuruStorySectionData_Factory.h"

#include "KuruStorySectionData.h"

UKuruStorySectionData_Factory::UKuruStorySectionData_Factory()
{
    SupportedClass = UKuruStorySectionData::StaticClass();
    bCreateNew = true;
}

bool UKuruStorySectionData_Factory::CanCreateNew() const
{
    return true;
}

bool UKuruStorySectionData_Factory::ShouldShowInNewMenu() const
{
    return true;
}

UObject* UKuruStorySectionData_Factory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
    UObject* Context, FFeedbackContext* Warn)
{
    return NewObject<UKuruStorySectionData>(InParent, InClass, InName, Flags);
}

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/StoryNotifyEventBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryNotifyEventBase() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyBase();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UStoryNotifyEventBase::StaticRegisterNativesUStoryNotifyEventBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoryNotifyEventBase);
	UClass* Z_Construct_UClass_UStoryNotifyEventBase_NoRegister()
	{
		return UStoryNotifyEventBase::StaticClass();
	}
	struct Z_Construct_UClass_UStoryNotifyEventBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryNotifyEventBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyEventBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyEventBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StoryNotifies/StoryNotifyEventBase.h" },
		{ "ModuleRelativePath", "StoryNotifies/StoryNotifyEventBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryNotifyEventBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryNotifyEventBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoryNotifyEventBase_Statics::ClassParams = {
		&UStoryNotifyEventBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyEventBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStoryNotifyEventBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UStoryNotifyEventBase()
	{
		if (!Z_Registration_Info_UClass_UStoryNotifyEventBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoryNotifyEventBase.OuterSingleton, Z_Construct_UClass_UStoryNotifyEventBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStoryNotifyEventBase.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UStoryNotifyEventBase>()
	{
		return UStoryNotifyEventBase::StaticClass();
	}
	UStoryNotifyEventBase::UStoryNotifyEventBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryNotifyEventBase);
	UStoryNotifyEventBase::~UStoryNotifyEventBase() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_StoryNotifyEventBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_StoryNotifyEventBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStoryNotifyEventBase, UStoryNotifyEventBase::StaticClass, TEXT("UStoryNotifyEventBase"), &Z_Registration_Info_UClass_UStoryNotifyEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoryNotifyEventBase), 2372713641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_StoryNotifyEventBase_h_274276636(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_StoryNotifyEventBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_StoryNotifyEventBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/Model/RunnerComponent/KuruStoryAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryAttributeSet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryAttributeSet();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UKuruStoryAttributeSet::StaticRegisterNativesUKuruStoryAttributeSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryAttributeSet);
	UClass* Z_Construct_UClass_UKuruStoryAttributeSet_NoRegister()
	{
		return UKuruStoryAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryAttributeSet_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Model/RunnerComponent/KuruStoryAttributeSet.h" },
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruStoryAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryAttributeSet_Statics::ClassParams = {
		&UKuruStoryAttributeSet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryAttributeSet_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UKuruStoryAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryAttributeSet.OuterSingleton, Z_Construct_UClass_UKuruStoryAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryAttributeSet.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryAttributeSet>()
	{
		return UKuruStoryAttributeSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryAttributeSet);
	UKuruStoryAttributeSet::~UKuruStoryAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryAttributeSet, UKuruStoryAttributeSet::StaticClass, TEXT("UKuruStoryAttributeSet"), &Z_Registration_Info_UClass_UKuruStoryAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryAttributeSet), 1985864717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryAttributeSet_h_1533317904(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

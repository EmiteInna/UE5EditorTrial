// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/Model/RunnerComponent/KuruSectionRunner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruSectionRunner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruSectionRunner();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruSectionRunner_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryContext_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister();
	KURUSTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRunningNotifyData();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RunningNotifyData;
class UScriptStruct* FRunningNotifyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RunningNotifyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RunningNotifyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRunningNotifyData, (UObject*)Z_Construct_UPackage__Script_KuruStoryRuntime(), TEXT("RunningNotifyData"));
	}
	return Z_Registration_Info_UScriptStruct_RunningNotifyData.OuterSingleton;
}
template<> KURUSTORYRUNTIME_API UScriptStruct* StaticStruct<FRunningNotifyData>()
{
	return FRunningNotifyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRunningNotifyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRunningNotifyData_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xe8\xae\xb0\xe5\xbd\x95Notify\xe7\x9a\x84\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xef\xbc\x8c\xe6\x97\xb6\xe9\x97\xb4\xe5\xb0\xba\xe5\xba\xa6\xe4\xbb\xa5WorldTime\xe4\xb8\xba\xe5\x87\x86\xe3\x80\x82\n */" },
#endif
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruSectionRunner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe8\xae\xb0\xe5\xbd\x95Notify\xe7\x9a\x84\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xef\xbc\x8c\xe6\x97\xb6\xe9\x97\xb4\xe5\xb0\xba\xe5\xba\xa6\xe4\xbb\xa5WorldTime\xe4\xb8\xba\xe5\x87\x86\xe3\x80\x82" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FRunningNotifyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRunningNotifyData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRunningNotifyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
		nullptr,
		&NewStructOps,
		"RunningNotifyData",
		nullptr,
		0,
		sizeof(FRunningNotifyData),
		alignof(FRunningNotifyData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRunningNotifyData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRunningNotifyData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRunningNotifyData()
	{
		if (!Z_Registration_Info_UScriptStruct_RunningNotifyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RunningNotifyData.InnerSingleton, Z_Construct_UScriptStruct_FRunningNotifyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RunningNotifyData.InnerSingleton;
	}
	void UKuruSectionRunner::StaticRegisterNativesUKuruSectionRunner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruSectionRunner);
	UClass* Z_Construct_UClass_UKuruSectionRunner_NoRegister()
	{
		return UKuruSectionRunner::StaticClass();
	}
	struct Z_Construct_UClass_UKuruSectionRunner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRunningSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRunningSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruSectionRunner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruSectionRunner_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruSectionRunner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Model/RunnerComponent/KuruSectionRunner.h" },
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruSectionRunner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruSectionRunner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruSectionRunner, Context), Z_Construct_UClass_UKuruStoryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_Context_MetaData), Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_Context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_CurrentRunningSection_MetaData[] = {
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruSectionRunner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_CurrentRunningSection = { "CurrentRunningSection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruSectionRunner, CurrentRunningSection), Z_Construct_UClass_UKuruStorySectionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_CurrentRunningSection_MetaData), Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_CurrentRunningSection_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruSectionRunner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruSectionRunner_Statics::NewProp_CurrentRunningSection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruSectionRunner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruSectionRunner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruSectionRunner_Statics::ClassParams = {
		&UKuruSectionRunner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruSectionRunner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruSectionRunner_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruSectionRunner_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruSectionRunner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruSectionRunner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruSectionRunner()
	{
		if (!Z_Registration_Info_UClass_UKuruSectionRunner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruSectionRunner.OuterSingleton, Z_Construct_UClass_UKuruSectionRunner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruSectionRunner.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruSectionRunner>()
	{
		return UKuruSectionRunner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruSectionRunner);
	UKuruSectionRunner::~UKuruSectionRunner() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics::ScriptStructInfo[] = {
		{ FRunningNotifyData::StaticStruct, Z_Construct_UScriptStruct_FRunningNotifyData_Statics::NewStructOps, TEXT("RunningNotifyData"), &Z_Registration_Info_UScriptStruct_RunningNotifyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRunningNotifyData), 1018992461U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruSectionRunner, UKuruSectionRunner::StaticClass, TEXT("UKuruSectionRunner"), &Z_Registration_Info_UClass_UKuruSectionRunner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruSectionRunner), 2684180761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_2486053197(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruSectionRunner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

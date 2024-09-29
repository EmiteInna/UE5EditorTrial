// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/Model/KuruStoryManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_AKuruStoryManager();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_AKuruStoryManager_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UDA_KuruStoryConfig_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void AKuruStoryManager::StaticRegisterNativesAKuruStoryManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKuruStoryManager);
	UClass* Z_Construct_UClass_AKuruStoryManager_NoRegister()
	{
		return AKuruStoryManager::StaticClass();
	}
	struct Z_Construct_UClass_AKuruStoryManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKuruStoryManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \xe7\x94\xa8\xe6\x9d\xa5\xe7\xae\xa1\xe7\x90\x86\xe6\x95\x85\xe4\xba\x8b\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84Manager\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x8f\x90\xe5\x89\x8d\xe6\x94\xbe\xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe9\x87\x8c\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe6\x94\xbe\xe5\xb0\xb1\xe8\xaf\xb4\xe6\x98\x8e\xe8\xaf\xa5\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb3\xbb\xe7\xbb\x9f\xe3\x80\x82\n *\n * \xe5\x8e\x9f\xe5\x88\x99\xe4\xb8\x8a\xe6\x95\x85\xe4\xba\x8b\xe7\xb3\xbb\xe7\xbb\x9f\xe5\xb9\xb6\xe4\xb8\x8d\xe6\x98\xaf\xe9\x9c\x80\xe8\xa6\x81\xe5\xbe\x88\xe6\x97\xa9\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x9a\x84\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe6\x97\xb6\xe5\xba\x8f\xe4\xb8\x8a\xe6\xaf\x94\xe8\xbe\x83\xe8\x87\xaa\xe7\x94\xb1\xef\xbc\x8c\xe4\xbd\x86\xe5\xa6\x82\xe6\x9e\x9c\xe7\xbb\x8f\xe8\xbf\x87\xe8\xbf\xad\xe4\xbb\xa3\xe5\x8f\x91\xe7\x8e\xb0\xe5\xae\x83\xe9\x9c\x80\xe8\xa6\x81\xe9\x81\xb5\xe5\xbe\xaa\xe4\xb8\xa5\xe6\xa0\xbc\xe6\x97\xb6\xe5\xba\x8f\xe4\xba\x86\xef\xbc\x8c\xe5\xb0\xbd\xe9\x87\x8f\xe7\x94\xa8\xe6\x8e\xa5\xe5\x8f\xa3\xe8\xa7\xa3\xe5\x86\xb3\xe3\x80\x82\n * \xe5\xb0\xb1\xe9\x85\xb1\xe3\x80\x82\n * \n */" },
#endif
		{ "IncludePath", "Model/KuruStoryManager.h" },
		{ "ModuleRelativePath", "Model/KuruStoryManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* \xe7\x94\xa8\xe6\x9d\xa5\xe7\xae\xa1\xe7\x90\x86\xe6\x95\x85\xe4\xba\x8b\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x9a\x84Manager\xef\xbc\x8c\xe9\x9c\x80\xe8\xa6\x81\xe6\x8f\x90\xe5\x89\x8d\xe6\x94\xbe\xe5\x9c\xa8\xe5\x9c\xba\xe6\x99\xaf\xe9\x87\x8c\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\x8d\xe6\x94\xbe\xe5\xb0\xb1\xe8\xaf\xb4\xe6\x98\x8e\xe8\xaf\xa5\xe5\x9c\xba\xe6\x99\xaf\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x99\xe4\xb8\xaa\xe7\xb3\xbb\xe7\xbb\x9f\xe3\x80\x82\n*\n* \xe5\x8e\x9f\xe5\x88\x99\xe4\xb8\x8a\xe6\x95\x85\xe4\xba\x8b\xe7\xb3\xbb\xe7\xbb\x9f\xe5\xb9\xb6\xe4\xb8\x8d\xe6\x98\xaf\xe9\x9c\x80\xe8\xa6\x81\xe5\xbe\x88\xe6\x97\xa9\xe5\x88\x9d\xe5\xa7\x8b\xe5\x8c\x96\xe7\x9a\x84\xe7\xb3\xbb\xe7\xbb\x9f\xef\xbc\x8c\xe5\x9b\xa0\xe6\xad\xa4\xe6\x97\xb6\xe5\xba\x8f\xe4\xb8\x8a\xe6\xaf\x94\xe8\xbe\x83\xe8\x87\xaa\xe7\x94\xb1\xef\xbc\x8c\xe4\xbd\x86\xe5\xa6\x82\xe6\x9e\x9c\xe7\xbb\x8f\xe8\xbf\x87\xe8\xbf\xad\xe4\xbb\xa3\xe5\x8f\x91\xe7\x8e\xb0\xe5\xae\x83\xe9\x9c\x80\xe8\xa6\x81\xe9\x81\xb5\xe5\xbe\xaa\xe4\xb8\xa5\xe6\xa0\xbc\xe6\x97\xb6\xe5\xba\x8f\xe4\xba\x86\xef\xbc\x8c\xe5\xb0\xbd\xe9\x87\x8f\xe7\x94\xa8\xe6\x8e\xa5\xe5\x8f\xa3\xe8\xa7\xa3\xe5\x86\xb3\xe3\x80\x82\n* \xe5\xb0\xb1\xe9\x85\xb1\xe3\x80\x82" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_DefaultConfig_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "ModuleRelativePath", "Model/KuruStoryManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_DefaultConfig = { "DefaultConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKuruStoryManager, DefaultConfig), Z_Construct_UClass_UDA_KuruStoryConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_DefaultConfig_MetaData), Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_DefaultConfig_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "ModuleRelativePath", "Model/KuruStoryManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKuruStoryManager, Context), Z_Construct_UClass_UKuruStoryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_Context_MetaData), Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_Context_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKuruStoryManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_DefaultConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKuruStoryManager_Statics::NewProp_Context,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKuruStoryManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKuruStoryManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKuruStoryManager_Statics::ClassParams = {
		&AKuruStoryManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKuruStoryManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AKuruStoryManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AKuruStoryManager()
	{
		if (!Z_Registration_Info_UClass_AKuruStoryManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKuruStoryManager.OuterSingleton, Z_Construct_UClass_AKuruStoryManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKuruStoryManager.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<AKuruStoryManager>()
	{
		return AKuruStoryManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKuruStoryManager);
	AKuruStoryManager::~AKuruStoryManager() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_KuruStoryManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_KuruStoryManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKuruStoryManager, AKuruStoryManager::StaticClass, TEXT("AKuruStoryManager"), &Z_Registration_Info_UClass_AKuruStoryManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKuruStoryManager), 4250383308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_KuruStoryManager_h_20608765(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_KuruStoryManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_KuruStoryManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

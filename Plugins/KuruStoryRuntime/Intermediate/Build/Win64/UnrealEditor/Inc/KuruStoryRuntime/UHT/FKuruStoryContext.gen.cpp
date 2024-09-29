// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/Model/FKuruStoryContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFKuruStoryContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UDA_KuruStoryConfig_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruSectionRunner_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryAttributeSet_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryContext();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryContext_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryInputComponent_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UMainGamePanelWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UKuruStoryContext::StaticRegisterNativesUKuruStoryContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryContext);
	UClass* Z_Construct_UClass_UKuruStoryContext_NoRegister()
	{
		return UKuruStoryContext::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionRunner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionRunner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SectionDataStore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionDataStore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionDataStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GamePanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Model/FKuruStoryContext.h" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryContext, Config), Z_Construct_UClass_UDA_KuruStoryConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_Config_MetaData), Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_Config_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionRunner_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionRunner = { "SectionRunner", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryContext, SectionRunner), Z_Construct_UClass_UKuruSectionRunner_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionRunner_MetaData), Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionRunner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryContext, AttributeSet), Z_Construct_UClass_UKuruStoryAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_AttributeSet_MetaData), Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_AttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryContext, InputComponent), Z_Construct_UClass_UKuruStoryInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_InputComponent_MetaData), Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_InputComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore_Inner = { "SectionDataStore", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UKuruStorySectionData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore = { "SectionDataStore", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryContext, SectionDataStore), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore_MetaData), Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_GamePanel_MetaData[] = {
		{ "Category", "KuruStory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Model/FKuruStoryContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_GamePanel = { "GamePanel", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryContext, GamePanel), Z_Construct_UClass_UMainGamePanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_GamePanel_MetaData), Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_GamePanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionRunner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_AttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_SectionDataStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryContext_Statics::NewProp_GamePanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryContext_Statics::ClassParams = {
		&UKuruStoryContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryContext_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryContext_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryContext()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryContext.OuterSingleton, Z_Construct_UClass_UKuruStoryContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryContext.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryContext>()
	{
		return UKuruStoryContext::StaticClass();
	}
	UKuruStoryContext::UKuruStoryContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryContext);
	UKuruStoryContext::~UKuruStoryContext() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_FKuruStoryContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_FKuruStoryContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryContext, UKuruStoryContext::StaticClass, TEXT("UKuruStoryContext"), &Z_Registration_Info_UClass_UKuruStoryContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryContext), 2739718705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_FKuruStoryContext_h_1601064570(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_FKuruStoryContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_FKuruStoryContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

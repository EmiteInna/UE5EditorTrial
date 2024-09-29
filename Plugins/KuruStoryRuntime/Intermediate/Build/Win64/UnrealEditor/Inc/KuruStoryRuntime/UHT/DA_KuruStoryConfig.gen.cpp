// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/Model/DA_KuruStoryConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDA_KuruStoryConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UDA_KuruStoryConfig();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UDA_KuruStoryConfig_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UMainGamePanelWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UDA_KuruStoryConfig::StaticRegisterNativesUDA_KuruStoryConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDA_KuruStoryConfig);
	UClass* Z_Construct_UClass_UDA_KuruStoryConfig_NoRegister()
	{
		return UDA_KuruStoryConfig::StaticClass();
	}
	struct Z_Construct_UClass_UDA_KuruStoryConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSectionKeep_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSectionKeep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IMC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IMC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePanelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GamePanelClass;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SectionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDA_KuruStoryConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_KuruStoryConfig_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Model/DA_KuruStoryConfig.h" },
		{ "ModuleRelativePath", "Model/DA_KuruStoryConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_MaxSectionKeep_MetaData[] = {
		{ "Category", "DA_KuruStoryConfig" },
		{ "DisplayName", "\xe6\x9c\x80\xe5\xa4\xa7\xe4\xbf\x9d\xe5\xad\x98Section\xe4\xb8\xaa\xe6\x95\xb0" },
		{ "ModuleRelativePath", "Model/DA_KuruStoryConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_MaxSectionKeep = { "MaxSectionKeep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_KuruStoryConfig, MaxSectionKeep), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_MaxSectionKeep_MetaData), Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_MaxSectionKeep_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_IMC_MetaData[] = {
		{ "Category", "DA_KuruStoryConfig" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe9\x94\xae\xe4\xbd\x8d\xe8\xbe\x93\xe5\x85\xa5" },
		{ "ModuleRelativePath", "Model/DA_KuruStoryConfig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_IMC = { "IMC", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_KuruStoryConfig, IMC), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_IMC_MetaData), Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_IMC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_GamePanelClass_MetaData[] = {
		{ "Category", "DA_KuruStoryConfig" },
		{ "DisplayName", "\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84GamePanel" },
		{ "ModuleRelativePath", "Model/DA_KuruStoryConfig.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_GamePanelClass = { "GamePanelClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_KuruStoryConfig, GamePanelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMainGamePanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_GamePanelClass_MetaData), Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_GamePanelClass_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData_Inner = { "SectionData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UKuruStorySectionData_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData_MetaData[] = {
		{ "Category", "DA_KuruStoryConfig" },
		{ "DisplayName", "\xe6\xb5\x8b\xe8\xaf\x95\xe7\x94\xa8Sections" },
		{ "ModuleRelativePath", "Model/DA_KuruStoryConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData = { "SectionData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDA_KuruStoryConfig, SectionData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData_MetaData), Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDA_KuruStoryConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_MaxSectionKeep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_IMC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_GamePanelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDA_KuruStoryConfig_Statics::NewProp_SectionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDA_KuruStoryConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDA_KuruStoryConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDA_KuruStoryConfig_Statics::ClassParams = {
		&UDA_KuruStoryConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDA_KuruStoryConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDA_KuruStoryConfig_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDA_KuruStoryConfig_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDA_KuruStoryConfig()
	{
		if (!Z_Registration_Info_UClass_UDA_KuruStoryConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDA_KuruStoryConfig.OuterSingleton, Z_Construct_UClass_UDA_KuruStoryConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDA_KuruStoryConfig.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UDA_KuruStoryConfig>()
	{
		return UDA_KuruStoryConfig::StaticClass();
	}
	UDA_KuruStoryConfig::UDA_KuruStoryConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDA_KuruStoryConfig);
	UDA_KuruStoryConfig::~UDA_KuruStoryConfig() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_DA_KuruStoryConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_DA_KuruStoryConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDA_KuruStoryConfig, UDA_KuruStoryConfig::StaticClass, TEXT("UDA_KuruStoryConfig"), &Z_Registration_Info_UClass_UDA_KuruStoryConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDA_KuruStoryConfig), 280798116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_DA_KuruStoryConfig_h_183022901(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_DA_KuruStoryConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_DA_KuruStoryConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

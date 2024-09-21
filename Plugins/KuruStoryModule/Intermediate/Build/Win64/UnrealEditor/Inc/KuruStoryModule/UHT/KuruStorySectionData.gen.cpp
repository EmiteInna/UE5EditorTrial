// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/KuruStorySectionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStorySectionData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipData_NoRegister();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStorySectionData();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	void UKuruStorySectionData::StaticRegisterNativesUKuruStorySectionData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStorySectionData);
	UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister()
	{
		return UKuruStorySectionData::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStorySectionData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipDatas_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ClipDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClipDatas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorUID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorUID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStorySectionData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStorySectionData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe4\xb8\x80\xe6\xae\xb5\xe5\xaf\xb9\xe8\xaf\x9d\n */" },
#endif
		{ "IncludePath", "Data/KuruStorySectionData.h" },
		{ "ModuleRelativePath", "Data/KuruStorySectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe6\xae\xb5\xe5\xaf\xb9\xe8\xaf\x9d" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStorySectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStorySectionData, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_Title_MetaData), Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_Inner_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//1\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Data/KuruStorySectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_Inner = { "ClipDatas", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UKuruStoryClipData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_Inner_MetaData), Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//1\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Data/KuruStorySectionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas = { "ClipDatas", nullptr, (EPropertyFlags)0x0010008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStorySectionData, ClipDatas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_MetaData), Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_EditorUID_MetaData[] = {
		{ "ModuleRelativePath", "Data/KuruStorySectionData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_EditorUID = { "EditorUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStorySectionData, EditorUID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_EditorUID_MetaData), Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_EditorUID_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStorySectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_ClipDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStorySectionData_Statics::NewProp_EditorUID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStorySectionData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStorySectionData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStorySectionData_Statics::ClassParams = {
		&UKuruStorySectionData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStorySectionData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStorySectionData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStorySectionData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStorySectionData()
	{
		if (!Z_Registration_Info_UClass_UKuruStorySectionData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStorySectionData.OuterSingleton, Z_Construct_UClass_UKuruStorySectionData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStorySectionData.OuterSingleton;
	}
	template<> KURUSTORYMODULE_API UClass* StaticClass<UKuruStorySectionData>()
	{
		return UKuruStorySectionData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStorySectionData);
	UKuruStorySectionData::~UKuruStorySectionData() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStorySectionData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStorySectionData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStorySectionData, UKuruStorySectionData::StaticClass, TEXT("UKuruStorySectionData"), &Z_Registration_Info_UClass_UKuruStorySectionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStorySectionData), 1104933986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStorySectionData_h_55840494(TEXT("/Script/KuruStoryModule"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStorySectionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStorySectionData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

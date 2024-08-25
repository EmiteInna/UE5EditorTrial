// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/KuruStoryClipData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryClipData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipData();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipData_NoRegister();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	void UKuruStoryClipData::StaticRegisterNativesUKuruStoryClipData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryClipData);
	UClass* Z_Construct_UClass_UKuruStoryClipData_NoRegister()
	{
		return UKuruStoryClipData::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryClipData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Teller_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Teller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleContent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SimpleContent;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_EditableItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditableItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditableItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryClipData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d\n */" },
#endif
		{ "IncludePath", "Data/KuruStoryClipData.h" },
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//0\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "0" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//1\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//2\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller = { "Teller", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Teller), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//3\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "3" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent = { "SimpleContent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, SimpleContent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent_MetaData) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems_Inner = { "EditableItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//4\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "4" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems = { "EditableItems", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, EditableItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//5\n" },
#endif
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "5" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength = { "TotalLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, TotalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Hide" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//no need to serialize\n" },
#endif
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Data/KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "no need to serialize" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Parent), Z_Construct_UClass_UKuruStorySectionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_EditableItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryClipData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryClipData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryClipData_Statics::ClassParams = {
		&UKuruStoryClipData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryClipData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryClipData()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryClipData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryClipData.OuterSingleton, Z_Construct_UClass_UKuruStoryClipData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryClipData.OuterSingleton;
	}
	template<> KURUSTORYMODULE_API UClass* StaticClass<UKuruStoryClipData>()
	{
		return UKuruStoryClipData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryClipData);
	UKuruStoryClipData::~UKuruStoryClipData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UKuruStoryClipData)
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryClipData, UKuruStoryClipData::StaticClass, TEXT("UKuruStoryClipData"), &Z_Registration_Info_UClass_UKuruStoryClipData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryClipData), 1794041305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_h_3674603088(TEXT("/Script/KuruStoryModule"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

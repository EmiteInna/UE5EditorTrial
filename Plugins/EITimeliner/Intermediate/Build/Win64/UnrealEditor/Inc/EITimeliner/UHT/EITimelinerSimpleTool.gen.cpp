// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EITimeliner/Private/Tools/EITimelinerSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEITimelinerSimpleTool() {}
// Cross Module References
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerSimpleTool();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerSimpleTool_NoRegister();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerSimpleToolBuilder();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerSimpleToolBuilder_NoRegister();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerSimpleToolProperties();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerSimpleToolProperties_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	UPackage* Z_Construct_UPackage__Script_EITimeliner();
// End Cross Module References
	void UEITimelinerSimpleToolBuilder::StaticRegisterNativesUEITimelinerSimpleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerSimpleToolBuilder);
	UClass* Z_Construct_UClass_UEITimelinerSimpleToolBuilder_NoRegister()
	{
		return UEITimelinerSimpleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UEITimelinerSimpleTool\n */" },
#endif
		{ "IncludePath", "Tools/EITimelinerSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UEITimelinerSimpleTool" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerSimpleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::ClassParams = {
		&UEITimelinerSimpleToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEITimelinerSimpleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerSimpleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UEITimelinerSimpleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerSimpleToolBuilder.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerSimpleToolBuilder>()
	{
		return UEITimelinerSimpleToolBuilder::StaticClass();
	}
	UEITimelinerSimpleToolBuilder::UEITimelinerSimpleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerSimpleToolBuilder);
	UEITimelinerSimpleToolBuilder::~UEITimelinerSimpleToolBuilder() {}
	void UEITimelinerSimpleToolProperties::StaticRegisterNativesUEITimelinerSimpleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerSimpleToolProperties);
	UClass* Z_Construct_UClass_UEITimelinerSimpleToolProperties_NoRegister()
	{
		return UEITimelinerSimpleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[];
#endif
		static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings UObject for UEITimelinerSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
#endif
		{ "IncludePath", "Tools/EITimelinerSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings UObject for UEITimelinerSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
#endif
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
#endif
	};
#endif
	void Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
	{
		((UEITimelinerSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEITimelinerSimpleToolProperties), &Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData), Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerSimpleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::ClassParams = {
		&UEITimelinerSimpleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEITimelinerSimpleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerSimpleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UEITimelinerSimpleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerSimpleToolProperties.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerSimpleToolProperties>()
	{
		return UEITimelinerSimpleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerSimpleToolProperties);
	UEITimelinerSimpleToolProperties::~UEITimelinerSimpleToolProperties() {}
	void UEITimelinerSimpleTool::StaticRegisterNativesUEITimelinerSimpleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerSimpleTool);
	UClass* Z_Construct_UClass_UEITimelinerSimpleTool_NoRegister()
	{
		return UEITimelinerSimpleTool::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerSimpleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEITimelinerSimpleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleTool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerSimpleTool_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UEITimelinerSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
#endif
		{ "IncludePath", "Tools/EITimelinerSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UEITimelinerSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerSimpleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/EITimelinerSimpleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEITimelinerSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEITimelinerSimpleTool, Properties), Z_Construct_UClass_UEITimelinerSimpleToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleTool_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UEITimelinerSimpleTool_Statics::NewProp_Properties_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEITimelinerSimpleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEITimelinerSimpleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerSimpleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerSimpleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerSimpleTool_Statics::ClassParams = {
		&UEITimelinerSimpleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEITimelinerSimpleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerSimpleTool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerSimpleTool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEITimelinerSimpleTool()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerSimpleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerSimpleTool.OuterSingleton, Z_Construct_UClass_UEITimelinerSimpleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerSimpleTool.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerSimpleTool>()
	{
		return UEITimelinerSimpleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerSimpleTool);
	UEITimelinerSimpleTool::~UEITimelinerSimpleTool() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerSimpleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerSimpleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEITimelinerSimpleToolBuilder, UEITimelinerSimpleToolBuilder::StaticClass, TEXT("UEITimelinerSimpleToolBuilder"), &Z_Registration_Info_UClass_UEITimelinerSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerSimpleToolBuilder), 2802470381U) },
		{ Z_Construct_UClass_UEITimelinerSimpleToolProperties, UEITimelinerSimpleToolProperties::StaticClass, TEXT("UEITimelinerSimpleToolProperties"), &Z_Registration_Info_UClass_UEITimelinerSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerSimpleToolProperties), 2490658954U) },
		{ Z_Construct_UClass_UEITimelinerSimpleTool, UEITimelinerSimpleTool::StaticClass, TEXT("UEITimelinerSimpleTool"), &Z_Registration_Info_UClass_UEITimelinerSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerSimpleTool), 3272069540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerSimpleTool_h_2845165165(TEXT("/Script/EITimeliner"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerSimpleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

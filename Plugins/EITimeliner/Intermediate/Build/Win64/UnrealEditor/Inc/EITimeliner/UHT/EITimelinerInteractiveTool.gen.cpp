// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EITimeliner/Private/Tools/EITimelinerInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEITimelinerInteractiveTool() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerInteractiveTool();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerInteractiveTool_NoRegister();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerInteractiveToolBuilder();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_NoRegister();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerInteractiveToolProperties();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerInteractiveToolProperties_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_EITimeliner();
// End Cross Module References
	void UEITimelinerInteractiveToolBuilder::StaticRegisterNativesUEITimelinerInteractiveToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerInteractiveToolBuilder);
	UClass* Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_NoRegister()
	{
		return UEITimelinerInteractiveToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UEITimelinerInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/EITimelinerInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UEITimelinerInteractiveTool" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerInteractiveToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::ClassParams = {
		&UEITimelinerInteractiveToolBuilder::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEITimelinerInteractiveToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerInteractiveToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UEITimelinerInteractiveToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerInteractiveToolBuilder.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerInteractiveToolBuilder>()
	{
		return UEITimelinerInteractiveToolBuilder::StaticClass();
	}
	UEITimelinerInteractiveToolBuilder::UEITimelinerInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerInteractiveToolBuilder);
	UEITimelinerInteractiveToolBuilder::~UEITimelinerInteractiveToolBuilder() {}
	void UEITimelinerInteractiveToolProperties::StaticRegisterNativesUEITimelinerInteractiveToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerInteractiveToolProperties);
	UClass* Z_Construct_UClass_UEITimelinerInteractiveToolProperties_NoRegister()
	{
		return UEITimelinerInteractiveToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Property set for the UEITimelinerInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/EITimelinerInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property set for the UEITimelinerInteractiveTool" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First point of measurement" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEITimelinerInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData), Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_StartPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Second point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second point of measurement" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEITimelinerInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData), Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_EndPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current distance measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current distance measurement" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEITimelinerInteractiveToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_Distance_MetaData), Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_Distance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::NewProp_Distance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerInteractiveToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::ClassParams = {
		&UEITimelinerInteractiveToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEITimelinerInteractiveToolProperties()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerInteractiveToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UEITimelinerInteractiveToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerInteractiveToolProperties.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerInteractiveToolProperties>()
	{
		return UEITimelinerInteractiveToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerInteractiveToolProperties);
	UEITimelinerInteractiveToolProperties::~UEITimelinerInteractiveToolProperties() {}
	void UEITimelinerInteractiveTool::StaticRegisterNativesUEITimelinerInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerInteractiveTool);
	UClass* Z_Construct_UClass_UEITimelinerInteractiveTool_NoRegister()
	{
		return UEITimelinerInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerInteractiveTool_Statics
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
	UObject* (*const Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UEITimelinerInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
#endif
		{ "IncludePath", "Tools/EITimelinerInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UEITimelinerInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the tool are stored here */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/EITimelinerInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the tool are stored here" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEITimelinerInteractiveTool, Properties), Z_Construct_UClass_UEITimelinerInteractiveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::NewProp_Properties_MetaData), Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::NewProp_Properties_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::ClassParams = {
		&UEITimelinerInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEITimelinerInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerInteractiveTool.OuterSingleton, Z_Construct_UClass_UEITimelinerInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerInteractiveTool.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerInteractiveTool>()
	{
		return UEITimelinerInteractiveTool::StaticClass();
	}
	UEITimelinerInteractiveTool::UEITimelinerInteractiveTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerInteractiveTool);
	UEITimelinerInteractiveTool::~UEITimelinerInteractiveTool() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerInteractiveTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerInteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEITimelinerInteractiveToolBuilder, UEITimelinerInteractiveToolBuilder::StaticClass, TEXT("UEITimelinerInteractiveToolBuilder"), &Z_Registration_Info_UClass_UEITimelinerInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerInteractiveToolBuilder), 2672838691U) },
		{ Z_Construct_UClass_UEITimelinerInteractiveToolProperties, UEITimelinerInteractiveToolProperties::StaticClass, TEXT("UEITimelinerInteractiveToolProperties"), &Z_Registration_Info_UClass_UEITimelinerInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerInteractiveToolProperties), 2329830700U) },
		{ Z_Construct_UClass_UEITimelinerInteractiveTool, UEITimelinerInteractiveTool::StaticClass, TEXT("UEITimelinerInteractiveTool"), &Z_Registration_Info_UClass_UEITimelinerInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerInteractiveTool), 2072337293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerInteractiveTool_h_4230996489(TEXT("/Script/EITimeliner"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Private_Tools_EITimelinerInteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EITimeliner/Public/EITimelinerEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEITimelinerEditorMode() {}
// Cross Module References
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerEditorMode();
	EITIMELINER_API UClass* Z_Construct_UClass_UEITimelinerEditorMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UPackage* Z_Construct_UPackage__Script_EITimeliner();
// End Cross Module References
	void UEITimelinerEditorMode::StaticRegisterNativesUEITimelinerEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEITimelinerEditorMode);
	UClass* Z_Construct_UClass_UEITimelinerEditorMode_NoRegister()
	{
		return UEITimelinerEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UEITimelinerEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEITimelinerEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_EITimeliner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerEditorMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEITimelinerEditorMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
#endif
		{ "IncludePath", "EITimelinerEditorMode.h" },
		{ "ModuleRelativePath", "Public/EITimelinerEditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEITimelinerEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEITimelinerEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEITimelinerEditorMode_Statics::ClassParams = {
		&UEITimelinerEditorMode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEITimelinerEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEITimelinerEditorMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEITimelinerEditorMode()
	{
		if (!Z_Registration_Info_UClass_UEITimelinerEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEITimelinerEditorMode.OuterSingleton, Z_Construct_UClass_UEITimelinerEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEITimelinerEditorMode.OuterSingleton;
	}
	template<> EITIMELINER_API UClass* StaticClass<UEITimelinerEditorMode>()
	{
		return UEITimelinerEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEITimelinerEditorMode);
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Public_EITimelinerEditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Public_EITimelinerEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEITimelinerEditorMode, UEITimelinerEditorMode::StaticClass, TEXT("UEITimelinerEditorMode"), &Z_Registration_Info_UClass_UEITimelinerEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEITimelinerEditorMode), 1121004476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Public_EITimelinerEditorMode_h_3123956830(TEXT("/Script/EITimeliner"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Public_EITimelinerEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_EITimeliner_Source_EITimeliner_Public_EITimelinerEditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

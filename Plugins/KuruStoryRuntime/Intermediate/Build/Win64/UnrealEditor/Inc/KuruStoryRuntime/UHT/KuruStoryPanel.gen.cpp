// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/KuruStoryPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryPanel() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryPanel();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryPanel_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryWidgets();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UKuruStoryPanel::StaticRegisterNativesUKuruStoryPanel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryPanel);
	UClass* Z_Construct_UClass_UKuruStoryPanel_NoRegister()
	{
		return UKuruStoryPanel::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Panel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Panel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKuruStoryWidgets,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryPanel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryPanel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/KuruStoryPanel.h" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryPanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryPanel_Statics::NewProp_Panel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryPanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryPanel_Statics::NewProp_Panel = { "Panel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryPanel, Panel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryPanel_Statics::NewProp_Panel_MetaData), Z_Construct_UClass_UKuruStoryPanel_Statics::NewProp_Panel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryPanel_Statics::NewProp_Panel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryPanel_Statics::ClassParams = {
		&UKuruStoryPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryPanel_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryPanel_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryPanel_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryPanel_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryPanel()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryPanel.OuterSingleton, Z_Construct_UClass_UKuruStoryPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryPanel.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryPanel>()
	{
		return UKuruStoryPanel::StaticClass();
	}
	UKuruStoryPanel::UKuruStoryPanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryPanel);
	UKuruStoryPanel::~UKuruStoryPanel() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryPanel, UKuruStoryPanel::StaticClass, TEXT("UKuruStoryPanel"), &Z_Registration_Info_UClass_UKuruStoryPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryPanel), 1139770043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryPanel_h_1278257602(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

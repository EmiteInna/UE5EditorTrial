// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/MainGamePanelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGamePanelWidget() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UFrontGamePanelWidget_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryPanel();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UMainGamePanelWidget();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UMainGamePanelWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UMainGamePanelWidget::StaticRegisterNativesUMainGamePanelWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainGamePanelWidget);
	UClass* Z_Construct_UClass_UMainGamePanelWidget_NoRegister()
	{
		return UMainGamePanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMainGamePanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontGamePanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontGamePanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainGamePanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKuruStoryPanel,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGamePanelWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGamePanelWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/MainGamePanelWidget.h" },
		{ "ModuleRelativePath", "RuntimeWidgets/MainGamePanelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainGamePanelWidget_Statics::NewProp_FrontGamePanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/MainGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainGamePanelWidget_Statics::NewProp_FrontGamePanel = { "FrontGamePanel", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainGamePanelWidget, FrontGamePanel), Z_Construct_UClass_UFrontGamePanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGamePanelWidget_Statics::NewProp_FrontGamePanel_MetaData), Z_Construct_UClass_UMainGamePanelWidget_Statics::NewProp_FrontGamePanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainGamePanelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainGamePanelWidget_Statics::NewProp_FrontGamePanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainGamePanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGamePanelWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainGamePanelWidget_Statics::ClassParams = {
		&UMainGamePanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainGamePanelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainGamePanelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGamePanelWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainGamePanelWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGamePanelWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UMainGamePanelWidget()
	{
		if (!Z_Registration_Info_UClass_UMainGamePanelWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainGamePanelWidget.OuterSingleton, Z_Construct_UClass_UMainGamePanelWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainGamePanelWidget.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UMainGamePanelWidget>()
	{
		return UMainGamePanelWidget::StaticClass();
	}
	UMainGamePanelWidget::UMainGamePanelWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGamePanelWidget);
	UMainGamePanelWidget::~UMainGamePanelWidget() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_MainGamePanelWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_MainGamePanelWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainGamePanelWidget, UMainGamePanelWidget::StaticClass, TEXT("UMainGamePanelWidget"), &Z_Registration_Info_UClass_UMainGamePanelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainGamePanelWidget), 571202312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_MainGamePanelWidget_h_3990276725(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_MainGamePanelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_MainGamePanelWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

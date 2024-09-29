// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/KuruStoryButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryButton() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryButton();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryButton_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryWidgets();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UKuruStoryButton::StaticRegisterNativesUKuruStoryButton()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryButton);
	UClass* Z_Construct_UClass_UKuruStoryButton_NoRegister()
	{
		return UKuruStoryButton::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKuruStoryWidgets,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryButton_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryButton_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/KuruStoryButton.h" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryButton.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryButton_Statics::NewProp_Button_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryButton.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryButton_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryButton, Button), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryButton_Statics::NewProp_Button_MetaData), Z_Construct_UClass_UKuruStoryButton_Statics::NewProp_Button_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryButton_Statics::NewProp_Button,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryButton>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryButton_Statics::ClassParams = {
		&UKuruStoryButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryButton_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryButton_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryButton()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryButton.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryButton.OuterSingleton, Z_Construct_UClass_UKuruStoryButton_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryButton.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryButton>()
	{
		return UKuruStoryButton::StaticClass();
	}
	UKuruStoryButton::UKuruStoryButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryButton);
	UKuruStoryButton::~UKuruStoryButton() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryButton_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryButton_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryButton, UKuruStoryButton::StaticClass, TEXT("UKuruStoryButton"), &Z_Registration_Info_UClass_UKuruStoryButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryButton), 3411283108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryButton_h_894257784(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryButton_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

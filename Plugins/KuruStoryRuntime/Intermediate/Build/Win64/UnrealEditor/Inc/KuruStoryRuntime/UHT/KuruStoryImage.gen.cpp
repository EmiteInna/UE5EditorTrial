// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/KuruStoryImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryImage() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryImage();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryImage_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryWidgets();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UKuruStoryImage::StaticRegisterNativesUKuruStoryImage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryImage);
	UClass* Z_Construct_UClass_UKuruStoryImage_NoRegister()
	{
		return UKuruStoryImage::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKuruStoryWidgets,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryImage_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryImage_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/KuruStoryImage.h" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryImage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryImage_Statics::NewProp_Image_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryImage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryImage_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryImage, Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryImage_Statics::NewProp_Image_MetaData), Z_Construct_UClass_UKuruStoryImage_Statics::NewProp_Image_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryImage_Statics::NewProp_Image,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryImage_Statics::ClassParams = {
		&UKuruStoryImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryImage_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryImage_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryImage_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryImage()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryImage.OuterSingleton, Z_Construct_UClass_UKuruStoryImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryImage.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryImage>()
	{
		return UKuruStoryImage::StaticClass();
	}
	UKuruStoryImage::UKuruStoryImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryImage);
	UKuruStoryImage::~UKuruStoryImage() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryImage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryImage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryImage, UKuruStoryImage::StaticClass, TEXT("UKuruStoryImage"), &Z_Registration_Info_UClass_UKuruStoryImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryImage), 1021748314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryImage_h_3124800710(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryImage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/KuruStoryPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_AKuruStoryPawn();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_AKuruStoryPawn_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void AKuruStoryPawn::StaticRegisterNativesAKuruStoryPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKuruStoryPawn);
	UClass* Z_Construct_UClass_AKuruStoryPawn_NoRegister()
	{
		return AKuruStoryPawn::StaticClass();
	}
	struct Z_Construct_UClass_AKuruStoryPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EIC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EIC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKuruStoryPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "KuruStoryPawn.h" },
		{ "ModuleRelativePath", "KuruStoryPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_EIC_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KuruStoryPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_EIC = { "EIC", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKuruStoryPawn, EIC), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_EIC_MetaData), Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_EIC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_mContext_MetaData[] = {
		{ "ModuleRelativePath", "KuruStoryPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_mContext = { "mContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKuruStoryPawn, mContext), Z_Construct_UClass_UKuruStoryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_mContext_MetaData), Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_mContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKuruStoryPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_EIC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKuruStoryPawn_Statics::NewProp_mContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKuruStoryPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKuruStoryPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKuruStoryPawn_Statics::ClassParams = {
		&AKuruStoryPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKuruStoryPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AKuruStoryPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AKuruStoryPawn()
	{
		if (!Z_Registration_Info_UClass_AKuruStoryPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKuruStoryPawn.OuterSingleton, Z_Construct_UClass_AKuruStoryPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKuruStoryPawn.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<AKuruStoryPawn>()
	{
		return AKuruStoryPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKuruStoryPawn);
	AKuruStoryPawn::~AKuruStoryPawn() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKuruStoryPawn, AKuruStoryPawn::StaticClass, TEXT("AKuruStoryPawn"), &Z_Registration_Info_UClass_AKuruStoryPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKuruStoryPawn), 1336220482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryPawn_h_4240135826(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

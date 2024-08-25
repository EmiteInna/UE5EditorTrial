// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/Runtime/KuruStoryClipEditorExecutor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryClipEditorExecutor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_AKuruStoryClipEditorExecutor();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_AKuruStoryClipEditorExecutor_NoRegister();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipDataInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	void AKuruStoryClipEditorExecutor::StaticRegisterNativesAKuruStoryClipEditorExecutor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKuruStoryClipEditorExecutor);
	UClass* Z_Construct_UClass_AKuruStoryClipEditorExecutor_NoRegister()
	{
		return AKuruStoryClipEditorExecutor::StaticClass();
	}
	struct Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayingInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/Runtime/KuruStoryClipEditorExecutor.h" },
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipEditorExecutor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_PlayingInstance_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipEditorExecutor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_PlayingInstance = { "PlayingInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKuruStoryClipEditorExecutor, PlayingInstance), Z_Construct_UClass_UKuruStoryClipDataInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_PlayingInstance_MetaData), Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_PlayingInstance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipEditorExecutor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AKuruStoryClipEditorExecutor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_PlayingInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKuruStoryClipEditorExecutor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::ClassParams = {
		&AKuruStoryClipEditorExecutor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::Class_MetaDataParams), Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AKuruStoryClipEditorExecutor()
	{
		if (!Z_Registration_Info_UClass_AKuruStoryClipEditorExecutor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKuruStoryClipEditorExecutor.OuterSingleton, Z_Construct_UClass_AKuruStoryClipEditorExecutor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKuruStoryClipEditorExecutor.OuterSingleton;
	}
	template<> KURUSTORYMODULE_API UClass* StaticClass<AKuruStoryClipEditorExecutor>()
	{
		return AKuruStoryClipEditorExecutor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKuruStoryClipEditorExecutor);
	AKuruStoryClipEditorExecutor::~AKuruStoryClipEditorExecutor() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipEditorExecutor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipEditorExecutor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKuruStoryClipEditorExecutor, AKuruStoryClipEditorExecutor::StaticClass, TEXT("AKuruStoryClipEditorExecutor"), &Z_Registration_Info_UClass_AKuruStoryClipEditorExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKuruStoryClipEditorExecutor), 1889311962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipEditorExecutor_h_1277858966(TEXT("/Script/KuruStoryModule"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipEditorExecutor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipEditorExecutor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

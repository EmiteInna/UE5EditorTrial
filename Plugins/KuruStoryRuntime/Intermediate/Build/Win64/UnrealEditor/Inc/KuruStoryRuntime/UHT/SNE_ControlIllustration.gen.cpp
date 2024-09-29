// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ControlIllustration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_ControlIllustration() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ControlIllustration();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ControlIllustration_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_ControlIllustration::StaticRegisterNativesUSNE_ControlIllustration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_ControlIllustration);
	UClass* Z_Construct_UClass_USNE_ControlIllustration_NoRegister()
	{
		return USNE_ControlIllustration::StaticClass();
	}
	struct Z_Construct_UClass_USNE_ControlIllustration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransformTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_ControlIllustration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ControlIllustration_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_ControlIllustration.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ControlIllustration.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98Name" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ControlIllustration.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ControlIllustration, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_CharacterName_MetaData), Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_CharacterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe5\x8f\x98\xe6\x8d\xa2" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ControlIllustration.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ControlIllustration, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_Transform_MetaData), Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_TransformTime_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe5\x8f\x98\xe6\x8d\xa2\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ControlIllustration.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_TransformTime = { "TransformTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ControlIllustration, TransformTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_TransformTime_MetaData), Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_TransformTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_ControlIllustration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ControlIllustration_Statics::NewProp_TransformTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_ControlIllustration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_ControlIllustration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_ControlIllustration_Statics::ClassParams = {
		&USNE_ControlIllustration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_ControlIllustration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_ControlIllustration_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ControlIllustration_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_ControlIllustration()
	{
		if (!Z_Registration_Info_UClass_USNE_ControlIllustration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_ControlIllustration.OuterSingleton, Z_Construct_UClass_USNE_ControlIllustration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_ControlIllustration.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_ControlIllustration>()
	{
		return USNE_ControlIllustration::StaticClass();
	}
	USNE_ControlIllustration::USNE_ControlIllustration() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_ControlIllustration);
	USNE_ControlIllustration::~USNE_ControlIllustration() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ControlIllustration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ControlIllustration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_ControlIllustration, USNE_ControlIllustration::StaticClass, TEXT("USNE_ControlIllustration"), &Z_Registration_Info_UClass_USNE_ControlIllustration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_ControlIllustration), 1298587011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ControlIllustration_h_3687526374(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ControlIllustration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ControlIllustration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

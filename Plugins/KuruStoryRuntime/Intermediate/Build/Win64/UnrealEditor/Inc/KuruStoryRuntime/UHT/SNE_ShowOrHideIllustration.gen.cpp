// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ShowOrHideIllustration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_ShowOrHideIllustration() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ShowOrHideIllustration();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ShowOrHideIllustration_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_ShowOrHideIllustration::StaticRegisterNativesUSNE_ShowOrHideIllustration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_ShowOrHideIllustration);
	UClass* Z_Construct_UClass_USNE_ShowOrHideIllustration_NoRegister()
	{
		return USNE_ShowOrHideIllustration::StaticClass();
	}
	struct Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShow_MetaData[];
#endif
		static void NewProp_bIsShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_ShowOrHideIllustration.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowOrHideIllustration.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98Name" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowOrHideIllustration.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ShowOrHideIllustration, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_CharacterName_MetaData), Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_CharacterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe6\x98\xbe\xe7\xa4\xba" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowOrHideIllustration.h" },
	};
#endif
	void Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow_SetBit(void* Obj)
	{
		((USNE_ShowOrHideIllustration*)Obj)->bIsShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow = { "bIsShow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USNE_ShowOrHideIllustration), &Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow_MetaData), Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe8\xbf\x87\xe6\xb8\xa1\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowOrHideIllustration.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ShowOrHideIllustration, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_BlendTime_MetaData), Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_BlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_bIsShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::NewProp_BlendTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_ShowOrHideIllustration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::ClassParams = {
		&USNE_ShowOrHideIllustration::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_ShowOrHideIllustration()
	{
		if (!Z_Registration_Info_UClass_USNE_ShowOrHideIllustration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_ShowOrHideIllustration.OuterSingleton, Z_Construct_UClass_USNE_ShowOrHideIllustration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_ShowOrHideIllustration.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_ShowOrHideIllustration>()
	{
		return USNE_ShowOrHideIllustration::StaticClass();
	}
	USNE_ShowOrHideIllustration::USNE_ShowOrHideIllustration() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_ShowOrHideIllustration);
	USNE_ShowOrHideIllustration::~USNE_ShowOrHideIllustration() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowOrHideIllustration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowOrHideIllustration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_ShowOrHideIllustration, USNE_ShowOrHideIllustration::StaticClass, TEXT("USNE_ShowOrHideIllustration"), &Z_Registration_Info_UClass_USNE_ShowOrHideIllustration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_ShowOrHideIllustration), 3723845388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowOrHideIllustration_h_730436487(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowOrHideIllustration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowOrHideIllustration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

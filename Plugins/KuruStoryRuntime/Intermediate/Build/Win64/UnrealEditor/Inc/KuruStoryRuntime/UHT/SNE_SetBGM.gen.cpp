// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_SetBGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_SetBGM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_SetBGM();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_SetBGM_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_SetBGM::StaticRegisterNativesUSNE_SetBGM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_SetBGM);
	UClass* Z_Construct_UClass_USNE_SetBGM_NoRegister()
	{
		return USNE_SetBGM::StaticClass();
	}
	struct Z_Construct_UClass_USNE_SetBGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BGM_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BGM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBGMTitle_MetaData[];
#endif
		static void NewProp_bShowBGMTitle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBGMTitle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_SetBGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetBGM_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_SetBGM.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetBGM.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BGM_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe9\x9f\xb3\xe9\xa2\x91" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetBGM.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BGM = { "BGM", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_SetBGM, BGM), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BGM_MetaData), Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BGM_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BlendInTime_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\xb7\xa1\xe5\x85\xa5\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetBGM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_SetBGM, BlendInTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BlendInTime_MetaData), Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BlendInTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xbe\xe7\xa4\xba\xe6\xa0\x87\xe9\xa2\x98" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetBGM.h" },
	};
#endif
	void Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle_SetBit(void* Obj)
	{
		((USNE_SetBGM*)Obj)->bShowBGMTitle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle = { "bShowBGMTitle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USNE_SetBGM), &Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle_MetaData), Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_SetBGM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BGM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_BlendInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_SetBGM_Statics::NewProp_bShowBGMTitle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_SetBGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_SetBGM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_SetBGM_Statics::ClassParams = {
		&USNE_SetBGM::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_SetBGM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_SetBGM_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetBGM_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_SetBGM()
	{
		if (!Z_Registration_Info_UClass_USNE_SetBGM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_SetBGM.OuterSingleton, Z_Construct_UClass_USNE_SetBGM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_SetBGM.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_SetBGM>()
	{
		return USNE_SetBGM::StaticClass();
	}
	USNE_SetBGM::USNE_SetBGM() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_SetBGM);
	USNE_SetBGM::~USNE_SetBGM() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetBGM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetBGM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_SetBGM, USNE_SetBGM::StaticClass, TEXT("USNE_SetBGM"), &Z_Registration_Info_UClass_USNE_SetBGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_SetBGM), 3204333792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetBGM_h_3191272824(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetBGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetBGM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_SetIllustrationEmotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_SetIllustrationEmotion() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_SetIllustrationEmotion();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_SetIllustrationEmotion_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_SetIllustrationEmotion::StaticRegisterNativesUSNE_SetIllustrationEmotion()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_SetIllustrationEmotion);
	UClass* Z_Construct_UClass_USNE_SetIllustrationEmotion_NoRegister()
	{
		return USNE_SetIllustrationEmotion::StaticClass();
	}
	struct Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmotionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmotionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_SetIllustrationEmotion.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetIllustrationEmotion.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_CharacterName_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe7\xab\x8b\xe7\xbb\x98Name" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetIllustrationEmotion.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_SetIllustrationEmotion, CharacterName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_CharacterName_MetaData), Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_CharacterName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_EmotionName_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe5\xb7\xae\xe5\x88\x86\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetIllustrationEmotion.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_EmotionName = { "EmotionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_SetIllustrationEmotion, EmotionName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_EmotionName_MetaData), Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_EmotionName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe8\xbf\x87\xe6\xb8\xa1\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_SetIllustrationEmotion.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_SetIllustrationEmotion, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_BlendTime_MetaData), Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_BlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_CharacterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_EmotionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::NewProp_BlendTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_SetIllustrationEmotion>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::ClassParams = {
		&USNE_SetIllustrationEmotion::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_SetIllustrationEmotion()
	{
		if (!Z_Registration_Info_UClass_USNE_SetIllustrationEmotion.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_SetIllustrationEmotion.OuterSingleton, Z_Construct_UClass_USNE_SetIllustrationEmotion_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_SetIllustrationEmotion.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_SetIllustrationEmotion>()
	{
		return USNE_SetIllustrationEmotion::StaticClass();
	}
	USNE_SetIllustrationEmotion::USNE_SetIllustrationEmotion() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_SetIllustrationEmotion);
	USNE_SetIllustrationEmotion::~USNE_SetIllustrationEmotion() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetIllustrationEmotion_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetIllustrationEmotion_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_SetIllustrationEmotion, USNE_SetIllustrationEmotion::StaticClass, TEXT("USNE_SetIllustrationEmotion"), &Z_Registration_Info_UClass_USNE_SetIllustrationEmotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_SetIllustrationEmotion), 870840737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetIllustrationEmotion_h_1874875188(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetIllustrationEmotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_SetIllustrationEmotion_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

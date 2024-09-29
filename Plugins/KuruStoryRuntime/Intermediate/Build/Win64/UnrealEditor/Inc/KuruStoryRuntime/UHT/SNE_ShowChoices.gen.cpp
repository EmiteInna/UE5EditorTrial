// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ShowChoices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_ShowChoices() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ShowChoices();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ShowChoices_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_ShowChoices::StaticRegisterNativesUSNE_ShowChoices()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_ShowChoices);
	UClass* Z_Construct_UClass_USNE_ShowChoices_NoRegister()
	{
		return USNE_ShowChoices::StaticClass();
	}
	struct Z_Construct_UClass_USNE_ShowChoices_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChoiseNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChoiseNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChoiseNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_ShowChoices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowChoices_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowChoices_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_ShowChoices.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowChoices.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames_Inner = { "ChoiseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe9\x80\x89\xe9\xa1\xb9\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowChoices.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames = { "ChoiseNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ShowChoices, ChoiseNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames_MetaData), Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe8\xbf\x87\xe6\xb8\xa1\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ShowChoices.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ShowChoices, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_BlendTime_MetaData), Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_BlendTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_ShowChoices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_ChoiseNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ShowChoices_Statics::NewProp_BlendTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_ShowChoices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_ShowChoices>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_ShowChoices_Statics::ClassParams = {
		&USNE_ShowChoices::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_ShowChoices_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowChoices_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowChoices_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_ShowChoices_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ShowChoices_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_ShowChoices()
	{
		if (!Z_Registration_Info_UClass_USNE_ShowChoices.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_ShowChoices.OuterSingleton, Z_Construct_UClass_USNE_ShowChoices_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_ShowChoices.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_ShowChoices>()
	{
		return USNE_ShowChoices::StaticClass();
	}
	USNE_ShowChoices::USNE_ShowChoices() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_ShowChoices);
	USNE_ShowChoices::~USNE_ShowChoices() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowChoices_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowChoices_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_ShowChoices, USNE_ShowChoices::StaticClass, TEXT("USNE_ShowChoices"), &Z_Registration_Info_UClass_USNE_ShowChoices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_ShowChoices), 381767642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowChoices_h_1564775966(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowChoices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ShowChoices_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

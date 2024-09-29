// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_LinkTo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_LinkTo() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_LinkTo();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_LinkTo_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_LinkTo::StaticRegisterNativesUSNE_LinkTo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_LinkTo);
	UClass* Z_Construct_UClass_USNE_LinkTo_NoRegister()
	{
		return USNE_LinkTo::StaticClass();
	}
	struct Z_Construct_UClass_USNE_LinkTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinkToNext_MetaData[];
#endif
		static void NewProp_bLinkToNext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkToNext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Links_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Links_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Links;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_LinkTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_LinkTo_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_LinkTo_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x9c\xa8\xe8\xaf\xa5""Clip\xe7\xbb\x93\xe6\x9d\x9f\xe4\xb9\x8b\xe5\x90\x8e\xef\xbc\x8c\xe8\xb7\xb3\xe8\xbd\xac\xe5\x88\xb0\xe5\x8f\xa6\xe4\xb8\x80\xe4\xb8\xaa""Clip\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_LinkTo.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_LinkTo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe8\xaf\xa5""Clip\xe7\xbb\x93\xe6\x9d\x9f\xe4\xb9\x8b\xe5\x90\x8e\xef\xbc\x8c\xe8\xb7\xb3\xe8\xbd\xac\xe5\x88\xb0\xe5\x8f\xa6\xe4\xb8\x80\xe4\xb8\xaa""Clip\xe3\x80\x82" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe7\x9b\xb4\xe6\x8e\xa5Link\xe5\x88\xb0\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_LinkTo.h" },
	};
#endif
	void Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext_SetBit(void* Obj)
	{
		((USNE_LinkTo*)Obj)->bLinkToNext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext = { "bLinkToNext", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USNE_LinkTo), &Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext_MetaData), Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_ValueProp = { "Links", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_Key_KeyProp = { "Links_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "Link\xe6\x96\xb9\xe5\xbc\x8f" },
		{ "EditCondition", "!bLinkToNext" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_LinkTo.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_LinkTo, Links), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_MetaData), Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_LinkTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_bLinkToNext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_LinkTo_Statics::NewProp_Links,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_LinkTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_LinkTo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_LinkTo_Statics::ClassParams = {
		&USNE_LinkTo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_LinkTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_LinkTo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_LinkTo_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_LinkTo_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_LinkTo_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_LinkTo()
	{
		if (!Z_Registration_Info_UClass_USNE_LinkTo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_LinkTo.OuterSingleton, Z_Construct_UClass_USNE_LinkTo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_LinkTo.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_LinkTo>()
	{
		return USNE_LinkTo::StaticClass();
	}
	USNE_LinkTo::USNE_LinkTo() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_LinkTo);
	USNE_LinkTo::~USNE_LinkTo() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_LinkTo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_LinkTo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_LinkTo, USNE_LinkTo::StaticClass, TEXT("USNE_LinkTo"), &Z_Registration_Info_UClass_USNE_LinkTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_LinkTo), 2476919774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_LinkTo_h_692124633(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_LinkTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_LinkTo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

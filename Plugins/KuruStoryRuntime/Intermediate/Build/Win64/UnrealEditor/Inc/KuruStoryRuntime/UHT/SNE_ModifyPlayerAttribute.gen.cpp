// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_ModifyPlayerAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_ModifyPlayerAttribute() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ModifyPlayerAttribute();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_ModifyPlayerAttribute_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_ModifyPlayerAttribute::StaticRegisterNativesUSNE_ModifyPlayerAttribute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_ModifyPlayerAttribute);
	UClass* Z_Construct_UClass_USNE_ModifyPlayerAttribute_NoRegister()
	{
		return USNE_ModifyPlayerAttribute::StaticClass();
	}
	struct Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDelta_MetaData[];
#endif
		static void NewProp_bIsDelta_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AttributeName_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe5\xb1\x9e\xe6\x80\xa7" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ModifyPlayerAttribute, AttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AttributeName_MetaData), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AttributeName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x8f\x98\xe5\x8c\x96" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
	void Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta_SetBit(void* Obj)
	{
		((USNE_ModifyPlayerAttribute*)Obj)->bIsDelta = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta = { "bIsDelta", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USNE_ModifyPlayerAttribute), &Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta_MetaData), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe8\xae\xbe\xe7\xbd\xae" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
	void Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((USNE_ModifyPlayerAttribute*)Obj)->bIsSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USNE_ModifyPlayerAttribute), &Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet_MetaData), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe8\xbf\x87\xe6\xb8\xa1\xe6\x97\xb6\xe9\x97\xb4" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ModifyPlayerAttribute, BlendTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_BlendTime_MetaData), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_BlendTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_DeltaValue_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe5\x8f\x98\xe5\x8c\x96\xe6\x95\xb0\xe5\x80\xbc" },
		{ "EditCondition", "bIsDelta" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_DeltaValue = { "DeltaValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ModifyPlayerAttribute, DeltaValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_DeltaValue_MetaData), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_DeltaValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AbsoluteValue_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe8\xae\xbe\xe7\xbd\xae\xe6\x95\xb0\xe5\x80\xbc" },
		{ "EditCondition", "bIsSet" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_ModifyPlayerAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AbsoluteValue = { "AbsoluteValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_ModifyPlayerAttribute, AbsoluteValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AbsoluteValue_MetaData), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AbsoluteValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_bIsSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_BlendTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_DeltaValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::NewProp_AbsoluteValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_ModifyPlayerAttribute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::ClassParams = {
		&USNE_ModifyPlayerAttribute::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_ModifyPlayerAttribute()
	{
		if (!Z_Registration_Info_UClass_USNE_ModifyPlayerAttribute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_ModifyPlayerAttribute.OuterSingleton, Z_Construct_UClass_USNE_ModifyPlayerAttribute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_ModifyPlayerAttribute.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_ModifyPlayerAttribute>()
	{
		return USNE_ModifyPlayerAttribute::StaticClass();
	}
	USNE_ModifyPlayerAttribute::USNE_ModifyPlayerAttribute() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_ModifyPlayerAttribute);
	USNE_ModifyPlayerAttribute::~USNE_ModifyPlayerAttribute() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ModifyPlayerAttribute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ModifyPlayerAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_ModifyPlayerAttribute, USNE_ModifyPlayerAttribute::StaticClass, TEXT("USNE_ModifyPlayerAttribute"), &Z_Registration_Info_UClass_USNE_ModifyPlayerAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_ModifyPlayerAttribute), 2480347229U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ModifyPlayerAttribute_h_213063523(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ModifyPlayerAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_ModifyPlayerAttribute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

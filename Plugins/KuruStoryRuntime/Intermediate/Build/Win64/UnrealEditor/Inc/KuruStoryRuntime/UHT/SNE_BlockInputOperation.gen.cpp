// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_BlockInputOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_BlockInputOperation() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_BlockInputOperation();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_BlockInputOperation_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	KURUSTORYRUNTIME_API UEnum* Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_BlockInputOperation::StaticRegisterNativesUSNE_BlockInputOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_BlockInputOperation);
	UClass* Z_Construct_UClass_USNE_BlockInputOperation_NoRegister()
	{
		return USNE_BlockInputOperation::StaticClass();
	}
	struct Z_Construct_UClass_USNE_BlockInputOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Operations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_BlockInputOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_BlockInputOperation_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_BlockInputOperation_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x9c\xa8\xe8\xaf\xa5Notify\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xe4\xb9\x8b\xe5\x86\x85\xef\xbc\x8c\xe7\xa6\x81\xe7\x94\xa8\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_BlockInputOperation.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_BlockInputOperation.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe8\xaf\xa5Notify\xe7\x9a\x84\xe6\x8c\x81\xe7\xbb\xad\xe6\x97\xb6\xe9\x97\xb4\xe4\xb9\x8b\xe5\x86\x85\xef\xbc\x8c\xe7\xa6\x81\xe7\x94\xa8\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe6\x93\x8d\xe4\xbd\x9c\xe3\x80\x82" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation, METADATA_PARAMS(0, nullptr) }; // 2695915994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x93\x8d\xe4\xbd\x9c\xe5\x90\x8d\xe7\xa7\xb0" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_BlockInputOperation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_BlockInputOperation, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations_MetaData), Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations_MetaData) }; // 2695915994
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_BlockInputOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_BlockInputOperation_Statics::NewProp_Operations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_BlockInputOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_BlockInputOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_BlockInputOperation_Statics::ClassParams = {
		&USNE_BlockInputOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_BlockInputOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_BlockInputOperation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_BlockInputOperation_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_BlockInputOperation_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_BlockInputOperation_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_BlockInputOperation()
	{
		if (!Z_Registration_Info_UClass_USNE_BlockInputOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_BlockInputOperation.OuterSingleton, Z_Construct_UClass_USNE_BlockInputOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_BlockInputOperation.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_BlockInputOperation>()
	{
		return USNE_BlockInputOperation::StaticClass();
	}
	USNE_BlockInputOperation::USNE_BlockInputOperation() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_BlockInputOperation);
	USNE_BlockInputOperation::~USNE_BlockInputOperation() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_BlockInputOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_BlockInputOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_BlockInputOperation, USNE_BlockInputOperation::StaticClass, TEXT("USNE_BlockInputOperation"), &Z_Registration_Info_UClass_USNE_BlockInputOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_BlockInputOperation), 4165352890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_BlockInputOperation_h_3138352385(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_BlockInputOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_BlockInputOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

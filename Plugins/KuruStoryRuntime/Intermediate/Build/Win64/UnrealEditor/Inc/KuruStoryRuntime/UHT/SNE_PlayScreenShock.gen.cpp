// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_PlayScreenShock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_PlayScreenShock() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_PlayScreenShock();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_PlayScreenShock_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_PlayScreenShock::StaticRegisterNativesUSNE_PlayScreenShock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_PlayScreenShock);
	UClass* Z_Construct_UClass_USNE_PlayScreenShock_NoRegister()
	{
		return USNE_PlayScreenShock::StaticClass();
	}
	struct Z_Construct_UClass_USNE_PlayScreenShock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_PlayScreenShock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlayScreenShock_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlayScreenShock_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_PlayScreenShock.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlayScreenShock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_PlayScreenShock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_PlayScreenShock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_PlayScreenShock_Statics::ClassParams = {
		&USNE_PlayScreenShock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlayScreenShock_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_PlayScreenShock_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USNE_PlayScreenShock()
	{
		if (!Z_Registration_Info_UClass_USNE_PlayScreenShock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_PlayScreenShock.OuterSingleton, Z_Construct_UClass_USNE_PlayScreenShock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_PlayScreenShock.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_PlayScreenShock>()
	{
		return USNE_PlayScreenShock::StaticClass();
	}
	USNE_PlayScreenShock::USNE_PlayScreenShock() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_PlayScreenShock);
	USNE_PlayScreenShock::~USNE_PlayScreenShock() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlayScreenShock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlayScreenShock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_PlayScreenShock, USNE_PlayScreenShock::StaticClass, TEXT("USNE_PlayScreenShock"), &Z_Registration_Info_UClass_USNE_PlayScreenShock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_PlayScreenShock), 1478165433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlayScreenShock_h_3957378714(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlayScreenShock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlayScreenShock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/KuruStoryClipData_Factory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryClipData_Factory() {}
// Cross Module References
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipData_Factory();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipData_Factory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	void UKuruStoryClipData_Factory::StaticRegisterNativesUKuruStoryClipData_Factory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryClipData_Factory);
	UClass* Z_Construct_UClass_UKuruStoryClipData_Factory_NoRegister()
	{
		return UKuruStoryClipData_Factory::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryClipData_Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Data/KuruStoryClipData_Factory.h" },
		{ "ModuleRelativePath", "Data/KuruStoryClipData_Factory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryClipData_Factory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::ClassParams = {
		&UKuruStoryClipData_Factory::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UKuruStoryClipData_Factory()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryClipData_Factory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryClipData_Factory.OuterSingleton, Z_Construct_UClass_UKuruStoryClipData_Factory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryClipData_Factory.OuterSingleton;
	}
	template<> KURUSTORYMODULE_API UClass* StaticClass<UKuruStoryClipData_Factory>()
	{
		return UKuruStoryClipData_Factory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryClipData_Factory);
	UKuruStoryClipData_Factory::~UKuruStoryClipData_Factory() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_Factory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_Factory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryClipData_Factory, UKuruStoryClipData_Factory::StaticClass, TEXT("UKuruStoryClipData_Factory"), &Z_Registration_Info_UClass_UKuruStoryClipData_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryClipData_Factory), 2771299922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_Factory_h_3503880385(TEXT("/Script/KuruStoryModule"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_Factory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_KuruStoryClipData_Factory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

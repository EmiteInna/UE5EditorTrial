// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/StoryNotifies/StoryNotifyEventBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryNotifyEventBase() {}
// Cross Module References
	KURUSTORYMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStoryNotifyBase();
	KURUSTORYMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References

static_assert(std::is_polymorphic<FStoryNotifyEventBase>() == std::is_polymorphic<FStoryNotifyBase>(), "USTRUCT FStoryNotifyEventBase cannot be polymorphic unless super FStoryNotifyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoryNotifyEventBase;
class UScriptStruct* FStoryNotifyEventBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoryNotifyEventBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoryNotifyEventBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoryNotifyEventBase, (UObject*)Z_Construct_UPackage__Script_KuruStoryModule(), TEXT("StoryNotifyEventBase"));
	}
	return Z_Registration_Info_UScriptStruct_StoryNotifyEventBase.OuterSingleton;
}
template<> KURUSTORYMODULE_API UScriptStruct* StaticStruct<FStoryNotifyEventBase>()
{
	return FStoryNotifyEventBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyEventBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoryNotifyEventBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
		Z_Construct_UScriptStruct_FStoryNotifyBase,
		&NewStructOps,
		"StoryNotifyEventBase",
		nullptr,
		0,
		sizeof(FStoryNotifyEventBase),
		alignof(FStoryNotifyEventBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoryNotifyEventBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StoryNotifyEventBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoryNotifyEventBase.InnerSingleton, Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StoryNotifyEventBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyEventBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyEventBase_h_Statics::ScriptStructInfo[] = {
		{ FStoryNotifyEventBase::StaticStruct, Z_Construct_UScriptStruct_FStoryNotifyEventBase_Statics::NewStructOps, TEXT("StoryNotifyEventBase"), &Z_Registration_Info_UScriptStruct_StoryNotifyEventBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoryNotifyEventBase), 3978862925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyEventBase_h_2056891615(TEXT("/Script/KuruStoryModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyEventBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyEventBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/StoryNotifies/StoryNotifyBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryNotifyBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	KURUSTORYMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStoryNotifyBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoryNotifyBase;
class UScriptStruct* FStoryNotifyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoryNotifyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoryNotifyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoryNotifyBase, (UObject*)Z_Construct_UPackage__Script_KuruStoryModule(), TEXT("StoryNotifyBase"));
	}
	return Z_Registration_Info_UScriptStruct_StoryNotifyBase.OuterSingleton;
}
template<> KURUSTORYMODULE_API UScriptStruct* StaticStruct<FStoryNotifyBase>()
{
	return FStoryNotifyBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStoryNotifyBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Story Notify\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe7\xba\xa6\xe5\xae\x9a\xe4\xba\x86\xe4\xb8\x80\xe4\xba\x9b\xe6\x8e\xa5\xe5\x8f\xa3\xe3\x80\x82\n */" },
#endif
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Story Notify\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe7\xba\xa6\xe5\xae\x9a\xe4\xba\x86\xe4\xb8\x80\xe4\xba\x9b\xe6\x8e\xa5\xe5\x8f\xa3\xe3\x80\x82" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoryNotifyBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_ObjectOwner_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_ObjectOwner = { "ObjectOwner", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryNotifyBase, ObjectOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_ObjectOwner_MetaData), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_ObjectOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryNotifyBase, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartTime_MetaData), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryNotifyBase, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndTime_MetaData), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryNotifyBase, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartFrame_MetaData), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryNotifyBase, EndFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndFrame_MetaData), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStoryNotifyBase, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_ObjectOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
		nullptr,
		&NewStructOps,
		"StoryNotifyBase",
		Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::PropPointers),
		sizeof(FStoryNotifyBase),
		alignof(FStoryNotifyBase),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStoryNotifyBase()
	{
		if (!Z_Registration_Info_UScriptStruct_StoryNotifyBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoryNotifyBase.InnerSingleton, Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StoryNotifyBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics::ScriptStructInfo[] = {
		{ FStoryNotifyBase::StaticStruct, Z_Construct_UScriptStruct_FStoryNotifyBase_Statics::NewStructOps, TEXT("StoryNotifyBase"), &Z_Registration_Info_UScriptStruct_StoryNotifyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoryNotifyBase), 2916659103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_3963676234(TEXT("/Script/KuruStoryModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

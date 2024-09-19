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
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UStoryNotifyBase();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UStoryNotifyBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	void UStoryNotifyBase::StaticRegisterNativesUStoryNotifyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoryNotifyBase);
	UClass* Z_Construct_UClass_UStoryNotifyBase_NoRegister()
	{
		return UStoryNotifyBase::StaticClass();
	}
	struct Z_Construct_UClass_UStoryNotifyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseFrameRate;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryNotifyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Story Notify\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe7\xba\xa6\xe5\xae\x9a\xe4\xba\x86\xe4\xb8\x80\xe4\xba\x9b\xe6\x8e\xa5\xe5\x8f\xa3\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Data/StoryNotifies/StoryNotifyBase.h" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Story Notify\xe7\x9a\x84\xe5\x9f\xba\xe7\xb1\xbb\xef\xbc\x8c\xe7\xba\xa6\xe5\xae\x9a\xe4\xba\x86\xe4\xb8\x80\xe4\xba\x9b\xe6\x8e\xa5\xe5\x8f\xa3\xe3\x80\x82" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_BaseFrameRate_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_BaseFrameRate = { "BaseFrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, BaseFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_BaseFrameRate_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_BaseFrameRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_ObjectOwner_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_ObjectOwner = { "ObjectOwner", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, ObjectOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_ObjectOwner_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_ObjectOwner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartTime_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, EndTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndTime_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartFrame_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, EndFrame), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndFrame_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndFrame_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StoryNotifyBase" },
		{ "ModuleRelativePath", "Data/StoryNotifies/StoryNotifyBase.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStoryNotifyBase, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_Name_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStoryNotifyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_BaseFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_ObjectOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStoryNotifyBase_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryNotifyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryNotifyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoryNotifyBase_Statics::ClassParams = {
		&UStoryNotifyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStoryNotifyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UStoryNotifyBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStoryNotifyBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStoryNotifyBase()
	{
		if (!Z_Registration_Info_UClass_UStoryNotifyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoryNotifyBase.OuterSingleton, Z_Construct_UClass_UStoryNotifyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStoryNotifyBase.OuterSingleton;
	}
	template<> KURUSTORYMODULE_API UClass* StaticClass<UStoryNotifyBase>()
	{
		return UStoryNotifyBase::StaticClass();
	}
	UStoryNotifyBase::UStoryNotifyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryNotifyBase);
	UStoryNotifyBase::~UStoryNotifyBase() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStoryNotifyBase, UStoryNotifyBase::StaticClass, TEXT("UStoryNotifyBase"), &Z_Registration_Info_UClass_UStoryNotifyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoryNotifyBase), 109277185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_1657458253(TEXT("/Script/KuruStoryModule"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_StoryNotifies_StoryNotifyBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

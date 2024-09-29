// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/Model/RunnerComponent/KuruStoryInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryInputComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryContext_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryInputComponent();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryInputComponent_NoRegister();
	KURUSTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FStoryInputAction();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StoryInputAction;
class UScriptStruct* FStoryInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StoryInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StoryInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoryInputAction, (UObject*)Z_Construct_UPackage__Script_KuruStoryRuntime(), TEXT("StoryInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_StoryInputAction.OuterSingleton;
}
template<> KURUSTORYRUNTIME_API UScriptStruct* StaticStruct<FStoryInputAction>()
{
	return FStoryInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStoryInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoryInputAction_Statics::Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * IA\xe7\x9a\x84\xe5\xb0\x81\xe8\xa3\x85\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\x81\x9a\xe5\xb1\x80\xe5\x86\x85\xe4\xba\xa4\xe4\xba\x92\xef\xbc\x8c\xe5\x8d\xb3\xe4\xbd\xbf\xe5\x90\x8c\xe4\xb8\x80\xe5\xb8\xa7\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe8\xbe\x93\xe5\x85\xa5\xef\xbc\x8c\xe5\x90\x8c\xe4\xb8\x80\xe5\xb8\xa7\xe4\xb9\x9f\xe6\x9c\x80\xe5\xa4\x9a\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe8\xbe\x93\xe5\x85\xa5\xe8\xa2\xab\xe6\x89\xa7\xe8\xa1\x8c.\n * \xe8\xbe\x93\xe5\x85\xa5\xe5\x8f\xaf\xe8\x83\xbd\xe5\x8f\x97\xe5\x8d\xa1\xe9\xa1\xbf\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x81\x9a\xe7\x9a\x84\xe6\x98\xaf\xe8\xae\xa9\xe5\x85\xb6\xe5\x92\x8c""deltatime\xe4\xb8\x8d\xe7\x9b\xb8\xe5\x85\xb3\xe8\x80\x8c\xe6\x98\xaf\xe4\xbb\x85\xe5\x92\x8c\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaftick\xe6\x95\xb0\xe9\x87\x8f\xe7\x9b\xb8\xe5\x85\xb3\xe3\x80\x82\n */" },
#endif
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruStoryInputComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* IA\xe7\x9a\x84\xe5\xb0\x81\xe8\xa3\x85\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe5\x81\x9a\xe5\xb1\x80\xe5\x86\x85\xe4\xba\xa4\xe4\xba\x92\xef\xbc\x8c\xe5\x8d\xb3\xe4\xbd\xbf\xe5\x90\x8c\xe4\xb8\x80\xe5\xb8\xa7\xe6\x9c\x89\xe5\xa4\x9a\xe4\xb8\xaa\xe8\xbe\x93\xe5\x85\xa5\xef\xbc\x8c\xe5\x90\x8c\xe4\xb8\x80\xe5\xb8\xa7\xe4\xb9\x9f\xe6\x9c\x80\xe5\xa4\x9a\xe6\x9c\x89\xe4\xb8\x80\xe4\xb8\xaa\xe8\xbe\x93\xe5\x85\xa5\xe8\xa2\xab\xe6\x89\xa7\xe8\xa1\x8c.\n* \xe8\xbe\x93\xe5\x85\xa5\xe5\x8f\xaf\xe8\x83\xbd\xe5\x8f\x97\xe5\x8d\xa1\xe9\xa1\xbf\xe9\x99\x90\xe5\x88\xb6\xef\xbc\x8c\xe8\xbf\x99\xe9\x87\x8c\xe9\x9c\x80\xe8\xa6\x81\xe5\x81\x9a\xe7\x9a\x84\xe6\x98\xaf\xe8\xae\xa9\xe5\x85\xb6\xe5\x92\x8c""deltatime\xe4\xb8\x8d\xe7\x9b\xb8\xe5\x85\xb3\xe8\x80\x8c\xe6\x98\xaf\xe4\xbb\x85\xe5\x92\x8c\xe5\xae\xa2\xe6\x88\xb7\xe7\xab\xaftick\xe6\x95\xb0\xe9\x87\x8f\xe7\x9b\xb8\xe5\x85\xb3\xe3\x80\x82" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FStoryInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoryInputAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoryInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
		nullptr,
		&NewStructOps,
		"StoryInputAction",
		nullptr,
		0,
		sizeof(FStoryInputAction),
		alignof(FStoryInputAction),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoryInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStoryInputAction_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoryInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_StoryInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StoryInputAction.InnerSingleton, Z_Construct_UScriptStruct_FStoryInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StoryInputAction.InnerSingleton;
	}
	void UKuruStoryInputComponent::StaticRegisterNativesUKuruStoryInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryInputComponent);
	UClass* Z_Construct_UClass_UKuruStoryInputComponent_NoRegister()
	{
		return UKuruStoryInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryInputComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Model/RunnerComponent/KuruStoryInputComponent.h" },
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruStoryInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStoryInputAction, METADATA_PARAMS(0, nullptr) }; // 2525062961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions_MetaData[] = {
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruStoryInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryInputComponent, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions_MetaData), Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions_MetaData) }; // 2525062961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Model/RunnerComponent/KuruStoryInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryInputComponent, Context), Z_Construct_UClass_UKuruStoryContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_Context_MetaData), Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_Context_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryInputComponent_Statics::NewProp_Context,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryInputComponent_Statics::ClassParams = {
		&UKuruStoryInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryInputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryInputComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryInputComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryInputComponent()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryInputComponent.OuterSingleton, Z_Construct_UClass_UKuruStoryInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryInputComponent.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryInputComponent>()
	{
		return UKuruStoryInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryInputComponent);
	UKuruStoryInputComponent::~UKuruStoryInputComponent() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics::ScriptStructInfo[] = {
		{ FStoryInputAction::StaticStruct, Z_Construct_UScriptStruct_FStoryInputAction_Statics::NewStructOps, TEXT("StoryInputAction"), &Z_Registration_Info_UScriptStruct_StoryInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStoryInputAction), 2525062961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryInputComponent, UKuruStoryInputComponent::StaticClass, TEXT("UKuruStoryInputComponent"), &Z_Registration_Info_UClass_UKuruStoryInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryInputComponent), 448694095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_3410465667(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_Model_RunnerComponent_KuruStoryInputComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

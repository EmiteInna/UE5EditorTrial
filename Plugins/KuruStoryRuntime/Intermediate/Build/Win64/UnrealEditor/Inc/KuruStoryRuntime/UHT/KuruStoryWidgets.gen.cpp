// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/KuruStoryWidgets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryWidgets() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryWidgets();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryWidgets_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UKuruStoryWidgets::execSetAutoBlendLocked)
	{
		P_GET_UBOOL(Z_Param_bLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoBlendLocked(Z_Param_bLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryWidgets::execShow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Show();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryWidgets::execHide)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Hide();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryWidgets::execPlayBlendOutAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBlendOutAnimation(Z_Param_BlendInDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryWidgets::execPlayBlendInAnimation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBlendInAnimation(Z_Param_BlendInDuration);
		P_NATIVE_END;
	}
	void UKuruStoryWidgets::StaticRegisterNativesUKuruStoryWidgets()
	{
		UClass* Class = UKuruStoryWidgets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Hide", &UKuruStoryWidgets::execHide },
			{ "PlayBlendInAnimation", &UKuruStoryWidgets::execPlayBlendInAnimation },
			{ "PlayBlendOutAnimation", &UKuruStoryWidgets::execPlayBlendOutAnimation },
			{ "SetAutoBlendLocked", &UKuruStoryWidgets::execSetAutoBlendLocked },
			{ "Show", &UKuruStoryWidgets::execShow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKuruStoryWidgets_Hide_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryWidgets_Hide_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryWidgets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryWidgets_Hide_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryWidgets, nullptr, "Hide", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_Hide_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryWidgets_Hide_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UKuruStoryWidgets_Hide()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryWidgets_Hide_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics
	{
		struct KuruStoryWidgets_eventPlayBlendInAnimation_Parms
		{
			float BlendInDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::NewProp_BlendInDuration = { "BlendInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryWidgets_eventPlayBlendInAnimation_Parms, BlendInDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::NewProp_BlendInDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryWidgets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryWidgets, nullptr, "PlayBlendInAnimation", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::KuruStoryWidgets_eventPlayBlendInAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::KuruStoryWidgets_eventPlayBlendInAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics
	{
		struct KuruStoryWidgets_eventPlayBlendOutAnimation_Parms
		{
			float BlendInDuration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendInDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::NewProp_BlendInDuration = { "BlendInDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryWidgets_eventPlayBlendOutAnimation_Parms, BlendInDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::NewProp_BlendInDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryWidgets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryWidgets, nullptr, "PlayBlendOutAnimation", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::KuruStoryWidgets_eventPlayBlendOutAnimation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::KuruStoryWidgets_eventPlayBlendOutAnimation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics
	{
		struct KuruStoryWidgets_eventSetAutoBlendLocked_Parms
		{
			bool bLocked;
		};
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((KuruStoryWidgets_eventSetAutoBlendLocked_Parms*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KuruStoryWidgets_eventSetAutoBlendLocked_Parms), &Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::NewProp_bLocked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryWidgets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryWidgets, nullptr, "SetAutoBlendLocked", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::KuruStoryWidgets_eventSetAutoBlendLocked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::KuruStoryWidgets_eventSetAutoBlendLocked_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryWidgets_Show_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryWidgets_Show_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryWidgets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryWidgets_Show_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryWidgets, nullptr, "Show", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryWidgets_Show_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryWidgets_Show_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UKuruStoryWidgets_Show()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryWidgets_Show_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryWidgets);
	UClass* Z_Construct_UClass_UKuruStoryWidgets_NoRegister()
	{
		return UKuruStoryWidgets::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryWidgets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryWidgets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryWidgets_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UKuruStoryWidgets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKuruStoryWidgets_Hide, "Hide" }, // 776793458
		{ &Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendInAnimation, "PlayBlendInAnimation" }, // 1801599509
		{ &Z_Construct_UFunction_UKuruStoryWidgets_PlayBlendOutAnimation, "PlayBlendOutAnimation" }, // 106044022
		{ &Z_Construct_UFunction_UKuruStoryWidgets_SetAutoBlendLocked, "SetAutoBlendLocked" }, // 1185000923
		{ &Z_Construct_UFunction_UKuruStoryWidgets_Show, "Show" }, // 3436474051
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryWidgets_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryWidgets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/KuruStoryWidgets.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryWidgets.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryWidgets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryWidgets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryWidgets_Statics::ClassParams = {
		&UKuruStoryWidgets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryWidgets_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryWidgets_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UKuruStoryWidgets()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryWidgets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryWidgets.OuterSingleton, Z_Construct_UClass_UKuruStoryWidgets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryWidgets.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryWidgets>()
	{
		return UKuruStoryWidgets::StaticClass();
	}
	UKuruStoryWidgets::UKuruStoryWidgets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryWidgets);
	UKuruStoryWidgets::~UKuruStoryWidgets() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryWidgets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryWidgets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryWidgets, UKuruStoryWidgets::StaticClass, TEXT("UKuruStoryWidgets"), &Z_Registration_Info_UClass_UKuruStoryWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryWidgets), 2791649164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryWidgets_h_2842155548(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryWidgets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryWidgets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

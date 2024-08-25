// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryModule/Data/Runtime/KuruStoryClipDataInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryClipDataInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipData_NoRegister();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipDataInstance();
	KURUSTORYMODULE_API UClass* Z_Construct_UClass_UKuruStoryClipDataInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryModule();
// End Cross Module References
	DEFINE_FUNCTION(UKuruStoryClipDataInstance::execTickPlaying)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickPlaying(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryClipDataInstance::execSetPlayRate)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayRate(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryClipDataInstance::execSetIsReversed)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsReversed(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryClipDataInstance::execSetIsPlaying)
	{
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsPlaying(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryClipDataInstance::execSetPlayingPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayingPosition(Z_Param_InPosition);
		P_NATIVE_END;
	}
	void UKuruStoryClipDataInstance::StaticRegisterNativesUKuruStoryClipDataInstance()
	{
		UClass* Class = UKuruStoryClipDataInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIsPlaying", &UKuruStoryClipDataInstance::execSetIsPlaying },
			{ "SetIsReversed", &UKuruStoryClipDataInstance::execSetIsReversed },
			{ "SetPlayingPosition", &UKuruStoryClipDataInstance::execSetPlayingPosition },
			{ "SetPlayRate", &UKuruStoryClipDataInstance::execSetPlayRate },
			{ "TickPlaying", &UKuruStoryClipDataInstance::execTickPlaying },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics
	{
		struct KuruStoryClipDataInstance_eventSetIsPlaying_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((KuruStoryClipDataInstance_eventSetIsPlaying_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KuruStoryClipDataInstance_eventSetIsPlaying_Parms), &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryClipDataInstance, nullptr, "SetIsPlaying", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::KuruStoryClipDataInstance_eventSetIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::KuruStoryClipDataInstance_eventSetIsPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics
	{
		struct KuruStoryClipDataInstance_eventSetIsReversed_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((KuruStoryClipDataInstance_eventSetIsReversed_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KuruStoryClipDataInstance_eventSetIsReversed_Parms), &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryClipDataInstance, nullptr, "SetIsReversed", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::KuruStoryClipDataInstance_eventSetIsReversed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::KuruStoryClipDataInstance_eventSetIsReversed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics
	{
		struct KuruStoryClipDataInstance_eventSetPlayingPosition_Parms
		{
			float InPosition;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryClipDataInstance_eventSetPlayingPosition_Parms, InPosition), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::NewProp_InPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryClipDataInstance, nullptr, "SetPlayingPosition", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::KuruStoryClipDataInstance_eventSetPlayingPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::KuruStoryClipDataInstance_eventSetPlayingPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics
	{
		struct KuruStoryClipDataInstance_eventSetPlayRate_Parms
		{
			bool InValue;
		};
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((KuruStoryClipDataInstance_eventSetPlayRate_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(KuruStoryClipDataInstance_eventSetPlayRate_Parms), &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryClipDataInstance, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::KuruStoryClipDataInstance_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::KuruStoryClipDataInstance_eventSetPlayRate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics
	{
		struct KuruStoryClipDataInstance_eventTickPlaying_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryClipDataInstance_eventTickPlaying_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryClipDataInstance, nullptr, "TickPlaying", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::KuruStoryClipDataInstance_eventTickPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::KuruStoryClipDataInstance_eventTickPlaying_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryClipDataInstance);
	UClass* Z_Construct_UClass_UKuruStoryClipDataInstance_NoRegister()
	{
		return UKuruStoryClipDataInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryClipDataInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooped_MetaData[];
#endif
		static void NewProp_bIsLooped_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaying_MetaData[];
#endif
		static void NewProp_bIsPlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReversed_MetaData[];
#endif
		static void NewProp_bIsReversed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReversed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayingPosition_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentPlayingPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsPlaying, "SetIsPlaying" }, // 1352634463
		{ &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetIsReversed, "SetIsReversed" }, // 3477480655
		{ &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayingPosition, "SetPlayingPosition" }, // 3682515502
		{ &Z_Construct_UFunction_UKuruStoryClipDataInstance_SetPlayRate, "SetPlayRate" }, // 4154332529
		{ &Z_Construct_UFunction_UKuruStoryClipDataInstance_TickPlaying, "TickPlaying" }, // 600301343
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_BaseData_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_BaseData = { "BaseData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipDataInstance, BaseData), Z_Construct_UClass_UKuruStoryClipData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_BaseData_MetaData), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_BaseData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped_SetBit(void* Obj)
	{
		((UKuruStoryClipDataInstance*)Obj)->bIsLooped = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped = { "bIsLooped", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKuruStoryClipDataInstance), &Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped_MetaData), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying_SetBit(void* Obj)
	{
		((UKuruStoryClipDataInstance*)Obj)->bIsPlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying = { "bIsPlaying", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKuruStoryClipDataInstance), &Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying_MetaData), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	void Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed_SetBit(void* Obj)
	{
		((UKuruStoryClipDataInstance*)Obj)->bIsReversed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed = { "bIsReversed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKuruStoryClipDataInstance), &Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed_MetaData), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_CurrentPlayingPosition_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_CurrentPlayingPosition = { "CurrentPlayingPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipDataInstance, CurrentPlayingPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_CurrentPlayingPosition_MetaData), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_CurrentPlayingPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_PlayRate_MetaData[] = {
		{ "ModuleRelativePath", "Data/Runtime/KuruStoryClipDataInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipDataInstance, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_PlayRate_MetaData), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_PlayRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_BaseData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsLooped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsPlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_bIsReversed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_CurrentPlayingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::NewProp_PlayRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryClipDataInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::ClassParams = {
		&UKuruStoryClipDataInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryClipDataInstance()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryClipDataInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryClipDataInstance.OuterSingleton, Z_Construct_UClass_UKuruStoryClipDataInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryClipDataInstance.OuterSingleton;
	}
	template<> KURUSTORYMODULE_API UClass* StaticClass<UKuruStoryClipDataInstance>()
	{
		return UKuruStoryClipDataInstance::StaticClass();
	}
	UKuruStoryClipDataInstance::UKuruStoryClipDataInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryClipDataInstance);
	UKuruStoryClipDataInstance::~UKuruStoryClipDataInstance() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipDataInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipDataInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryClipDataInstance, UKuruStoryClipDataInstance::StaticClass, TEXT("UKuruStoryClipDataInstance"), &Z_Registration_Info_UClass_UKuruStoryClipDataInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryClipDataInstance), 369469279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipDataInstance_h_2327236052(TEXT("/Script/KuruStoryModule"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipDataInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryModule_Source_KuruStoryModule_Data_Runtime_KuruStoryClipDataInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

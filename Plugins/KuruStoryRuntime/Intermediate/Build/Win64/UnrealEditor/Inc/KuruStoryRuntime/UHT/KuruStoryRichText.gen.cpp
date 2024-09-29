// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/KuruStoryRichText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryRichText() {}
// Cross Module References
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryRichText();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryRichText_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryWidgets();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UKuruStoryRichText::execStartToTypewrite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartToTypewrite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryRichText::execSetContentAndTypeSpeed)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTypeSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAndTypeSpeed(Z_Param_Out_InText,Z_Param_InTypeSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKuruStoryRichText::execSetContentAndTypeDuration)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTypeDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAndTypeDuration(Z_Param_Out_InText,Z_Param_InTypeDuration);
		P_NATIVE_END;
	}
	void UKuruStoryRichText::StaticRegisterNativesUKuruStoryRichText()
	{
		UClass* Class = UKuruStoryRichText::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetContentAndTypeDuration", &UKuruStoryRichText::execSetContentAndTypeDuration },
			{ "SetContentAndTypeSpeed", &UKuruStoryRichText::execSetContentAndTypeSpeed },
			{ "StartToTypewrite", &UKuruStoryRichText::execStartToTypewrite },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics
	{
		struct KuruStoryRichText_eventSetContentAndTypeDuration_Parms
		{
			FText InText;
			float InTypeDuration;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTypeDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryRichText_eventSetContentAndTypeDuration_Parms, InText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::NewProp_InTypeDuration = { "InTypeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryRichText_eventSetContentAndTypeDuration_Parms, InTypeDuration), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::NewProp_InTypeDuration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryRichText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryRichText, nullptr, "SetContentAndTypeDuration", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::KuruStoryRichText_eventSetContentAndTypeDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::KuruStoryRichText_eventSetContentAndTypeDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics
	{
		struct KuruStoryRichText_eventSetContentAndTypeSpeed_Parms
		{
			FText InText;
			float InTypeSpeed;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTypeSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryRichText_eventSetContentAndTypeSpeed_Parms, InText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::NewProp_InTypeSpeed = { "InTypeSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(KuruStoryRichText_eventSetContentAndTypeSpeed_Parms, InTypeSpeed), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::NewProp_InTypeSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryRichText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryRichText, nullptr, "SetContentAndTypeSpeed", nullptr, nullptr, Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::KuruStoryRichText_eventSetContentAndTypeSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::KuruStoryRichText_eventSetContentAndTypeSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryRichText.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKuruStoryRichText, nullptr, "StartToTypewrite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryRichText);
	UClass* Z_Construct_UClass_UKuruStoryRichText_NoRegister()
	{
		return UKuruStoryRichText::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryRichText_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RichText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryRichText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKuruStoryWidgets,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryRichText_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UKuruStoryRichText_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeDuration, "SetContentAndTypeDuration" }, // 2169692526
		{ &Z_Construct_UFunction_UKuruStoryRichText_SetContentAndTypeSpeed, "SetContentAndTypeSpeed" }, // 3429688512
		{ &Z_Construct_UFunction_UKuruStoryRichText_StartToTypewrite, "StartToTypewrite" }, // 1284419126
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryRichText_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryRichText_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/KuruStoryRichText.h" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryRichText.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryRichText_Statics::NewProp_RichText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/KuruStoryRichText.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryRichText_Statics::NewProp_RichText = { "RichText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryRichText, RichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryRichText_Statics::NewProp_RichText_MetaData), Z_Construct_UClass_UKuruStoryRichText_Statics::NewProp_RichText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryRichText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryRichText_Statics::NewProp_RichText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryRichText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryRichText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryRichText_Statics::ClassParams = {
		&UKuruStoryRichText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKuruStoryRichText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryRichText_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryRichText_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryRichText_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryRichText_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryRichText()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryRichText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryRichText.OuterSingleton, Z_Construct_UClass_UKuruStoryRichText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryRichText.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryRichText>()
	{
		return UKuruStoryRichText::StaticClass();
	}
	UKuruStoryRichText::UKuruStoryRichText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryRichText);
	UKuruStoryRichText::~UKuruStoryRichText() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryRichText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryRichText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryRichText, UKuruStoryRichText::StaticClass, TEXT("UKuruStoryRichText"), &Z_Registration_Info_UClass_UKuruStoryRichText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryRichText), 278547878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryRichText_h_1288537647(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryRichText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_KuruStoryRichText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

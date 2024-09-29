// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/RuntimeWidgets/FrontGamePanelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFrontGamePanelWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UFrontGamePanelWidget();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UFrontGamePanelWidget_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryImage_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryPanel();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryRichText_NoRegister();
	KURUSTORYRUNTIME_API UEnum* Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKuruFrontGamePanelState;
	static UEnum* EKuruFrontGamePanelState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EKuruFrontGamePanelState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EKuruFrontGamePanelState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState, (UObject*)Z_Construct_UPackage__Script_KuruStoryRuntime(), TEXT("EKuruFrontGamePanelState"));
		}
		return Z_Registration_Info_UEnum_EKuruFrontGamePanelState.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UEnum* StaticEnum<EKuruFrontGamePanelState>()
	{
		return EKuruFrontGamePanelState_StaticEnum();
	}
	struct Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::Enumerators[] = {
		{ "E_ShowBlank", (int64)E_ShowBlank },
		{ "E_ShowOnlyContent", (int64)E_ShowOnlyContent },
		{ "E_ShowAll", (int64)E_ShowAll },
		{ "E_Transitioning", (int64)E_Transitioning },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * FP\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xef\xbc\x8c\xe5\x88\x86\xe5\x88\xab\xe6\x98\xaf\xe5\x8f\xaa\xe6\x98\xbe\xe7\xa4\xba\xe6\x9d\xbf\xef\xbc\x8c\xe5\x8f\xaa\xe6\x98\xbe\xe7\xa4\xba\xe5\x86\x85\xe5\xae\xb9\xe5\x92\x8c\xe6\x98\xbe\xe7\xa4\xba\xe5\x85\xa8\xe9\x83\xa8\xef\xbc\x8c\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab\xe5\x9c\xa8\xe5\x86\x85\xef\xbc\x8c\xe8\x80\x8c\xe6\x98\xaf\xe5\x8d\x95\xe7\x8b\xac\xe7\x9a\x84\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\xad\xe5\x86\x8d\xe6\xac\xa1\xe8\xb0\x83\xe7\x94\xa8ToState\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb7\xb3\xe8\xbf\x87\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\x87\xe6\x8d\xa2\xe7\x8a\xb6\xe6\x80\x81\n */" },
#endif
		{ "E_ShowAll.Name", "E_ShowAll" },
		{ "E_ShowBlank.Name", "E_ShowBlank" },
		{ "E_ShowOnlyContent.Name", "E_ShowOnlyContent" },
		{ "E_Transitioning.Name", "E_Transitioning" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* FP\xe7\x8a\xb6\xe6\x80\x81\xe6\x9c\xba\xef\xbc\x8c\xe5\x88\x86\xe5\x88\xab\xe6\x98\xaf\xe5\x8f\xaa\xe6\x98\xbe\xe7\xa4\xba\xe6\x9d\xbf\xef\xbc\x8c\xe5\x8f\xaa\xe6\x98\xbe\xe7\xa4\xba\xe5\x86\x85\xe5\xae\xb9\xe5\x92\x8c\xe6\x98\xbe\xe7\xa4\xba\xe5\x85\xa8\xe9\x83\xa8\xef\xbc\x8c\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8d\xe5\x8c\x85\xe5\x90\xab\xe5\x9c\xa8\xe5\x86\x85\xef\xbc\x8c\xe8\x80\x8c\xe6\x98\xaf\xe5\x8d\x95\xe7\x8b\xac\xe7\x9a\x84\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xef\xbc\x8c\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\xad\xe5\x86\x8d\xe6\xac\xa1\xe8\xb0\x83\xe7\x94\xa8ToState\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb7\xb3\xe8\xbf\x87\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\x87\xe6\x8d\xa2\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
		nullptr,
		"EKuruFrontGamePanelState",
		"EKuruFrontGamePanelState",
		Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState()
	{
		if (!Z_Registration_Info_UEnum_EKuruFrontGamePanelState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKuruFrontGamePanelState.InnerSingleton, Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EKuruFrontGamePanelState.InnerSingleton;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execStartToTypewrite)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartToTypewrite();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execSetContentAndTypeSpeed)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTypeSpeed);
		P_GET_UBOOL(Z_Param_bIsDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAndTypeSpeed(Z_Param_Out_InText,Z_Param_InTypeSpeed,Z_Param_bIsDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execSetContentAndTypeDuration)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTypeDuration);
		P_GET_UBOOL(Z_Param_bIsDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentAndTypeDuration(Z_Param_Out_InText,Z_Param_InTypeDuration,Z_Param_bIsDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execSetSpeaker)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpeaker(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execSetImagePic)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImagePic(Z_Param_InImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execToNewStateInstant)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InTargetState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToNewStateInstant(EKuruFrontGamePanelState(Z_Param_InTargetState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFrontGamePanelWidget::execToNewState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InTargetState);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTransitionTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToNewState(EKuruFrontGamePanelState(Z_Param_InTargetState),Z_Param_InTransitionTime);
		P_NATIVE_END;
	}
	void UFrontGamePanelWidget::StaticRegisterNativesUFrontGamePanelWidget()
	{
		UClass* Class = UFrontGamePanelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetContentAndTypeDuration", &UFrontGamePanelWidget::execSetContentAndTypeDuration },
			{ "SetContentAndTypeSpeed", &UFrontGamePanelWidget::execSetContentAndTypeSpeed },
			{ "SetImagePic", &UFrontGamePanelWidget::execSetImagePic },
			{ "SetSpeaker", &UFrontGamePanelWidget::execSetSpeaker },
			{ "StartToTypewrite", &UFrontGamePanelWidget::execStartToTypewrite },
			{ "ToNewState", &UFrontGamePanelWidget::execToNewState },
			{ "ToNewStateInstant", &UFrontGamePanelWidget::execToNewStateInstant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics
	{
		struct FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms
		{
			FText InText;
			float InTypeDuration;
			bool bIsDialog;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTypeDuration;
		static void NewProp_bIsDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDialog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms, InText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_InTypeDuration = { "InTypeDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms, InTypeDuration), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_bIsDialog_SetBit(void* Obj)
	{
		((FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms*)Obj)->bIsDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_bIsDialog = { "bIsDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms), &Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_bIsDialog_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_InTypeDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::NewProp_bIsDialog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "CPP_Default_bIsDialog", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "SetContentAndTypeDuration", nullptr, nullptr, Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::FrontGamePanelWidget_eventSetContentAndTypeDuration_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics
	{
		struct FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms
		{
			FText InText;
			float InTypeSpeed;
			bool bIsDialog;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTypeSpeed;
		static void NewProp_bIsDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDialog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms, InText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_InTypeSpeed = { "InTypeSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms, InTypeSpeed), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_bIsDialog_SetBit(void* Obj)
	{
		((FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms*)Obj)->bIsDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_bIsDialog = { "bIsDialog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms), &Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_bIsDialog_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_InTypeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::NewProp_bIsDialog,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "CPP_Default_bIsDialog", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "SetContentAndTypeSpeed", nullptr, nullptr, Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::FrontGamePanelWidget_eventSetContentAndTypeSpeed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics
	{
		struct FrontGamePanelWidget_eventSetImagePic_Parms
		{
			UTexture2D* InImage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::NewProp_InImage = { "InImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventSetImagePic_Parms, InImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::NewProp_InImage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//todo : \xe8\xbf\x99\xe9\x87\x8c\xe4\xb9\x8b\xe5\x90\x8e\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\x81\x9a\xe6\x88\x90\xe6\xa0\xb9\xe6\x8d\xaeuid\xe8\x87\xaa\xe5\xb7\xb1\xe5\x8e\xbb\xe5\x8f\x96\xe6\x9d\xa5\xe5\x81\x9a\xe4\xbc\x98\xe5\x8c\x96\xef\xbc\x9f\n" },
#endif
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "todo : \xe8\xbf\x99\xe9\x87\x8c\xe4\xb9\x8b\xe5\x90\x8e\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\x81\x9a\xe6\x88\x90\xe6\xa0\xb9\xe6\x8d\xaeuid\xe8\x87\xaa\xe5\xb7\xb1\xe5\x8e\xbb\xe5\x8f\x96\xe6\x9d\xa5\xe5\x81\x9a\xe4\xbc\x98\xe5\x8c\x96\xef\xbc\x9f" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "SetImagePic", nullptr, nullptr, Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::FrontGamePanelWidget_eventSetImagePic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::FrontGamePanelWidget_eventSetImagePic_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics
	{
		struct FrontGamePanelWidget_eventSetSpeaker_Parms
		{
			FText InText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventSetSpeaker_Parms, InText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "SetSpeaker", nullptr, nullptr, Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::FrontGamePanelWidget_eventSetSpeaker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::FrontGamePanelWidget_eventSetSpeaker_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "StartToTypewrite", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics
	{
		struct FrontGamePanelWidget_eventToNewState_Parms
		{
			TEnumAsByte<EKuruFrontGamePanelState> InTargetState;
			float InTransitionTime;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTargetState;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTransitionTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::NewProp_InTargetState = { "InTargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventToNewState_Parms, InTargetState), Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState, METADATA_PARAMS(0, nullptr) }; // 177376822
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::NewProp_InTransitionTime = { "InTransitionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventToNewState_Parms, InTransitionTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::NewProp_InTargetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::NewProp_InTransitionTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\xad\xe5\x86\x8d\xe6\xac\xa1\xe8\xb0\x83\xe7\x94\xa8ToState\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb7\xb3\xe8\xbf\x87\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\x87\xe6\x8d\xa2\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x87\xe6\xb8\xa1\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\xad\xe5\x86\x8d\xe6\xac\xa1\xe8\xb0\x83\xe7\x94\xa8ToState\xe4\xbc\x9a\xe7\x9b\xb4\xe6\x8e\xa5\xe8\xb7\xb3\xe8\xbf\x87\xe8\xbf\x87\xe6\xb8\xa1\xe5\x88\x87\xe6\x8d\xa2\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "ToNewState", nullptr, nullptr, Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::FrontGamePanelWidget_eventToNewState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::FrontGamePanelWidget_eventToNewState_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics
	{
		struct FrontGamePanelWidget_eventToNewStateInstant_Parms
		{
			TEnumAsByte<EKuruFrontGamePanelState> InTargetState;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTargetState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::NewProp_InTargetState = { "InTargetState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FrontGamePanelWidget_eventToNewStateInstant_Parms, InTargetState), Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState, METADATA_PARAMS(0, nullptr) }; // 177376822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::NewProp_InTargetState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kuru" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFrontGamePanelWidget, nullptr, "ToNewStateInstant", nullptr, nullptr, Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::FrontGamePanelWidget_eventToNewStateInstant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::FrontGamePanelWidget_eventToNewStateInstant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFrontGamePanelWidget);
	UClass* Z_Construct_UClass_UFrontGamePanelWidget_NoRegister()
	{
		return UFrontGamePanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFrontGamePanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundBoard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundBoard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeakerText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpeakerText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContentText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FromState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFrontGamePanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKuruStoryPanel,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFrontGamePanelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeDuration, "SetContentAndTypeDuration" }, // 1528393796
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_SetContentAndTypeSpeed, "SetContentAndTypeSpeed" }, // 1186263755
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_SetImagePic, "SetImagePic" }, // 134657349
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_SetSpeaker, "SetSpeaker" }, // 2098331701
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_StartToTypewrite, "StartToTypewrite" }, // 960727536
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_ToNewState, "ToNewState" }, // 1095709080
		{ &Z_Construct_UFunction_UFrontGamePanelWidget_ToNewStateInstant, "ToNewStateInstant" }, // 1276422860
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_HeadImage_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\x8b\xe9\x9d\xa2\xe9\x82\xa3\xe4\xb8\xaa\xe6\x9d\xbf\xe5\x84\xbf\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8b\xe9\x9d\xa2\xe9\x82\xa3\xe4\xb8\xaa\xe6\x9d\xbf\xe5\x84\xbf" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_HeadImage = { "HeadImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, HeadImage), Z_Construct_UClass_UKuruStoryImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_HeadImage_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_HeadImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_BackgroundBoard_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xb8\x8b\xe9\x9d\xa2\xe9\x82\xa3\xe4\xb8\xaa\xe6\x9d\xbf\xe5\x84\xbf\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x8b\xe9\x9d\xa2\xe9\x82\xa3\xe4\xb8\xaa\xe6\x9d\xbf\xe5\x84\xbf" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_BackgroundBoard = { "BackgroundBoard", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, BackgroundBoard), Z_Construct_UClass_UKuruStoryImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_BackgroundBoard_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_BackgroundBoard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_SpeakerText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xb4\xe8\xaf\x9d\xe4\xba\xba\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xb4\xe8\xaf\x9d\xe4\xba\xba\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_SpeakerText = { "SpeakerText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, SpeakerText), Z_Construct_UClass_UKuruStoryRichText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_SpeakerText_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_SpeakerText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_ContentText_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xb4\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xb4\xe8\xaf\x9d\xe5\x86\x85\xe5\xae\xb9" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_ContentText = { "ContentText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, ContentText), Z_Construct_UClass_UKuruStoryRichText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_ContentText_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_ContentText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_FromState_MetaData[] = {
		{ "Category", "FrontGamePanelWidget" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_FromState = { "FromState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, FromState), Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_FromState_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_FromState_MetaData) }; // 177376822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "FrontGamePanelWidget" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, CurrentState), Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_CurrentState_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_CurrentState_MetaData) }; // 177376822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_TargetState_MetaData[] = {
		{ "Category", "FrontGamePanelWidget" },
		{ "ModuleRelativePath", "RuntimeWidgets/FrontGamePanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFrontGamePanelWidget, TargetState), Z_Construct_UEnum_KuruStoryRuntime_EKuruFrontGamePanelState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_TargetState_MetaData), Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_TargetState_MetaData) }; // 177376822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFrontGamePanelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_HeadImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_BackgroundBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_SpeakerText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_ContentText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_FromState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFrontGamePanelWidget_Statics::NewProp_TargetState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFrontGamePanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFrontGamePanelWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFrontGamePanelWidget_Statics::ClassParams = {
		&UFrontGamePanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFrontGamePanelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFrontGamePanelWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFrontGamePanelWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFrontGamePanelWidget()
	{
		if (!Z_Registration_Info_UClass_UFrontGamePanelWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFrontGamePanelWidget.OuterSingleton, Z_Construct_UClass_UFrontGamePanelWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFrontGamePanelWidget.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UFrontGamePanelWidget>()
	{
		return UFrontGamePanelWidget::StaticClass();
	}
	UFrontGamePanelWidget::UFrontGamePanelWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFrontGamePanelWidget);
	UFrontGamePanelWidget::~UFrontGamePanelWidget() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics::EnumInfo[] = {
		{ EKuruFrontGamePanelState_StaticEnum, TEXT("EKuruFrontGamePanelState"), &Z_Registration_Info_UEnum_EKuruFrontGamePanelState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 177376822U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFrontGamePanelWidget, UFrontGamePanelWidget::StaticClass, TEXT("UFrontGamePanelWidget"), &Z_Registration_Info_UClass_UFrontGamePanelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFrontGamePanelWidget), 951569307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_131622474(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

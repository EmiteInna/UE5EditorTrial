// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/KuruStoryClipData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryClipData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryClipData();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStoryClipData_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UKuruStorySectionData_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyBase_NoRegister();
	KURUSTORYRUNTIME_API UEnum* Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void UKuruStoryClipData::StaticRegisterNativesUKuruStoryClipData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKuruStoryClipData);
	UClass* Z_Construct_UClass_UKuruStoryClipData_NoRegister()
	{
		return UKuruStoryClipData::StaticClass();
	}
	struct Z_Construct_UClass_UKuruStoryClipData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Teller_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Teller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleContent_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SimpleContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalLength_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TotalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneDialog_MetaData[];
#endif
		static void NewProp_bIsOneDialog_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneDialog;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosePreviousDialogFrontPanel_MetaData[];
#endif
		static void NewProp_bClosePreviousDialogFrontPanel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosePreviousDialogFrontPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenNewDialogFrontPanel_MetaData[];
#endif
		static void NewProp_bOpenNewDialogFrontPanel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenNewDialogFrontPanel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WaitForOperation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitForOperation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaitForOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notifies_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Notifies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notifies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Notifies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKuruStoryClipData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d\n */" },
#endif
		{ "IncludePath", "KuruStoryClipData.h" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5""Clip\xe7\x9a\x84\xe5\xba\x8f\xe5\x8f\xb7\xef\xbc\x8c\xe7\x94\xb1\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe5\x8a\xa8\xe6\x80\x81\xe7\x94\x9f\xe6\x88\x90\xef\xbc\x8c\xe4\xb8\x8d\xe7\x94\xa8\xe6\x94\xb9\n" },
#endif
		{ "DisplayName", "\xe5\xba\x8f\xe5\x8f\xb7" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5""Clip\xe7\x9a\x84\xe5\xba\x8f\xe5\x8f\xb7\xef\xbc\x8c\xe7\x94\xb1\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe5\x8a\xa8\xe6\x80\x81\xe7\x94\x9f\xe6\x88\x90\xef\xbc\x8c\xe4\xb8\x8d\xe7\x94\xa8\xe6\x94\xb9" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Number), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5""Clip\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\xa4\xb4\xe5\x83\x8f\n" },
#endif
		{ "DisplayName", "\xe5\xa4\xb4\xe5\x83\x8f" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5""Clip\xe7\x9a\x84\xe8\xa7\x92\xe8\x89\xb2\xe5\xa4\xb4\xe5\x83\x8f" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D = { "Texture2D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Texture2D), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5""Clip\xe7\x9a\x84\xe8\xaf\xb4\xe8\xaf\x9d\xe8\x80\x85\n" },
#endif
		{ "DisplayName", "\xe8\xaf\xb4\xe8\xaf\x9d\xe8\x80\x85" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5""Clip\xe7\x9a\x84\xe8\xaf\xb4\xe8\xaf\x9d\xe8\x80\x85" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller = { "Teller", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Teller), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5""Clip\xe7\x9a\x84\xe7\xae\x80\xe5\x8d\x95\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x88\xe6\x89\x80\xe4\xbb\xa5\xe8\xaf\xb4\xe7\x9b\xae\xe5\x89\x8d\xe4\xb9\x9f\xe6\xb2\xa1\xe6\x9c\x89""complex\xe5\x86\x85\xe5\xae\xb9\xe5\x95\x8a\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe5\x86\x85\xe5\xae\xb9" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5""Clip\xe7\x9a\x84\xe7\xae\x80\xe5\x8d\x95\xe5\x86\x85\xe5\xae\xb9\xef\xbc\x88\xe6\x89\x80\xe4\xbb\xa5\xe8\xaf\xb4\xe7\x9b\xae\xe5\x89\x8d\xe4\xb9\x9f\xe6\xb2\xa1\xe6\x9c\x89""complex\xe5\x86\x85\xe5\xae\xb9\xe5\x95\x8a\xef\xbc\x89" },
#endif
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent = { "SimpleContent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, SimpleContent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5""Clip\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6\n" },
#endif
		{ "DisplayName", "\xe6\x80\xbb\xe9\x95\xbf\xe5\xba\xa6" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5""Clip\xe7\x9a\x84\xe9\x95\xbf\xe5\xba\xa6" },
#endif
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength = { "TotalLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, TotalLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xaf\xa5""Clip\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xb8\x80\xe5\x8f\xa5\xe8\xaf\x9d\xef\xbc\x88\xe9\x9c\x80\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\x9f\xe6\x88\x90\xe5\xbc\x95\xe5\x8f\xb7\xef\xbc\x89\n" },
#endif
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xb8\x80\xe5\x8f\xa5\xe5\xaf\xb9\xe8\xaf\x9d" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xaf\xa5""Clip\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe4\xb8\x80\xe5\x8f\xa5\xe8\xaf\x9d\xef\xbc\x88\xe9\x9c\x80\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe7\x94\x9f\xe6\x88\x90\xe5\xbc\x95\xe5\x8f\xb7\xef\xbc\x89" },
#endif
	};
#endif
	void Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog_SetBit(void* Obj)
	{
		((UKuruStoryClipData*)Obj)->bIsOneDialog = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog = { "bIsOneDialog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKuruStoryClipData), &Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe5\x85\xb3\xe9\x97\xad\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86\n" },
#endif
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\xb3\xe9\x97\xad\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x89\x8d\xe6\x99\xaf\xe6\xa1\x86" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\xb3\xe9\x97\xad\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86" },
#endif
	};
#endif
	void Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel_SetBit(void* Obj)
	{
		((UKuruStoryClipData*)Obj)->bClosePreviousDialogFrontPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel = { "bClosePreviousDialogFrontPanel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKuruStoryClipData), &Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe6\x89\x93\xe5\xbc\x80\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86\n" },
#endif
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x89\x93\xe5\xbc\x80\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe7\x9a\x84\xe5\xaf\xb9\xe8\xaf\x9d\xe5\x89\x8d\xe6\x99\xaf\xe6\xa1\x86" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x89\x93\xe5\xbc\x80\xe5\x89\x8d\xe4\xb8\x80\xe4\xb8\xaa\xe6\x96\xb0\xe5\xaf\xb9\xe8\xaf\x9d\xe6\xa1\x86" },
#endif
	};
#endif
	void Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel_SetBit(void* Obj)
	{
		((UKuruStoryClipData*)Obj)->bOpenNewDialogFrontPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel = { "bOpenNewDialogFrontPanel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UKuruStoryClipData), &Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation_Inner = { "WaitForOperation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation, METADATA_PARAMS(0, nullptr) }; // 2695915994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\x80\xbc\xef\xbc\x8c\xe8\xaf\xa5""Clip\xe4\xb8\x8d\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xef\xbc\x8c\xe8\x80\x8c\xe6\x98\xaf\xe7\xad\x89\xe5\xbe\x85\xe8\xbe\x93\xe5\x85\xa5\xe5\xaf\xb9\xe5\xba\x94\xe6\x8c\x87\xe4\xbb\xa4\xe5\x86\x8d\xe7\xbb\x93\xe6\x9d\x9f\xe3\x80\x82\n" },
#endif
		{ "DisplayName", "\xe6\x98\xaf\xe5\x90\xa6\xe7\xad\x89\xe5\xbe\x85\xe8\xbe\x93\xe5\x85\xa5" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xa6\x82\xe6\x9e\x9c\xe6\x9c\x89\xe5\x80\xbc\xef\xbc\x8c\xe8\xaf\xa5""Clip\xe4\xb8\x8d\xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x93\xe6\x9d\x9f\xef\xbc\x8c\xe8\x80\x8c\xe6\x98\xaf\xe7\xad\x89\xe5\xbe\x85\xe8\xbe\x93\xe5\x85\xa5\xe5\xaf\xb9\xe5\xba\x94\xe6\x8c\x87\xe4\xbb\xa4\xe5\x86\x8d\xe7\xbb\x93\xe6\x9d\x9f\xe3\x80\x82" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation = { "WaitForOperation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, WaitForOperation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation_MetaData) }; // 2695915994
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_Inner_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x89\xe4\xb8\x80\xe8\xaf\xb4\xe4\xb8\x80\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe4\xb8\x9c\xe8\xa5\xbf\xe6\xa0\xb9\xe6\x9c\xac\xe6\xb2\xa1\xe5\xbf\x85\xe8\xa6\x81\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xef\xbc\x8c\xe5\x8f\xaa\xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86""Export\xe6\x88\x91\xe4\xbb\xac\xe6\x89\x8d\xe8\xbf\x99\xe4\xb9\x88\xe5\x81\x9a\xe3\x80\x82\n" },
#endif
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x89\xe4\xb8\x80\xe8\xaf\xb4\xe4\xb8\x80\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe4\xb8\x9c\xe8\xa5\xbf\xe6\xa0\xb9\xe6\x9c\xac\xe6\xb2\xa1\xe5\xbf\x85\xe8\xa6\x81\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xef\xbc\x8c\xe5\x8f\xaa\xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86""Export\xe6\x88\x91\xe4\xbb\xac\xe6\x89\x8d\xe8\xbf\x99\xe4\xb9\x88\xe5\x81\x9a\xe3\x80\x82" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_Inner = { "Notifies", nullptr, (EPropertyFlags)0x00020000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStoryNotifyBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_Inner_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_MetaData[] = {
		{ "Category", "Story" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9c\x89\xe4\xb8\x80\xe8\xaf\xb4\xe4\xb8\x80\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe4\xb8\x9c\xe8\xa5\xbf\xe6\xa0\xb9\xe6\x9c\xac\xe6\xb2\xa1\xe5\xbf\x85\xe8\xa6\x81\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xef\xbc\x8c\xe5\x8f\xaa\xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86""Export\xe6\x88\x91\xe4\xbb\xac\xe6\x89\x8d\xe8\xbf\x99\xe4\xb9\x88\xe5\x81\x9a\xe3\x80\x82\n" },
#endif
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x89\xe4\xb8\x80\xe8\xaf\xb4\xe4\xb8\x80\xef\xbc\x8c\xe8\xbf\x99\xe4\xb8\xaa\xe4\xb8\x9c\xe8\xa5\xbf\xe6\xa0\xb9\xe6\x9c\xac\xe6\xb2\xa1\xe5\xbf\x85\xe8\xa6\x81\xe6\x9a\xb4\xe9\x9c\xb2\xe7\xbb\x99\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xef\xbc\x8c\xe5\x8f\xaa\xe6\x98\xaf\xe4\xb8\xba\xe4\xba\x86""Export\xe6\x88\x91\xe4\xbb\xac\xe6\x89\x8d\xe8\xbf\x99\xe4\xb9\x88\xe5\x81\x9a\xe3\x80\x82" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies = { "Notifies", nullptr, (EPropertyFlags)0x0010008000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Notifies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Hide" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "KuruStoryClipData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKuruStoryClipData, Parent), Z_Construct_UClass_UKuruStorySectionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent_MetaData), Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Texture2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Teller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_SimpleContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_TotalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bIsOneDialog,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bClosePreviousDialogFrontPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_bOpenNewDialogFrontPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_WaitForOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Notifies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKuruStoryClipData_Statics::NewProp_Parent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKuruStoryClipData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKuruStoryClipData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKuruStoryClipData_Statics::ClassParams = {
		&UKuruStoryClipData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::Class_MetaDataParams), Z_Construct_UClass_UKuruStoryClipData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKuruStoryClipData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UKuruStoryClipData()
	{
		if (!Z_Registration_Info_UClass_UKuruStoryClipData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKuruStoryClipData.OuterSingleton, Z_Construct_UClass_UKuruStoryClipData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKuruStoryClipData.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<UKuruStoryClipData>()
	{
		return UKuruStoryClipData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKuruStoryClipData);
	UKuruStoryClipData::~UKuruStoryClipData() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryClipData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryClipData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKuruStoryClipData, UKuruStoryClipData::StaticClass, TEXT("UKuruStoryClipData"), &Z_Registration_Info_UClass_UKuruStoryClipData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKuruStoryClipData), 1016798408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryClipData_h_513169451(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryClipData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryClipData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

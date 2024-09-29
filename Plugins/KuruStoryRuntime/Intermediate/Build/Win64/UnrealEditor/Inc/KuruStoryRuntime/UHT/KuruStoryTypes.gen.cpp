// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/KuruStoryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKuruStoryTypes() {}
// Cross Module References
	KURUSTORYRUNTIME_API UEnum* Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStoryPanelOperation;
	static UEnum* EStoryPanelOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStoryPanelOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStoryPanelOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation, (UObject*)Z_Construct_UPackage__Script_KuruStoryRuntime(), TEXT("EStoryPanelOperation"));
		}
		return Z_Registration_Info_UEnum_EStoryPanelOperation.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UEnum* StaticEnum<EStoryPanelOperation>()
	{
		return EStoryPanelOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::Enumerators[] = {
		{ "E_Invalid", (int64)E_Invalid },
		{ "E_GotoNext", (int64)E_GotoNext },
		{ "E_Chose", (int64)E_Chose },
		{ "E_Zoom", (int64)E_Zoom },
		{ "E_ZoomExit", (int64)E_ZoomExit },
		{ "E_HidePanel", (int64)E_HidePanel },
		{ "E_ShowHistory", (int64)E_ShowHistory },
		{ "E_QuickSave", (int64)E_QuickSave },
		{ "E_QuickLoad", (int64)E_QuickLoad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_Chose.Comment", "//\xe5\x8d\x95\xe5\x87\xbb\xe4\xb8\x8b\xe4\xb8\x80\xe5\x8f\xa5\n" },
		{ "E_Chose.Name", "E_Chose" },
		{ "E_Chose.ToolTip", "\xe5\x8d\x95\xe5\x87\xbb\xe4\xb8\x8b\xe4\xb8\x80\xe5\x8f\xa5" },
		{ "E_GotoNext.Comment", "//\xe6\x97\xa0\xe6\x95\x88\xe6\x93\x8d\xe4\xbd\x9c\n" },
		{ "E_GotoNext.Name", "E_GotoNext" },
		{ "E_GotoNext.ToolTip", "\xe6\x97\xa0\xe6\x95\x88\xe6\x93\x8d\xe4\xbd\x9c" },
		{ "E_HidePanel.Comment", "//\xe9\x80\x80\xe5\x87\xba\xe5\xbf\xab\xe8\xbf\x9b\n" },
		{ "E_HidePanel.Name", "E_HidePanel" },
		{ "E_HidePanel.ToolTip", "\xe9\x80\x80\xe5\x87\xba\xe5\xbf\xab\xe8\xbf\x9b" },
		{ "E_Invalid.Name", "E_Invalid" },
		{ "E_QuickLoad.Comment", "//\xe5\xbf\xab\xe9\x80\x9f\xe4\xbf\x9d\xe5\xad\x98\n" },
		{ "E_QuickLoad.Name", "E_QuickLoad" },
		{ "E_QuickLoad.ToolTip", "\xe5\xbf\xab\xe9\x80\x9f\xe4\xbf\x9d\xe5\xad\x98" },
		{ "E_QuickSave.Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe5\x8e\x86\xe5\x8f\xb2\n" },
		{ "E_QuickSave.Name", "E_QuickSave" },
		{ "E_QuickSave.ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe5\x8e\x86\xe5\x8f\xb2" },
		{ "E_ShowHistory.Comment", "//\xe9\x9a\x90\xe8\x97\x8f\xe5\xbd\x93\xe5\x89\x8d\xe5\x89\x8d\xe6\x99\xaf\xe6\xa1\x86\n" },
		{ "E_ShowHistory.Name", "E_ShowHistory" },
		{ "E_ShowHistory.ToolTip", "\xe9\x9a\x90\xe8\x97\x8f\xe5\xbd\x93\xe5\x89\x8d\xe5\x89\x8d\xe6\x99\xaf\xe6\xa1\x86" },
		{ "E_Zoom.Comment", "//\xe8\xbf\x9b\xe8\xa1\x8c\xe9\x80\x89\xe6\x8b\xa9\n" },
		{ "E_Zoom.Name", "E_Zoom" },
		{ "E_Zoom.ToolTip", "\xe8\xbf\x9b\xe8\xa1\x8c\xe9\x80\x89\xe6\x8b\xa9" },
		{ "E_ZoomExit.Comment", "//\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbf\xab\xe8\xbf\x9b\n" },
		{ "E_ZoomExit.Name", "E_ZoomExit" },
		{ "E_ZoomExit.ToolTip", "\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbf\xab\xe8\xbf\x9b" },
		{ "ModuleRelativePath", "KuruStoryTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
		nullptr,
		"EStoryPanelOperation",
		"EStoryPanelOperation",
		Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation()
	{
		if (!Z_Registration_Info_UEnum_EStoryPanelOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStoryPanelOperation.InnerSingleton, Z_Construct_UEnum_KuruStoryRuntime_EStoryPanelOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStoryPanelOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryTypes_h_Statics::EnumInfo[] = {
		{ EStoryPanelOperation_StaticEnum, TEXT("EStoryPanelOperation"), &Z_Registration_Info_UEnum_EStoryPanelOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2695915994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryTypes_h_1688845568(TEXT("/Script/KuruStoryRuntime"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

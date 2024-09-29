// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KuruStoryRuntime/StoryNotifies/SNE_PlaySoundwave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNE_PlaySoundwave() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_PlaySoundwave();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_USNE_PlaySoundwave_NoRegister();
	KURUSTORYRUNTIME_API UClass* Z_Construct_UClass_UStoryNotifyEventBase();
	UPackage* Z_Construct_UPackage__Script_KuruStoryRuntime();
// End Cross Module References
	void USNE_PlaySoundwave::StaticRegisterNativesUSNE_PlaySoundwave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USNE_PlaySoundwave);
	UClass* Z_Construct_UClass_USNE_PlaySoundwave_NoRegister()
	{
		return USNE_PlaySoundwave::StaticClass();
	}
	struct Z_Construct_UClass_USNE_PlaySoundwave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayPositionInSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayPositionInSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaySpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USNE_PlaySoundwave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStoryNotifyEventBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KuruStoryRuntime,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlaySoundwave_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StoryNotifies/SNE_PlaySoundwave.h" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlaySoundwave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_SoundToPlay_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe9\x9f\xb3\xe9\xa2\x91" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlaySoundwave.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_PlaySoundwave, SoundToPlay), Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_SoundToPlay_MetaData), Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_SoundToPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe9\x9f\xb3\xe9\x87\x8f" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlaySoundwave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_PlaySoundwave, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_Amplitude_MetaData), Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_Amplitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlayPositionInSpace_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe7\xa9\xba\xe9\x97\xb4\xe4\xbd\x8d\xe7\xbd\xae\xe5\x81\x8f\xe7\xa7\xbb" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlaySoundwave.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlayPositionInSpace = { "PlayPositionInSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_PlaySoundwave, PlayPositionInSpace), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlayPositionInSpace_MetaData), Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlayPositionInSpace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe5\xbc\x80\xe5\xa7\x8b\xe4\xbd\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlaySoundwave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_PlaySoundwave, StartPosition), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_StartPosition_MetaData), Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_StartPosition_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlaySpeed_MetaData[] = {
		{ "Category", "Story" },
		{ "DisplayName", "\xe6\x92\xad\xe6\x94\xbe\xe9\x80\x9f\xe5\xba\xa6" },
		{ "ModuleRelativePath", "StoryNotifies/SNE_PlaySoundwave.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlaySpeed = { "PlaySpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USNE_PlaySoundwave, PlaySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlaySpeed_MetaData), Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlaySpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USNE_PlaySoundwave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_SoundToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlayPositionInSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USNE_PlaySoundwave_Statics::NewProp_PlaySpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USNE_PlaySoundwave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USNE_PlaySoundwave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USNE_PlaySoundwave_Statics::ClassParams = {
		&USNE_PlaySoundwave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USNE_PlaySoundwave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::Class_MetaDataParams), Z_Construct_UClass_USNE_PlaySoundwave_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USNE_PlaySoundwave_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USNE_PlaySoundwave()
	{
		if (!Z_Registration_Info_UClass_USNE_PlaySoundwave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USNE_PlaySoundwave.OuterSingleton, Z_Construct_UClass_USNE_PlaySoundwave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USNE_PlaySoundwave.OuterSingleton;
	}
	template<> KURUSTORYRUNTIME_API UClass* StaticClass<USNE_PlaySoundwave>()
	{
		return USNE_PlaySoundwave::StaticClass();
	}
	USNE_PlaySoundwave::USNE_PlaySoundwave() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USNE_PlaySoundwave);
	USNE_PlaySoundwave::~USNE_PlaySoundwave() {}
	struct Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlaySoundwave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlaySoundwave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USNE_PlaySoundwave, USNE_PlaySoundwave::StaticClass, TEXT("USNE_PlaySoundwave"), &Z_Registration_Info_UClass_USNE_PlaySoundwave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USNE_PlaySoundwave), 3047516754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlaySoundwave_h_266350832(TEXT("/Script/KuruStoryRuntime"),
		Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlaySoundwave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_StoryNotifies_SNE_PlaySoundwave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

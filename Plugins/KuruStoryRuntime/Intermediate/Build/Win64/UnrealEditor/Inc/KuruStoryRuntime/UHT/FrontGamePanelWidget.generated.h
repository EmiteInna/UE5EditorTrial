// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RuntimeWidgets/FrontGamePanelWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef KURUSTORYRUNTIME_FrontGamePanelWidget_generated_h
#error "FrontGamePanelWidget.generated.h already included, missing '#pragma once' in FrontGamePanelWidget.h"
#endif
#define KURUSTORYRUNTIME_FrontGamePanelWidget_generated_h

#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_SPARSE_DATA
#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartToTypewrite); \
	DECLARE_FUNCTION(execSetContentAndTypeSpeed); \
	DECLARE_FUNCTION(execSetContentAndTypeDuration); \
	DECLARE_FUNCTION(execSetSpeaker); \
	DECLARE_FUNCTION(execSetImagePic); \
	DECLARE_FUNCTION(execToNewStateInstant); \
	DECLARE_FUNCTION(execToNewState);


#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_ACCESSORS
#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrontGamePanelWidget(); \
	friend struct Z_Construct_UClass_UFrontGamePanelWidget_Statics; \
public: \
	DECLARE_CLASS(UFrontGamePanelWidget, UKuruStoryPanel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KuruStoryRuntime"), NO_API) \
	DECLARE_SERIALIZER(UFrontGamePanelWidget)


#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrontGamePanelWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFrontGamePanelWidget(UFrontGamePanelWidget&&); \
	NO_API UFrontGamePanelWidget(const UFrontGamePanelWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrontGamePanelWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrontGamePanelWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrontGamePanelWidget) \
	NO_API virtual ~UFrontGamePanelWidget();


#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_29_PROLOG
#define FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_SPARSE_DATA \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_ACCESSORS \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_INCLASS_NO_PURE_DECLS \
	FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KURUSTORYRUNTIME_API UClass* StaticClass<class UFrontGamePanelWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_RuntimeWidgets_FrontGamePanelWidget_h


#define FOREACH_ENUM_EKURUFRONTGAMEPANELSTATE(op) \
	op(E_ShowBlank) \
	op(E_ShowOnlyContent) \
	op(E_ShowAll) \
	op(E_Transitioning) 

enum EKuruFrontGamePanelState : uint8;
template<> KURUSTORYRUNTIME_API UEnum* StaticEnum<EKuruFrontGamePanelState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

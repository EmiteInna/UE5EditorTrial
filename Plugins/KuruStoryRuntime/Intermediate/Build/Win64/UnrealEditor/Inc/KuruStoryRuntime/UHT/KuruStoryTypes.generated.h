// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "KuruStoryTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KURUSTORYRUNTIME_KuruStoryTypes_generated_h
#error "KuruStoryTypes.generated.h already included, missing '#pragma once' in KuruStoryTypes.h"
#endif
#define KURUSTORYRUNTIME_KuruStoryTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_KuruADV_Plugins_KuruStoryRuntime_Source_KuruStoryRuntime_KuruStoryTypes_h


#define FOREACH_ENUM_ESTORYPANELOPERATION(op) \
	op(E_Invalid) \
	op(E_GotoNext) \
	op(E_Chose) \
	op(E_Zoom) \
	op(E_ZoomExit) \
	op(E_HidePanel) \
	op(E_ShowHistory) \
	op(E_QuickSave) \
	op(E_QuickLoad) 

enum EStoryPanelOperation : uint8;
template<> KURUSTORYRUNTIME_API UEnum* StaticEnum<EStoryPanelOperation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

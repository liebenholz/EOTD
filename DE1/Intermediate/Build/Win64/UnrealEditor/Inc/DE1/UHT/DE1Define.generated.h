// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DE1Define.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1Define_generated_h
#error "DE1Define.generated.h already included, missing '#pragma once' in DE1Define.h"
#endif
#define DE1_DE1Define_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_DE1Define_h


#define FOREACH_ENUM_EDE1ATTRIBUTETYPE(op) \
	op(EDE1AttributeType::Stamina) \
	op(EDE1AttributeType::Health) 

enum class EDE1AttributeType : uint8;
template<> struct TIsUEnumClass<EDE1AttributeType> { enum { Value = true }; };
template<> DE1_API UEnum* StaticEnum<EDE1AttributeType>();

#define FOREACH_ENUM_EHITDIRECTION(op) \
	op(EHitDirection::Front) \
	op(EHitDirection::Back) \
	op(EHitDirection::Left) \
	op(EHitDirection::Right) 

enum class EHitDirection : uint8;
template<> struct TIsUEnumClass<EHitDirection> { enum { Value = true }; };
template<> DE1_API UEnum* StaticEnum<EHitDirection>();

#define FOREACH_ENUM_ESWITCHINGDIRECTION(op) \
	op(ESwitchingDirection::None) \
	op(ESwitchingDirection::Left) \
	op(ESwitchingDirection::Right) 

enum class ESwitchingDirection : uint8;
template<> struct TIsUEnumClass<ESwitchingDirection> { enum { Value = true }; };
template<> DE1_API UEnum* StaticEnum<ESwitchingDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

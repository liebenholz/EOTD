// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/DE1GameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1GameMode_generated_h
#error "DE1GameMode.generated.h already included, missing '#pragma once' in DE1GameMode.h"
#endif
#define DE1_DE1GameMode_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADE1GameMode(); \
	friend struct Z_Construct_UClass_ADE1GameMode_Statics; \
public: \
	DECLARE_CLASS(ADE1GameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(ADE1GameMode)


#define FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADE1GameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADE1GameMode(ADE1GameMode&&); \
	ADE1GameMode(const ADE1GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADE1GameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADE1GameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADE1GameMode) \
	NO_API virtual ~ADE1GameMode();


#define FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_12_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class ADE1GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

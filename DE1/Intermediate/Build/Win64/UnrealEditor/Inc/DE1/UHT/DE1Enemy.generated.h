// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/DE1Enemy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1Enemy_generated_h
#error "DE1Enemy.generated.h already included, missing '#pragma once' in DE1Enemy.h"
#endif
#define DE1_DE1Enemy_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADE1Enemy(); \
	friend struct Z_Construct_UClass_ADE1Enemy_Statics; \
public: \
	DECLARE_CLASS(ADE1Enemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(ADE1Enemy)


#define FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADE1Enemy(ADE1Enemy&&); \
	ADE1Enemy(const ADE1Enemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADE1Enemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADE1Enemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADE1Enemy) \
	NO_API virtual ~ADE1Enemy();


#define FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_12_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_15_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class ADE1Enemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

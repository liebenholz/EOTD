// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerController/DE1PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1PlayerController_generated_h
#error "DE1PlayerController.generated.h already included, missing '#pragma once' in DE1PlayerController.h"
#endif
#define DE1_DE1PlayerController_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADE1PlayerController(); \
	friend struct Z_Construct_UClass_ADE1PlayerController_Statics; \
public: \
	DECLARE_CLASS(ADE1PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(ADE1PlayerController)


#define FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADE1PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADE1PlayerController(ADE1PlayerController&&); \
	ADE1PlayerController(const ADE1PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADE1PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADE1PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADE1PlayerController) \
	NO_API virtual ~ADE1PlayerController();


#define FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_12_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class ADE1PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

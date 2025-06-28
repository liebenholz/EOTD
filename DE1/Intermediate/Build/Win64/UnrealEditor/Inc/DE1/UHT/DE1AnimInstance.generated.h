// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/DE1AnimInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1AnimInstance_generated_h
#error "DE1AnimInstance.generated.h already included, missing '#pragma once' in DE1AnimInstance.h"
#endif
#define DE1_DE1AnimInstance_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimNotify_ResetState); \
	DECLARE_FUNCTION(execAnimNotify_ResetMovementInput);


#define FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDE1AnimInstance(); \
	friend struct Z_Construct_UClass_UDE1AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UDE1AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(UDE1AnimInstance)


#define FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDE1AnimInstance(UDE1AnimInstance&&); \
	UDE1AnimInstance(const UDE1AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDE1AnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDE1AnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDE1AnimInstance) \
	NO_API virtual ~UDE1AnimInstance();


#define FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_11_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class UDE1AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/DE1StateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1StateComponent_generated_h
#error "DE1StateComponent.generated.h already included, missing '#pragma once' in DE1StateComponent.h"
#endif
#define DE1_DE1StateComponent_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMovementInputEnableAction);


#define FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDE1StateComponent(); \
	friend struct Z_Construct_UClass_UDE1StateComponent_Statics; \
public: \
	DECLARE_CLASS(UDE1StateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(UDE1StateComponent)


#define FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDE1StateComponent(UDE1StateComponent&&); \
	UDE1StateComponent(const UDE1StateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDE1StateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDE1StateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDE1StateComponent) \
	NO_API virtual ~UDE1StateComponent();


#define FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_11_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class UDE1StateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

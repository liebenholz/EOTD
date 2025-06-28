// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/DE1Interact.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1Interact_generated_h
#error "DE1Interact.generated.h already included, missing '#pragma once' in DE1Interact.h"
#endif
#define DE1_DE1Interact_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DE1_API UDE1Interact(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDE1Interact(UDE1Interact&&); \
	UDE1Interact(const UDE1Interact&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DE1_API, UDE1Interact); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDE1Interact); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDE1Interact) \
	DE1_API virtual ~UDE1Interact();


#define FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDE1Interact(); \
	friend struct Z_Construct_UClass_UDE1Interact_Statics; \
public: \
	DECLARE_CLASS(UDE1Interact, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DE1"), DE1_API) \
	DECLARE_SERIALIZER(UDE1Interact)


#define FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDE1Interact() {} \
public: \
	typedef UDE1Interact UClassType; \
	typedef IDE1Interact ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_10_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class UDE1Interact>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

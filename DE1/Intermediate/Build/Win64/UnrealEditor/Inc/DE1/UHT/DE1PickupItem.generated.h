// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/DE1PickupItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1PickupItem_generated_h
#error "DE1PickupItem.generated.h already included, missing '#pragma once' in DE1PickupItem.h"
#endif
#define DE1_DE1PickupItem_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADE1PickupItem(); \
	friend struct Z_Construct_UClass_ADE1PickupItem_Statics; \
public: \
	DECLARE_CLASS(ADE1PickupItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(ADE1PickupItem) \
	virtual UObject* _getUObject() const override { return const_cast<ADE1PickupItem*>(this); }


#define FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADE1PickupItem(ADE1PickupItem&&); \
	ADE1PickupItem(const ADE1PickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADE1PickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADE1PickupItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADE1PickupItem) \
	NO_API virtual ~ADE1PickupItem();


#define FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_11_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class ADE1PickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

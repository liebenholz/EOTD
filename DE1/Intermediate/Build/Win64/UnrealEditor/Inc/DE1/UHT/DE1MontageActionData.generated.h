// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DE1MontageActionData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DE1_DE1MontageActionData_generated_h
#error "DE1MontageActionData.generated.h already included, missing '#pragma once' in DE1MontageActionData.h"
#endif
#define DE1_DE1MontageActionData_generated_h

#define FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDE1MontageGroup_Statics; \
	DE1_API static class UScriptStruct* StaticStruct();


template<> DE1_API UScriptStruct* StaticStruct<struct FDE1MontageGroup>();

#define FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDE1MontageActionData(); \
	friend struct Z_Construct_UClass_UDE1MontageActionData_Statics; \
public: \
	DECLARE_CLASS(UDE1MontageActionData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DE1"), NO_API) \
	DECLARE_SERIALIZER(UDE1MontageActionData)


#define FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDE1MontageActionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDE1MontageActionData(UDE1MontageActionData&&); \
	UDE1MontageActionData(const UDE1MontageActionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDE1MontageActionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDE1MontageActionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDE1MontageActionData) \
	NO_API virtual ~UDE1MontageActionData();


#define FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_23_PROLOG
#define FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_26_INCLASS_NO_PURE_DECLS \
	FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DE1_API UClass* StaticClass<class UDE1MontageActionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

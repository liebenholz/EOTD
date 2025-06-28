// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Animation/DE1AnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1AnimInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DE1_API UClass* Z_Construct_UClass_UDE1AnimInstance();
DE1_API UClass* Z_Construct_UClass_UDE1AnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1AnimInstance Function AnimNotify_ResetMovementInput
struct Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDE1AnimInstance, nullptr, "AnimNotify_ResetMovementInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDE1AnimInstance::execAnimNotify_ResetMovementInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_ResetMovementInput();
	P_NATIVE_END;
}
// End Class UDE1AnimInstance Function AnimNotify_ResetMovementInput

// Begin Class UDE1AnimInstance Function AnimNotify_ResetState
struct Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDE1AnimInstance, nullptr, "AnimNotify_ResetState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDE1AnimInstance::execAnimNotify_ResetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_ResetState();
	P_NATIVE_END;
}
// End Class UDE1AnimInstance Function AnimNotify_ResetState

// Begin Class UDE1AnimInstance
void UDE1AnimInstance::StaticRegisterNativesUDE1AnimInstance()
{
	UClass* Class = UDE1AnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_ResetMovementInput", &UDE1AnimInstance::execAnimNotify_ResetMovementInput },
		{ "AnimNotify_ResetState", &UDE1AnimInstance::execAnimNotify_ResetState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1AnimInstance);
UClass* Z_Construct_UClass_UDE1AnimInstance_NoRegister()
{
	return UDE1AnimInstance::StaticClass();
}
struct Z_Construct_UClass_UDE1AnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/DE1AnimInstance.h" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "References" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[] = {
		{ "Category", "References" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldMove_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Movement Data" },
		{ "ModuleRelativePath", "Animation/DE1AnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_bShouldMove_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldMove;
	static void NewProp_bIsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetMovementInput, "AnimNotify_ResetMovementInput" }, // 3796885277
		{ &Z_Construct_UFunction_UDE1AnimInstance_AnimNotify_ResetState, "AnimNotify_ResetState" }, // 2269816868
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1AnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AnimInstance, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AnimInstance, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComponent_MetaData), NewProp_MovementComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AnimInstance, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Velocity_MetaData), NewProp_Velocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bShouldMove_SetBit(void* Obj)
{
	((UDE1AnimInstance*)Obj)->bShouldMove = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bShouldMove = { "bShouldMove", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDE1AnimInstance), &Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bShouldMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldMove_MetaData), NewProp_bShouldMove_MetaData) };
void Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
{
	((UDE1AnimInstance*)Obj)->bIsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDE1AnimInstance), &Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFalling_MetaData), NewProp_bIsFalling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1AnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_MovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_Velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bShouldMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AnimInstance_Statics::NewProp_bIsFalling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1AnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1AnimInstance_Statics::ClassParams = {
	&UDE1AnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDE1AnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1AnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1AnimInstance()
{
	if (!Z_Registration_Info_UClass_UDE1AnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1AnimInstance.OuterSingleton, Z_Construct_UClass_UDE1AnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1AnimInstance.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1AnimInstance>()
{
	return UDE1AnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1AnimInstance);
UDE1AnimInstance::~UDE1AnimInstance() {}
// End Class UDE1AnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1AnimInstance, UDE1AnimInstance::StaticClass, TEXT("UDE1AnimInstance"), &Z_Registration_Info_UClass_UDE1AnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1AnimInstance), 2207881211U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_2036208021(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_DE1AnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

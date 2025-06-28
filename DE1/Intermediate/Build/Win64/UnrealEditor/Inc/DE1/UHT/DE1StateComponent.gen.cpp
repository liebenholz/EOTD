// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Components/DE1StateComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1StateComponent() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UDE1StateComponent();
DE1_API UClass* Z_Construct_UClass_UDE1StateComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1StateComponent Function MovementInputEnableAction
struct Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Components/DE1StateComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDE1StateComponent, nullptr, "MovementInputEnableAction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDE1StateComponent::execMovementInputEnableAction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MovementInputEnableAction();
	P_NATIVE_END;
}
// End Class UDE1StateComponent Function MovementInputEnableAction

// Begin Class UDE1StateComponent
void UDE1StateComponent::StaticRegisterNativesUDE1StateComponent()
{
	UClass* Class = UDE1StateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "MovementInputEnableAction", &UDE1StateComponent::execMovementInputEnableAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1StateComponent);
UClass* Z_Construct_UClass_UDE1StateComponent_NoRegister()
{
	return UDE1StateComponent::StaticClass();
}
struct Z_Construct_UClass_UDE1StateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DE1StateComponent.h" },
		{ "ModuleRelativePath", "Components/DE1StateComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMovementInputEnabled_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xc5\xb0 \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Components/DE1StateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xc5\xb0 \xef\xbf\xbd\xd4\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Components/DE1StateComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bMovementInputEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovementInputEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDE1StateComponent_MovementInputEnableAction, "MovementInputEnableAction" }, // 4278109429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1StateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDE1StateComponent_Statics::NewProp_bMovementInputEnabled_SetBit(void* Obj)
{
	((UDE1StateComponent*)Obj)->bMovementInputEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDE1StateComponent_Statics::NewProp_bMovementInputEnabled = { "bMovementInputEnabled", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDE1StateComponent), &Z_Construct_UClass_UDE1StateComponent_Statics::NewProp_bMovementInputEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMovementInputEnabled_MetaData), NewProp_bMovementInputEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDE1StateComponent_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1StateComponent, CurrentState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1StateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1StateComponent_Statics::NewProp_bMovementInputEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1StateComponent_Statics::NewProp_CurrentState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1StateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1StateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1StateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1StateComponent_Statics::ClassParams = {
	&UDE1StateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDE1StateComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1StateComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1StateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1StateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1StateComponent()
{
	if (!Z_Registration_Info_UClass_UDE1StateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1StateComponent.OuterSingleton, Z_Construct_UClass_UDE1StateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1StateComponent.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1StateComponent>()
{
	return UDE1StateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1StateComponent);
UDE1StateComponent::~UDE1StateComponent() {}
// End Class UDE1StateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1StateComponent, UDE1StateComponent::StaticClass, TEXT("UDE1StateComponent"), &Z_Registration_Info_UClass_UDE1StateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1StateComponent), 2319685374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_3404309188(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1StateComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

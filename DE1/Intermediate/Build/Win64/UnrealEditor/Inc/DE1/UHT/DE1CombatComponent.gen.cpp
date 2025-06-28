// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Components/DE1CombatComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1CombatComponent() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_ADE1Weapon_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1CombatComponent();
DE1_API UClass* Z_Construct_UClass_UDE1CombatComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1CombatComponent
void UDE1CombatComponent::StaticRegisterNativesUDE1CombatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1CombatComponent);
UClass* Z_Construct_UClass_UDE1CombatComponent_NoRegister()
{
	return UDE1CombatComponent::StaticClass();
}
struct Z_Construct_UClass_UDE1CombatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DE1CombatComponent.h" },
		{ "ModuleRelativePath", "Components/DE1CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Components/DE1CombatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCombatEnabled_MetaData[] = {
		{ "Category", "DE1CombatComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Is Combat Enabled? */" },
#endif
		{ "ModuleRelativePath", "Components/DE1CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is Combat Enabled?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastAttackType_MetaData[] = {
		{ "Category", "DE1CombatComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lastest AttackType */" },
#endif
		{ "ModuleRelativePath", "Components/DE1CombatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lastest AttackType" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainWeapon;
	static void NewProp_bCombatEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCombatEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastAttackType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1CombatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_MainWeapon = { "MainWeapon", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1CombatComponent, MainWeapon), Z_Construct_UClass_ADE1Weapon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainWeapon_MetaData), NewProp_MainWeapon_MetaData) };
void Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_bCombatEnabled_SetBit(void* Obj)
{
	((UDE1CombatComponent*)Obj)->bCombatEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_bCombatEnabled = { "bCombatEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDE1CombatComponent), &Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_bCombatEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCombatEnabled_MetaData), NewProp_bCombatEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_LastAttackType = { "LastAttackType", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1CombatComponent, LastAttackType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastAttackType_MetaData), NewProp_LastAttackType_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1CombatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_MainWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_bCombatEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1CombatComponent_Statics::NewProp_LastAttackType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1CombatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1CombatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1CombatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1CombatComponent_Statics::ClassParams = {
	&UDE1CombatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDE1CombatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1CombatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1CombatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1CombatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1CombatComponent()
{
	if (!Z_Registration_Info_UClass_UDE1CombatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1CombatComponent.OuterSingleton, Z_Construct_UClass_UDE1CombatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1CombatComponent.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1CombatComponent>()
{
	return UDE1CombatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1CombatComponent);
UDE1CombatComponent::~UDE1CombatComponent() {}
// End Class UDE1CombatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1CombatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1CombatComponent, UDE1CombatComponent::StaticClass, TEXT("UDE1CombatComponent"), &Z_Registration_Info_UClass_UDE1CombatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1CombatComponent), 583641395U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1CombatComponent_h_1496975909(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1CombatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1CombatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

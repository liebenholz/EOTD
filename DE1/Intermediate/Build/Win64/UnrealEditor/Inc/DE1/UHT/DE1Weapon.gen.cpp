// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Equipments/DE1Weapon.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1Weapon() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_ADE1Equipment();
DE1_API UClass* Z_Construct_UClass_ADE1Weapon();
DE1_API UClass* Z_Construct_UClass_ADE1Weapon_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1CombatComponent_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1MontageActionData_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1WeaponCollisionComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class ADE1Weapon
void ADE1Weapon::StaticRegisterNativesADE1Weapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADE1Weapon);
UClass* Z_Construct_UClass_ADE1Weapon_NoRegister()
{
	return ADE1Weapon::StaticClass();
}
struct Z_Construct_UClass_ADE1Weapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* \n*/" },
#endif
		{ "IncludePath", "Equipments/DE1Weapon.h" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSocketName_MetaData[] = {
		{ "Category", "Equipment | Socket" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnequipSocketName_MetaData[] = {
		{ "Category", "Equipment | Socket" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageActionData_MetaData[] = {
		{ "Category", "Equipment | Animation" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponCollision_MetaData[] = {
		{ "Category", "DE1Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaCostMap_MetaData[] = {
		{ "Category", "DE1Weapon" },
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseDamage_MetaData[] = {
		{ "Category", "DE1Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplierMap_MetaData[] = {
		{ "Category", "DE1Weapon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xbc\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Equipments/DE1Weapon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_EquipSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_UnequipSocketName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageActionData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaCostMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaminaCostMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StaminaCostMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplierMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageMultiplierMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DamageMultiplierMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADE1Weapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_EquipSocketName = { "EquipSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, EquipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSocketName_MetaData), NewProp_EquipSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_UnequipSocketName = { "UnequipSocketName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, UnequipSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnequipSocketName_MetaData), NewProp_UnequipSocketName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_MontageActionData = { "MontageActionData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, MontageActionData), Z_Construct_UClass_UDE1MontageActionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageActionData_MetaData), NewProp_MontageActionData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_WeaponCollision = { "WeaponCollision", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, WeaponCollision), Z_Construct_UClass_UDE1WeaponCollisionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponCollision_MetaData), NewProp_WeaponCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, CombatComponent), Z_Construct_UClass_UDE1CombatComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombatComponent_MetaData), NewProp_CombatComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_StaminaCostMap_ValueProp = { "StaminaCostMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_StaminaCostMap_Key_KeyProp = { "StaminaCostMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_StaminaCostMap = { "StaminaCostMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, StaminaCostMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaCostMap_MetaData), NewProp_StaminaCostMap_MetaData) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_BaseDamage = { "BaseDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, BaseDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseDamage_MetaData), NewProp_BaseDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_DamageMultiplierMap_ValueProp = { "DamageMultiplierMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_DamageMultiplierMap_Key_KeyProp = { "DamageMultiplierMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADE1Weapon_Statics::NewProp_DamageMultiplierMap = { "DamageMultiplierMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Weapon, DamageMultiplierMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageMultiplierMap_MetaData), NewProp_DamageMultiplierMap_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADE1Weapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_EquipSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_UnequipSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_MontageActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_WeaponCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_CombatComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_StaminaCostMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_StaminaCostMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_StaminaCostMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_BaseDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_DamageMultiplierMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_DamageMultiplierMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Weapon_Statics::NewProp_DamageMultiplierMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Weapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADE1Weapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADE1Equipment,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Weapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADE1Weapon_Statics::ClassParams = {
	&ADE1Weapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADE1Weapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Weapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Weapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ADE1Weapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADE1Weapon()
{
	if (!Z_Registration_Info_UClass_ADE1Weapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADE1Weapon.OuterSingleton, Z_Construct_UClass_ADE1Weapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADE1Weapon.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<ADE1Weapon>()
{
	return ADE1Weapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADE1Weapon);
ADE1Weapon::~ADE1Weapon() {}
// End Class ADE1Weapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Equipments_DE1Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADE1Weapon, ADE1Weapon::StaticClass, TEXT("ADE1Weapon"), &Z_Registration_Info_UClass_ADE1Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADE1Weapon), 1477292764U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Equipments_DE1Weapon_h_2089313386(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Equipments_DE1Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Equipments_DE1Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

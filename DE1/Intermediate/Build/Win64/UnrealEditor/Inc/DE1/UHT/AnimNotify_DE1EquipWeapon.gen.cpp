// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Animation/AnimNotify_DE1EquipWeapon.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_DE1EquipWeapon() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UAnimNotify_DE1EquipWeapon();
DE1_API UClass* Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UAnimNotify_DE1EquipWeapon
void UAnimNotify_DE1EquipWeapon::StaticRegisterNativesUAnimNotify_DE1EquipWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_DE1EquipWeapon);
UClass* Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_NoRegister()
{
	return UAnimNotify_DE1EquipWeapon::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Equip Weapon" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_DE1EquipWeapon.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DE1EquipWeapon.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageActionTag_MetaData[] = {
		{ "Category", "AnimNotify_DE1EquipWeapon" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DE1EquipWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageActionTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_DE1EquipWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::NewProp_MontageActionTag = { "MontageActionTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DE1EquipWeapon, MontageActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageActionTag_MetaData), NewProp_MontageActionTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::NewProp_MontageActionTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::ClassParams = {
	&UAnimNotify_DE1EquipWeapon::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_DE1EquipWeapon()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_DE1EquipWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_DE1EquipWeapon.OuterSingleton, Z_Construct_UClass_UAnimNotify_DE1EquipWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_DE1EquipWeapon.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UAnimNotify_DE1EquipWeapon>()
{
	return UAnimNotify_DE1EquipWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_DE1EquipWeapon);
UAnimNotify_DE1EquipWeapon::~UAnimNotify_DE1EquipWeapon() {}
// End Class UAnimNotify_DE1EquipWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1EquipWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_DE1EquipWeapon, UAnimNotify_DE1EquipWeapon::StaticClass, TEXT("UAnimNotify_DE1EquipWeapon"), &Z_Registration_Info_UClass_UAnimNotify_DE1EquipWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_DE1EquipWeapon), 1249149106U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1EquipWeapon_h_1090082378(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1EquipWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1EquipWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Character/DE1Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1Enemy() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_ADE1Enemy();
DE1_API UClass* Z_Construct_UClass_ADE1Enemy_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1AttributeComponent_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1StateComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class ADE1Enemy
void ADE1Enemy::StaticRegisterNativesADE1Enemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADE1Enemy);
UClass* Z_Construct_UClass_ADE1Enemy_NoRegister()
{
	return ADE1Enemy::StaticClass();
}
struct Z_Construct_UClass_ADE1Enemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/DE1Enemy.h" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[] = {
		{ "Category", "DE1Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[] = {
		{ "Category", "DE1Enemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactParticle_MetaData[] = {
		{ "Category", "Effect" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactAnimFront_MetaData[] = {
		{ "Category", "Montage | HitReact" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactAnimBack_MetaData[] = {
		{ "Category", "Montage | HitReact" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactAnimLeft_MetaData[] = {
		{ "Category", "Montage | HitReact" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitReactAnimRight_MetaData[] = {
		{ "Category", "Montage | HitReact" },
		{ "ModuleRelativePath", "Character/DE1Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactAnimFront;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactAnimBack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactAnimLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitReactAnimRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADE1Enemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, AttributeComponent), Z_Construct_UClass_UDE1AttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComponent_MetaData), NewProp_AttributeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, StateComponent), Z_Construct_UClass_UDE1StateComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateComponent_MetaData), NewProp_StateComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_ImpactSound = { "ImpactSound", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactSound_MetaData), NewProp_ImpactSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_ImpactParticle = { "ImpactParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, ImpactParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactParticle_MetaData), NewProp_ImpactParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimFront = { "HitReactAnimFront", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, HitReactAnimFront), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactAnimFront_MetaData), NewProp_HitReactAnimFront_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimBack = { "HitReactAnimBack", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, HitReactAnimBack), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactAnimBack_MetaData), NewProp_HitReactAnimBack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimLeft = { "HitReactAnimLeft", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, HitReactAnimLeft), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactAnimLeft_MetaData), NewProp_HitReactAnimLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimRight = { "HitReactAnimRight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1Enemy, HitReactAnimRight), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitReactAnimRight_MetaData), NewProp_HitReactAnimRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADE1Enemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_AttributeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_StateComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_ImpactSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_ImpactParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimFront,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1Enemy_Statics::NewProp_HitReactAnimRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Enemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADE1Enemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Enemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADE1Enemy_Statics::ClassParams = {
	&ADE1Enemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADE1Enemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Enemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1Enemy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADE1Enemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADE1Enemy()
{
	if (!Z_Registration_Info_UClass_ADE1Enemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADE1Enemy.OuterSingleton, Z_Construct_UClass_ADE1Enemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADE1Enemy.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<ADE1Enemy>()
{
	return ADE1Enemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADE1Enemy);
ADE1Enemy::~ADE1Enemy() {}
// End Class ADE1Enemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADE1Enemy, ADE1Enemy::StaticClass, TEXT("ADE1Enemy"), &Z_Registration_Info_UClass_ADE1Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADE1Enemy), 1443821987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_100550318(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Character_DE1Enemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

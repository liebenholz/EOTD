// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Components/DE1AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1AttributeComponent() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UDE1AttributeComponent();
DE1_API UClass* Z_Construct_UClass_UDE1AttributeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1AttributeComponent
void UDE1AttributeComponent::StaticRegisterNativesUDE1AttributeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1AttributeComponent);
UClass* Z_Construct_UClass_UDE1AttributeComponent_NoRegister()
{
	return UDE1AttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UDE1AttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DE1AttributeComponent.h" },
		{ "ModuleRelativePath", "Components/DE1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/DE1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStamina_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/DE1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaRegenRate_MetaData[] = {
		{ "Category", "Stamina" },
		{ "ModuleRelativePath", "Components/DE1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/DE1AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Components/DE1AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxStamina;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaminaRegenRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1AttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_BaseStamina = { "BaseStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AttributeComponent, BaseStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseStamina_MetaData), NewProp_BaseStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_MaxStamina = { "MaxStamina", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AttributeComponent, MaxStamina), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStamina_MetaData), NewProp_MaxStamina_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_StaminaRegenRate = { "StaminaRegenRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AttributeComponent, StaminaRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaRegenRate_MetaData), NewProp_StaminaRegenRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_BaseHealth = { "BaseHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AttributeComponent, BaseHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHealth_MetaData), NewProp_BaseHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1AttributeComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1AttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_BaseStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_MaxStamina,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_StaminaRegenRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_BaseHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1AttributeComponent_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1AttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1AttributeComponent_Statics::ClassParams = {
	&UDE1AttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDE1AttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1AttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1AttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1AttributeComponent()
{
	if (!Z_Registration_Info_UClass_UDE1AttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1AttributeComponent.OuterSingleton, Z_Construct_UClass_UDE1AttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1AttributeComponent.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1AttributeComponent>()
{
	return UDE1AttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1AttributeComponent);
UDE1AttributeComponent::~UDE1AttributeComponent() {}
// End Class UDE1AttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1AttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1AttributeComponent, UDE1AttributeComponent::StaticClass, TEXT("UDE1AttributeComponent"), &Z_Registration_Info_UClass_UDE1AttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1AttributeComponent), 4281509495U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1AttributeComponent_h_346944163(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1AttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

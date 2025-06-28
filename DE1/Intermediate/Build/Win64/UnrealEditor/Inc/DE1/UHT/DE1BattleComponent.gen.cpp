// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Components/DE1BattleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1BattleComponent() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UDE1BattleComponent();
DE1_API UClass* Z_Construct_UClass_UDE1BattleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1BattleComponent
void UDE1BattleComponent::StaticRegisterNativesUDE1BattleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1BattleComponent);
UClass* Z_Construct_UClass_UDE1BattleComponent_NoRegister()
{
	return UDE1BattleComponent::StaticClass();
}
struct Z_Construct_UClass_UDE1BattleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DE1BattleComponent.h" },
		{ "ModuleRelativePath", "Components/DE1BattleComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1BattleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDE1BattleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1BattleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1BattleComponent_Statics::ClassParams = {
	&UDE1BattleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1BattleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1BattleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1BattleComponent()
{
	if (!Z_Registration_Info_UClass_UDE1BattleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1BattleComponent.OuterSingleton, Z_Construct_UClass_UDE1BattleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1BattleComponent.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1BattleComponent>()
{
	return UDE1BattleComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1BattleComponent);
UDE1BattleComponent::~UDE1BattleComponent() {}
// End Class UDE1BattleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1BattleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1BattleComponent, UDE1BattleComponent::StaticClass, TEXT("UDE1BattleComponent"), &Z_Registration_Info_UClass_UDE1BattleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1BattleComponent), 15560009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1BattleComponent_h_2266115341(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1BattleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1BattleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

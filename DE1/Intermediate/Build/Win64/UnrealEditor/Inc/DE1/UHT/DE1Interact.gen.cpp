// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Interfaces/DE1Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1Interact() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DE1_API UClass* Z_Construct_UClass_UDE1Interact();
DE1_API UClass* Z_Construct_UClass_UDE1Interact_NoRegister();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Interface UDE1Interact
void UDE1Interact::StaticRegisterNativesUDE1Interact()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1Interact);
UClass* Z_Construct_UClass_UDE1Interact_NoRegister()
{
	return UDE1Interact::StaticClass();
}
struct Z_Construct_UClass_UDE1Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DE1Interact.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDE1Interact>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDE1Interact_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1Interact_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1Interact_Statics::ClassParams = {
	&UDE1Interact::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1Interact_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1Interact_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1Interact()
{
	if (!Z_Registration_Info_UClass_UDE1Interact.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1Interact.OuterSingleton, Z_Construct_UClass_UDE1Interact_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1Interact.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1Interact>()
{
	return UDE1Interact::StaticClass();
}
UDE1Interact::UDE1Interact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1Interact);
UDE1Interact::~UDE1Interact() {}
// End Interface UDE1Interact

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1Interact, UDE1Interact::StaticClass, TEXT("UDE1Interact"), &Z_Registration_Info_UClass_UDE1Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1Interact), 1232708604U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_3483409957(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DE1Interact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

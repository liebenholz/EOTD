// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Interfaces/DS1Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDS1Interact() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DE1_API UClass* Z_Construct_UClass_UDS1Interact();
DE1_API UClass* Z_Construct_UClass_UDS1Interact_NoRegister();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Interface UDS1Interact
void UDS1Interact::StaticRegisterNativesUDS1Interact()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDS1Interact);
UClass* Z_Construct_UClass_UDS1Interact_NoRegister()
{
	return UDS1Interact::StaticClass();
}
struct Z_Construct_UClass_UDS1Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/DS1Interact.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDS1Interact>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDS1Interact_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1Interact_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDS1Interact_Statics::ClassParams = {
	&UDS1Interact::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDS1Interact_Statics::Class_MetaDataParams), Z_Construct_UClass_UDS1Interact_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDS1Interact()
{
	if (!Z_Registration_Info_UClass_UDS1Interact.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDS1Interact.OuterSingleton, Z_Construct_UClass_UDS1Interact_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDS1Interact.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDS1Interact>()
{
	return UDS1Interact::StaticClass();
}
UDS1Interact::UDS1Interact(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDS1Interact);
UDS1Interact::~UDS1Interact() {}
// End Interface UDS1Interact

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DS1Interact_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDS1Interact, UDS1Interact::StaticClass, TEXT("UDS1Interact"), &Z_Registration_Info_UClass_UDS1Interact, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDS1Interact), 1259352457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DS1Interact_h_3525856410(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DS1Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Interfaces_DS1Interact_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

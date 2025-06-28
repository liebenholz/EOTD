// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/PlayerController/DE1PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1PlayerController() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_ADE1PlayerController();
DE1_API UClass* Z_Construct_UClass_ADE1PlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class ADE1PlayerController
void ADE1PlayerController::StaticRegisterNativesADE1PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADE1PlayerController);
UClass* Z_Construct_UClass_ADE1PlayerController_NoRegister()
{
	return ADE1PlayerController::StaticClass();
}
struct Z_Construct_UClass_ADE1PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/DE1PlayerController.h" },
		{ "ModuleRelativePath", "PlayerController/DE1PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADE1PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADE1PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADE1PlayerController_Statics::ClassParams = {
	&ADE1PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ADE1PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADE1PlayerController()
{
	if (!Z_Registration_Info_UClass_ADE1PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADE1PlayerController.OuterSingleton, Z_Construct_UClass_ADE1PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADE1PlayerController.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<ADE1PlayerController>()
{
	return ADE1PlayerController::StaticClass();
}
ADE1PlayerController::ADE1PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADE1PlayerController);
ADE1PlayerController::~ADE1PlayerController() {}
// End Class ADE1PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADE1PlayerController, ADE1PlayerController::StaticClass, TEXT("ADE1PlayerController"), &Z_Registration_Info_UClass_ADE1PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADE1PlayerController), 590653149U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_2860261375(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_PlayerController_DE1PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

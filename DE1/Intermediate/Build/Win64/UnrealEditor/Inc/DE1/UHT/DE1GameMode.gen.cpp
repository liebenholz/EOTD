// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/GameModes/DE1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1GameMode() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_ADE1GameMode();
DE1_API UClass* Z_Construct_UClass_ADE1GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class ADE1GameMode
void ADE1GameMode::StaticRegisterNativesADE1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADE1GameMode);
UClass* Z_Construct_UClass_ADE1GameMode_NoRegister()
{
	return ADE1GameMode::StaticClass();
}
struct Z_Construct_UClass_ADE1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/DE1GameMode.h" },
		{ "ModuleRelativePath", "GameModes/DE1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADE1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADE1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADE1GameMode_Statics::ClassParams = {
	&ADE1GameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADE1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADE1GameMode()
{
	if (!Z_Registration_Info_UClass_ADE1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADE1GameMode.OuterSingleton, Z_Construct_UClass_ADE1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADE1GameMode.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<ADE1GameMode>()
{
	return ADE1GameMode::StaticClass();
}
ADE1GameMode::ADE1GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADE1GameMode);
ADE1GameMode::~ADE1GameMode() {}
// End Class ADE1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADE1GameMode, ADE1GameMode::StaticClass, TEXT("ADE1GameMode"), &Z_Registration_Info_UClass_ADE1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADE1GameMode), 4035883212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_4009972691(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_GameModes_DE1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

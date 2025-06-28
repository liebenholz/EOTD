// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Animation/AnimNotify_DE1AttackFinished.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_DE1AttackFinished() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UAnimNotify_DE1AttackFinished();
DE1_API UClass* Z_Construct_UClass_UAnimNotify_DE1AttackFinished_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UAnimNotify_DE1AttackFinished
void UAnimNotify_DE1AttackFinished::StaticRegisterNativesUAnimNotify_DE1AttackFinished()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_DE1AttackFinished);
UClass* Z_Construct_UClass_UAnimNotify_DE1AttackFinished_NoRegister()
{
	return UAnimNotify_DE1AttackFinished::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Attack Finished" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotify_DE1AttackFinished.h" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DE1AttackFinished.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboResetDelay_MetaData[] = {
		{ "Category", "AnimNotify_DE1AttackFinished" },
		{ "ModuleRelativePath", "Animation/AnimNotify_DE1AttackFinished.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ComboResetDelay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_DE1AttackFinished>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::NewProp_ComboResetDelay = { "ComboResetDelay", nullptr, (EPropertyFlags)0x0020080000000011, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_DE1AttackFinished, ComboResetDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboResetDelay_MetaData), NewProp_ComboResetDelay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::NewProp_ComboResetDelay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::ClassParams = {
	&UAnimNotify_DE1AttackFinished::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_DE1AttackFinished()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_DE1AttackFinished.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_DE1AttackFinished.OuterSingleton, Z_Construct_UClass_UAnimNotify_DE1AttackFinished_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_DE1AttackFinished.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UAnimNotify_DE1AttackFinished>()
{
	return UAnimNotify_DE1AttackFinished::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_DE1AttackFinished);
UAnimNotify_DE1AttackFinished::~UAnimNotify_DE1AttackFinished() {}
// End Class UAnimNotify_DE1AttackFinished

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1AttackFinished_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_DE1AttackFinished, UAnimNotify_DE1AttackFinished::StaticClass, TEXT("UAnimNotify_DE1AttackFinished"), &Z_Registration_Info_UClass_UAnimNotify_DE1AttackFinished, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_DE1AttackFinished), 619024271U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1AttackFinished_h_158283128(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1AttackFinished_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotify_DE1AttackFinished_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

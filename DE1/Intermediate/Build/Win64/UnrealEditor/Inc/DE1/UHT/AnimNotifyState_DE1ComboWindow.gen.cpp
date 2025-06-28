// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Animation/AnimNotifyState_DE1ComboWindow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_DE1ComboWindow() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow();
DE1_API UClass* Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UAnimNotifyState_DE1ComboWindow
void UAnimNotifyState_DE1ComboWindow::StaticRegisterNativesUAnimNotifyState_DE1ComboWindow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_DE1ComboWindow);
UClass* Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_NoRegister()
{
	return UAnimNotifyState_DE1ComboWindow::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Combo Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifyState_DE1ComboWindow.h" },
		{ "ModuleRelativePath", "Animation/AnimNotifyState_DE1ComboWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_DE1ComboWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics::ClassParams = {
	&UAnimNotifyState_DE1ComboWindow::StaticClass,
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
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_DE1ComboWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_DE1ComboWindow.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_DE1ComboWindow.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UAnimNotifyState_DE1ComboWindow>()
{
	return UAnimNotifyState_DE1ComboWindow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_DE1ComboWindow);
UAnimNotifyState_DE1ComboWindow::~UAnimNotifyState_DE1ComboWindow() {}
// End Class UAnimNotifyState_DE1ComboWindow

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotifyState_DE1ComboWindow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_DE1ComboWindow, UAnimNotifyState_DE1ComboWindow::StaticClass, TEXT("UAnimNotifyState_DE1ComboWindow"), &Z_Registration_Info_UClass_UAnimNotifyState_DE1ComboWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_DE1ComboWindow), 3713934239U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotifyState_DE1ComboWindow_h_23478910(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotifyState_DE1ComboWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Animation_AnimNotifyState_DE1ComboWindow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

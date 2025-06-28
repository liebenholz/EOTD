// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/UI/DE1PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1PlayerHUDWidget() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UDE1PlayerHUDWidget();
DE1_API UClass* Z_Construct_UClass_UDE1PlayerHUDWidget_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1StatBarWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1PlayerHUDWidget
void UDE1PlayerHUDWidget::StaticRegisterNativesUDE1PlayerHUDWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1PlayerHUDWidget);
UClass* Z_Construct_UClass_UDE1PlayerHUDWidget_NoRegister()
{
	return UDE1PlayerHUDWidget::StaticClass();
}
struct Z_Construct_UClass_UDE1PlayerHUDWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/DE1PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "UI/DE1PlayerHUDWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaBarWidget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "DE1PlayerHUDWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/DE1PlayerHUDWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaBarWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1PlayerHUDWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::NewProp_StaminaBarWidget = { "StaminaBarWidget", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1PlayerHUDWidget, StaminaBarWidget), Z_Construct_UClass_UDE1StatBarWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaBarWidget_MetaData), NewProp_StaminaBarWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::NewProp_StaminaBarWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::ClassParams = {
	&UDE1PlayerHUDWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1PlayerHUDWidget()
{
	if (!Z_Registration_Info_UClass_UDE1PlayerHUDWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1PlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UDE1PlayerHUDWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1PlayerHUDWidget.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1PlayerHUDWidget>()
{
	return UDE1PlayerHUDWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1PlayerHUDWidget);
UDE1PlayerHUDWidget::~UDE1PlayerHUDWidget() {}
// End Class UDE1PlayerHUDWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_UI_DE1PlayerHUDWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1PlayerHUDWidget, UDE1PlayerHUDWidget::StaticClass, TEXT("UDE1PlayerHUDWidget"), &Z_Registration_Info_UClass_UDE1PlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1PlayerHUDWidget), 3826802334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_UI_DE1PlayerHUDWidget_h_2485750463(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_UI_DE1PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_UI_DE1PlayerHUDWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

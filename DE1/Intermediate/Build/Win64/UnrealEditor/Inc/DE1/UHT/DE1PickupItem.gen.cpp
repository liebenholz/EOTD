// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Items/DE1PickupItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1PickupItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
DE1_API UClass* Z_Construct_UClass_ADE1Equipment_NoRegister();
DE1_API UClass* Z_Construct_UClass_ADE1PickupItem();
DE1_API UClass* Z_Construct_UClass_ADE1PickupItem_NoRegister();
DE1_API UClass* Z_Construct_UClass_UDE1Interact_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class ADE1PickupItem
void ADE1PickupItem::StaticRegisterNativesADE1PickupItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADE1PickupItem);
UClass* Z_Construct_UClass_ADE1PickupItem_NoRegister()
{
	return ADE1PickupItem::StaticClass();
}
struct Z_Construct_UClass_ADE1PickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/DE1PickupItem.h" },
		{ "ModuleRelativePath", "Items/DE1PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Items/DE1PickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipmentClass_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Items/DE1PickupItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EquipmentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADE1PickupItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADE1PickupItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1PickupItem, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADE1PickupItem_Statics::NewProp_EquipmentClass = { "EquipmentClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADE1PickupItem, EquipmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADE1Equipment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipmentClass_MetaData), NewProp_EquipmentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADE1PickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1PickupItem_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADE1PickupItem_Statics::NewProp_EquipmentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1PickupItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADE1PickupItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1PickupItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADE1PickupItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UDE1Interact_NoRegister, (int32)VTABLE_OFFSET(ADE1PickupItem, IDE1Interact), false },  // 1232708604
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADE1PickupItem_Statics::ClassParams = {
	&ADE1PickupItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADE1PickupItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADE1PickupItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADE1PickupItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADE1PickupItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADE1PickupItem()
{
	if (!Z_Registration_Info_UClass_ADE1PickupItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADE1PickupItem.OuterSingleton, Z_Construct_UClass_ADE1PickupItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADE1PickupItem.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<ADE1PickupItem>()
{
	return ADE1PickupItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADE1PickupItem);
ADE1PickupItem::~ADE1PickupItem() {}
// End Class ADE1PickupItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADE1PickupItem, ADE1PickupItem::StaticClass, TEXT("ADE1PickupItem"), &Z_Registration_Info_UClass_ADE1PickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADE1PickupItem), 3776178706U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_46829816(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Items_DE1PickupItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

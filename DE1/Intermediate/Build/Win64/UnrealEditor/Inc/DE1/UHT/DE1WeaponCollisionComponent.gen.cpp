// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Components/DE1WeaponCollisionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1WeaponCollisionComponent() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UDE1WeaponCollisionComponent();
DE1_API UClass* Z_Construct_UClass_UDE1WeaponCollisionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Class UDE1WeaponCollisionComponent
void UDE1WeaponCollisionComponent::StaticRegisterNativesUDE1WeaponCollisionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1WeaponCollisionComponent);
UClass* Z_Construct_UClass_UDE1WeaponCollisionComponent_NoRegister()
{
	return UDE1WeaponCollisionComponent::StaticClass();
}
struct Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/DE1WeaponCollisionComponent.h" },
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceStartSocketName_MetaData[] = {
		{ "Category", "DE1WeaponCollisionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceEndSocketName_MetaData[] = {
		{ "Category", "DE1WeaponCollisionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[] = {
		{ "Category", "DE1WeaponCollisionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sphere \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) */" },
#endif
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sphere \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "DE1WeaponCollisionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Trace \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ObjectType */" },
#endif
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trace \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ObjectType" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredActors_MetaData[] = {
		{ "Category", "DE1WeaponCollisionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xe6\xb5\xb9\xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Actors */" },
#endif
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe6\xb5\xb9\xc3\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Actors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "DE1WeaponCollisionComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xce\xbf\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd MeshComponent */// StaticMesh, SkeletalMesh \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd MeshComponent // StaticMesh, SkeletalMesh \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlreadyHitActors_MetaData[] = {
		{ "ModuleRelativePath", "Components/DE1WeaponCollisionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceStartSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TraceEndSocketName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoredActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredActors;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AlreadyHitActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AlreadyHitActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1WeaponCollisionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceStartSocketName = { "TraceStartSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, TraceStartSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceStartSocketName_MetaData), NewProp_TraceStartSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceEndSocketName = { "TraceEndSocketName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, TraceEndSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceEndSocketName_MetaData), NewProp_TraceEndSocketName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, TraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceRadius_MetaData), NewProp_TraceRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceObjectTypes_MetaData), NewProp_TraceObjectTypes_MetaData) }; // 1798967895
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_IgnoredActors_Inner = { "IgnoredActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_IgnoredActors = { "IgnoredActors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, IgnoredActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IgnoredActors_MetaData), NewProp_IgnoredActors_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDebugType_MetaData), NewProp_DrawDebugType_MetaData) }; // 2070357899
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, WeaponMesh), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_AlreadyHitActors_Inner = { "AlreadyHitActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_AlreadyHitActors = { "AlreadyHitActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1WeaponCollisionComponent, AlreadyHitActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlreadyHitActors_MetaData), NewProp_AlreadyHitActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceStartSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceEndSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_TraceObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_IgnoredActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_IgnoredActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_DrawDebugType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_AlreadyHitActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::NewProp_AlreadyHitActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::ClassParams = {
	&UDE1WeaponCollisionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1WeaponCollisionComponent()
{
	if (!Z_Registration_Info_UClass_UDE1WeaponCollisionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1WeaponCollisionComponent.OuterSingleton, Z_Construct_UClass_UDE1WeaponCollisionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1WeaponCollisionComponent.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1WeaponCollisionComponent>()
{
	return UDE1WeaponCollisionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1WeaponCollisionComponent);
UDE1WeaponCollisionComponent::~UDE1WeaponCollisionComponent() {}
// End Class UDE1WeaponCollisionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1WeaponCollisionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1WeaponCollisionComponent, UDE1WeaponCollisionComponent::StaticClass, TEXT("UDE1WeaponCollisionComponent"), &Z_Registration_Info_UClass_UDE1WeaponCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1WeaponCollisionComponent), 1513746380U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1WeaponCollisionComponent_h_304306954(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1WeaponCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Components_DE1WeaponCollisionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

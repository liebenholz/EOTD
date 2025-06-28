// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/Data/DE1MontageActionData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1MontageActionData() {}

// Begin Cross Module References
DE1_API UClass* Z_Construct_UClass_UDE1MontageActionData();
DE1_API UClass* Z_Construct_UClass_UDE1MontageActionData_NoRegister();
DE1_API UScriptStruct* Z_Construct_UScriptStruct_FDE1MontageGroup();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin ScriptStruct FDE1MontageGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DE1MontageGroup;
class UScriptStruct* FDE1MontageGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DE1MontageGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DE1MontageGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDE1MontageGroup, (UObject*)Z_Construct_UPackage__Script_DE1(), TEXT("DE1MontageGroup"));
	}
	return Z_Registration_Info_UScriptStruct_DE1MontageGroup.OuterSingleton;
}
template<> DE1_API UScriptStruct* StaticStruct<FDE1MontageGroup>()
{
	return FDE1MontageGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDE1MontageGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Data/DE1MontageActionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[] = {
		{ "Category", "DE1MontageGroup" },
		{ "ModuleRelativePath", "Data/DE1MontageActionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDE1MontageGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDE1MontageGroup, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animations_MetaData), NewProp_Animations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::NewProp_Animations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::NewProp_Animations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
	nullptr,
	&NewStructOps,
	"DE1MontageGroup",
	Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::PropPointers),
	sizeof(FDE1MontageGroup),
	alignof(FDE1MontageGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDE1MontageGroup()
{
	if (!Z_Registration_Info_UScriptStruct_DE1MontageGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DE1MontageGroup.InnerSingleton, Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DE1MontageGroup.InnerSingleton;
}
// End ScriptStruct FDE1MontageGroup

// Begin Class UDE1MontageActionData
void UDE1MontageActionData::StaticRegisterNativesUDE1MontageActionData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDE1MontageActionData);
UClass* Z_Construct_UClass_UDE1MontageActionData_NoRegister()
{
	return UDE1MontageActionData::StaticClass();
}
struct Z_Construct_UClass_UDE1MontageActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Data/DE1MontageActionData.h" },
		{ "ModuleRelativePath", "Data/DE1MontageActionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MontageGroupMap_MetaData[] = {
		{ "Category", "DE1MontageActionData" },
		{ "DisplayName", "Montage Groups" },
		{ "ModuleRelativePath", "Data/DE1MontageActionData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageGroupMap_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MontageGroupMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_MontageGroupMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDE1MontageActionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDE1MontageActionData_Statics::NewProp_MontageGroupMap_ValueProp = { "MontageGroupMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDE1MontageGroup, METADATA_PARAMS(0, nullptr) }; // 2258174371
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDE1MontageActionData_Statics::NewProp_MontageGroupMap_Key_KeyProp = { "MontageGroupMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDE1MontageActionData_Statics::NewProp_MontageGroupMap = { "MontageGroupMap", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDE1MontageActionData, MontageGroupMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MontageGroupMap_MetaData), NewProp_MontageGroupMap_MetaData) }; // 1298103297 2258174371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDE1MontageActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1MontageActionData_Statics::NewProp_MontageGroupMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1MontageActionData_Statics::NewProp_MontageGroupMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDE1MontageActionData_Statics::NewProp_MontageGroupMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1MontageActionData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDE1MontageActionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DE1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1MontageActionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDE1MontageActionData_Statics::ClassParams = {
	&UDE1MontageActionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDE1MontageActionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDE1MontageActionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDE1MontageActionData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDE1MontageActionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDE1MontageActionData()
{
	if (!Z_Registration_Info_UClass_UDE1MontageActionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDE1MontageActionData.OuterSingleton, Z_Construct_UClass_UDE1MontageActionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDE1MontageActionData.OuterSingleton;
}
template<> DE1_API UClass* StaticClass<UDE1MontageActionData>()
{
	return UDE1MontageActionData::StaticClass();
}
UDE1MontageActionData::UDE1MontageActionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDE1MontageActionData);
UDE1MontageActionData::~UDE1MontageActionData() {}
// End Class UDE1MontageActionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDE1MontageGroup::StaticStruct, Z_Construct_UScriptStruct_FDE1MontageGroup_Statics::NewStructOps, TEXT("DE1MontageGroup"), &Z_Registration_Info_UScriptStruct_DE1MontageGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDE1MontageGroup), 2258174371U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDE1MontageActionData, UDE1MontageActionData::StaticClass, TEXT("UDE1MontageActionData"), &Z_Registration_Info_UClass_UDE1MontageActionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDE1MontageActionData), 476867941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_947217696(TEXT("/Script/DE1"),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_Data_DE1MontageActionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

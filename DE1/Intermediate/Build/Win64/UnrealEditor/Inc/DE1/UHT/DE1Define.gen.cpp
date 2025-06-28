// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DE1/DE1Define.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDE1Define() {}

// Begin Cross Module References
DE1_API UEnum* Z_Construct_UEnum_DE1_EDE1AttributeType();
DE1_API UEnum* Z_Construct_UEnum_DE1_EHitDirection();
DE1_API UEnum* Z_Construct_UEnum_DE1_ESwitchingDirection();
UPackage* Z_Construct_UPackage__Script_DE1();
// End Cross Module References

// Begin Enum EDE1AttributeType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDE1AttributeType;
static UEnum* EDE1AttributeType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDE1AttributeType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDE1AttributeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DE1_EDE1AttributeType, (UObject*)Z_Construct_UPackage__Script_DE1(), TEXT("EDE1AttributeType"));
	}
	return Z_Registration_Info_UEnum_EDE1AttributeType.OuterSingleton;
}
template<> DE1_API UEnum* StaticEnum<EDE1AttributeType>()
{
	return EDE1AttributeType_StaticEnum();
}
struct Z_Construct_UEnum_DE1_EDE1AttributeType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Health.Name", "EDE1AttributeType::Health" },
		{ "ModuleRelativePath", "DE1Define.h" },
		{ "Stamina.Name", "EDE1AttributeType::Stamina" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDE1AttributeType::Stamina", (int64)EDE1AttributeType::Stamina },
		{ "EDE1AttributeType::Health", (int64)EDE1AttributeType::Health },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DE1_EDE1AttributeType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DE1,
	nullptr,
	"EDE1AttributeType",
	"EDE1AttributeType",
	Z_Construct_UEnum_DE1_EDE1AttributeType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DE1_EDE1AttributeType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DE1_EDE1AttributeType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DE1_EDE1AttributeType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DE1_EDE1AttributeType()
{
	if (!Z_Registration_Info_UEnum_EDE1AttributeType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDE1AttributeType.InnerSingleton, Z_Construct_UEnum_DE1_EDE1AttributeType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDE1AttributeType.InnerSingleton;
}
// End Enum EDE1AttributeType

// Begin Enum EHitDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitDirection;
static UEnum* EHitDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHitDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHitDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DE1_EHitDirection, (UObject*)Z_Construct_UPackage__Script_DE1(), TEXT("EHitDirection"));
	}
	return Z_Registration_Info_UEnum_EHitDirection.OuterSingleton;
}
template<> DE1_API UEnum* StaticEnum<EHitDirection>()
{
	return EHitDirection_StaticEnum();
}
struct Z_Construct_UEnum_DE1_EHitDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Back.Name", "EHitDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Front.Name", "EHitDirection::Front" },
		{ "Left.Name", "EHitDirection::Left" },
		{ "ModuleRelativePath", "DE1Define.h" },
		{ "Right.Name", "EHitDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHitDirection::Front", (int64)EHitDirection::Front },
		{ "EHitDirection::Back", (int64)EHitDirection::Back },
		{ "EHitDirection::Left", (int64)EHitDirection::Left },
		{ "EHitDirection::Right", (int64)EHitDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DE1_EHitDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DE1,
	nullptr,
	"EHitDirection",
	"EHitDirection",
	Z_Construct_UEnum_DE1_EHitDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DE1_EHitDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DE1_EHitDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DE1_EHitDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DE1_EHitDirection()
{
	if (!Z_Registration_Info_UEnum_EHitDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitDirection.InnerSingleton, Z_Construct_UEnum_DE1_EHitDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHitDirection.InnerSingleton;
}
// End Enum EHitDirection

// Begin Enum ESwitchingDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESwitchingDirection;
static UEnum* ESwitchingDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESwitchingDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESwitchingDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DE1_ESwitchingDirection, (UObject*)Z_Construct_UPackage__Script_DE1(), TEXT("ESwitchingDirection"));
	}
	return Z_Registration_Info_UEnum_ESwitchingDirection.OuterSingleton;
}
template<> DE1_API UEnum* StaticEnum<ESwitchingDirection>()
{
	return ESwitchingDirection_StaticEnum();
}
struct Z_Construct_UEnum_DE1_ESwitchingDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.Name", "ESwitchingDirection::Left" },
		{ "ModuleRelativePath", "DE1Define.h" },
		{ "None.Name", "ESwitchingDirection::None" },
		{ "Right.Name", "ESwitchingDirection::Right" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESwitchingDirection::None", (int64)ESwitchingDirection::None },
		{ "ESwitchingDirection::Left", (int64)ESwitchingDirection::Left },
		{ "ESwitchingDirection::Right", (int64)ESwitchingDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DE1_ESwitchingDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DE1,
	nullptr,
	"ESwitchingDirection",
	"ESwitchingDirection",
	Z_Construct_UEnum_DE1_ESwitchingDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DE1_ESwitchingDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DE1_ESwitchingDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DE1_ESwitchingDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DE1_ESwitchingDirection()
{
	if (!Z_Registration_Info_UEnum_ESwitchingDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESwitchingDirection.InnerSingleton, Z_Construct_UEnum_DE1_ESwitchingDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESwitchingDirection.InnerSingleton;
}
// End Enum ESwitchingDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_DE1Define_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDE1AttributeType_StaticEnum, TEXT("EDE1AttributeType"), &Z_Registration_Info_UEnum_EDE1AttributeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3111662581U) },
		{ EHitDirection_StaticEnum, TEXT("EHitDirection"), &Z_Registration_Info_UEnum_EHitDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2083998911U) },
		{ ESwitchingDirection_StaticEnum, TEXT("ESwitchingDirection"), &Z_Registration_Info_UEnum_ESwitchingDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2657841693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_DE1Define_h_1841983981(TEXT("/Script/DE1"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_DE1Define_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UNREAL_PROJ_DE1_Source_DE1_DE1Define_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

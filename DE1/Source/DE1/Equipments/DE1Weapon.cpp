// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipments/DE1Weapon.h"

#include "DE1GameplayTags.h"
#include "Components/DE1CombatComponent.h"
#include "Components/DE1WeaponCollisionComponent.h"
#include "Data/DE1MontageActionData.h"
#include "Kismet/GameplayStatics.h"

ADE1Weapon::ADE1Weapon()
{
	WeaponCollision = CreateDefaultSubobject<UDE1WeaponCollisionComponent>("WeaponCollision");
	WeaponCollision->OnHitActor.AddUObject(this, &ThisClass::OnHitActor);

	StaminaCostMap.Add(DE1GameplayTags::Character_Attack_Light, 7.f);
	StaminaCostMap.Add(DE1GameplayTags::Character_Attack_Running, 12.f);
	StaminaCostMap.Add(DE1GameplayTags::Character_Attack_Special, 15.f);
	StaminaCostMap.Add(DE1GameplayTags::Character_Attack_Heavy, 20.f);

	DamageMultiplierMap.Add(DE1GameplayTags::Character_Attack_Heavy, 1.8f);
	DamageMultiplierMap.Add(DE1GameplayTags::Character_Attack_Running, 1.8f);
	DamageMultiplierMap.Add(DE1GameplayTags::Character_Attack_Special, 2.1f);
}

void ADE1Weapon::EquipItem()
{
	Super::EquipItem();

	CombatComponent = GetOwner()->GetComponentByClass<UDE1CombatComponent>();

	if (CombatComponent)
	{
		CombatComponent->SetWeapon(this);

		const FName AttachSocket = CombatComponent->IsCombatEnabled() ? EquipSocketName : UnequipSocketName;

		AttachToOwner(AttachSocket);

		// 무기의 충돌 트레이스 컴포넌트에 무기 메쉬 컴포넌트를 설정합니다.
		WeaponCollision->SetWeaponMesh(Mesh);

		// 무기를 소유한 OwnerActor를 충돌에서 무시합니다.
		WeaponCollision->AddIgnoredActor(GetOwner());
	}
}

UAnimMontage* ADE1Weapon::GetMontageForTag(const FGameplayTag& Tag, const int32 Index) const
{
	return MontageActionData->GetMontageForTag(Tag, Index);
}

float ADE1Weapon::GetStaminaCost(const FGameplayTag& InTag) const
{
	if (StaminaCostMap.Contains(InTag))
	{
		return StaminaCostMap[InTag];
	}
	return 0.f;
}

float ADE1Weapon::GetAttackDamage() const
{
	if (const AActor* OwnerActor = GetOwner())
	{
		const FGameplayTag LastAttackType = CombatComponent->GetLastAttackType();

		if (DamageMultiplierMap.Contains(LastAttackType))
		{
			const float Multiplier = DamageMultiplierMap[LastAttackType];
			return BaseDamage * Multiplier;
		}
	}

	return BaseDamage;
}

void ADE1Weapon::OnHitActor(const FHitResult& Hit)
{
	AActor* TargetActor = Hit.GetActor();

	// 데미지 방향
	FVector DamageDirection = GetOwner()->GetActorForwardVector();

	// 데미지
	float AttackDamage = GetAttackDamage();

	UGameplayStatics::ApplyPointDamage(
		TargetActor,
		AttackDamage,
		DamageDirection,
		Hit,
		GetOwner()->GetInstigatorController(),
		this,
		nullptr);
}

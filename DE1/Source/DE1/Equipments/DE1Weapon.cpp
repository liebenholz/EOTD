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

		// ������ �浹 Ʈ���̽� ������Ʈ�� ���� �޽� ������Ʈ�� �����մϴ�.
		WeaponCollision->SetWeaponMesh(Mesh);

		// ���⸦ ������ OwnerActor�� �浹���� �����մϴ�.
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

	// ������ ����
	FVector DamageDirection = GetOwner()->GetActorForwardVector();

	// ������
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

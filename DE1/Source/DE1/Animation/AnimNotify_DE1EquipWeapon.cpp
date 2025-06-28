// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_DE1EquipWeapon.h"

#include "DE1GameplayTags.h"
#include "Components/DE1CombatComponent.h"
#include "Equipments/DE1Weapon.h"

UAnimNotify_DE1EquipWeapon::UAnimNotify_DE1EquipWeapon(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void UAnimNotify_DE1EquipWeapon::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (const AActor* Owner = MeshComp->GetOwner())
	{
		if (UDE1CombatComponent* CombatComponent = Owner->GetComponentByClass<UDE1CombatComponent>())
		{
			if (ADE1Weapon* MainWeapon = CombatComponent->GetMainWeapon())
			{
				bool bCombatEnabled = CombatComponent->IsCombatEnabled();
				FName WeaponSocketName;

				if (MontageActionTag == DE1GameplayTags::Character_Action_Equip)
				{
					bCombatEnabled = true;
					WeaponSocketName = MainWeapon->GetEquipSocketName();
				}
				else if (MontageActionTag == DE1GameplayTags::Character_Action_Unequip)
				{
					bCombatEnabled = false;
					WeaponSocketName = MainWeapon->GetUnequipSocketName();
				}

				// AttachToPlayer 함수보다 먼저 호출해야한다.
				CombatComponent->SetCombatEnabled(bCombatEnabled);
				MainWeapon->AttachToOwner(WeaponSocketName);
			}
		}
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotifyState_DE1WeaponCollide.h"

#include "Components/DE1CombatComponent.h"
#include "Components/DE1WeaponCollisionComponent.h"
#include "Equipments/DE1Weapon.h"

UAnimNotifyState_DE1WeaponCollide::UAnimNotifyState_DE1WeaponCollide(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void UAnimNotifyState_DE1WeaponCollide::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, 
	float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (const AActor* OwnerActor = MeshComp->GetOwner())
	{
		if (const UDE1CombatComponent* CombatComponent = OwnerActor->GetComponentByClass<UDE1CombatComponent>())
		{
			const ADE1Weapon* Weapon = CombatComponent->GetMainWeapon();
			if (::IsValid(Weapon))
			{
				Weapon->GetCollision()->TurnOnCollision();
			}
		}
	}
}

void UAnimNotifyState_DE1WeaponCollide::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (const AActor* OwnerActor = MeshComp->GetOwner())
	{
		if (const UDE1CombatComponent* CombatComponent = OwnerActor->GetComponentByClass<UDE1CombatComponent>())
		{
			const ADE1Weapon* Weapon = CombatComponent->GetMainWeapon();
			if (::IsValid(Weapon))
			{
				Weapon->GetCollision()->TurnOffCollision();
			}
		}
	}
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/DE1CombatComponent.h"

#include "Character/DE1Character.h"
#include "Equipments/DE1Weapon.h"
#include "Items/DE1PickupItem.h"

UDE1CombatComponent::UDE1CombatComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UDE1CombatComponent::BeginPlay()
{
	Super::BeginPlay();

}


void UDE1CombatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void UDE1CombatComponent::SetWeapon(ADE1Weapon* NewWeapon)
{
    // If already have an Equipment, make it to PickupItem and Drop.
    if (::IsValid(MainWeapon))
    {
        if (ADE1Character* OwnerCharacter = Cast<ADE1Character>(GetOwner()))
        {
            ADE1PickupItem* PickupItem = GetWorld()->SpawnActorDeferred<ADE1PickupItem>(
                ADE1PickupItem::StaticClass(), OwnerCharacter->GetActorTransform(), nullptr, nullptr, 
                ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn);
            PickupItem->SetEquipmentClass(MainWeapon->GetClass());
            PickupItem->FinishSpawning(GetOwner()->GetActorTransform());

            MainWeapon->Destroy();
        }
    }

	MainWeapon = NewWeapon;
}


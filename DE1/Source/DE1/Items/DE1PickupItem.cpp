// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/DE1PickupItem.h"

#include "DE1Define.h"
#include "Equipments/DE1Equipment.h"

// Sets default values
ADE1PickupItem::ADE1PickupItem()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupItemMesh"));
	SetRootComponent(Mesh);

	// Collision Settings.
	Mesh->SetCollisionObjectType(COLLISION_OBJECT_INTERACTION);
	Mesh->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
	Mesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

}

void ADE1PickupItem::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADE1PickupItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADE1PickupItem::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Set Mesh of PickupItem from Equip Item's Class Information.
	if (EquipmentClass)
	{
		if (ADE1Equipment* CDO = EquipmentClass->GetDefaultObject<ADE1Equipment>())
		{
			Mesh->SetStaticMesh(CDO->MeshAsset);
			Mesh->SetSimulatePhysics(true);
		}
	}
}

void ADE1PickupItem::Interact(AActor* InteractionActor)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = InteractionActor;

	// Spawn Equipment Item and Equip on Socket.
	ADE1Equipment* SpawnItem = GetWorld()->SpawnActor<ADE1Equipment>(EquipmentClass, GetActorTransform(), SpawnParams);
	if (SpawnItem)
	{
		SpawnItem->EquipItem();
		Destroy();
	}

	// Debug Msg
	// GEngine->AddOnScreenDebugMessage(0, 1.5f, FColor::Cyan, TEXT("Hello"));

}


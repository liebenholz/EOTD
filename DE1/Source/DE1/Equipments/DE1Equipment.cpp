// Fill out your copyright notice in the Description page of Project Settings.


#include "Equipments/DE1Equipment.h"

#include "GameFramework/Character.h"


ADE1Equipment::ADE1Equipment()
{
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EquipmentMesh"));
	SetRootComponent(Mesh);
	Mesh->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
}

void ADE1Equipment::BeginPlay()
{
	Super::BeginPlay();
	
}

void ADE1Equipment::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADE1Equipment::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	if (MeshAsset)
	{
		Mesh->SetStaticMesh(MeshAsset);
	}
}

void ADE1Equipment::EquipItem()
{
}

void ADE1Equipment::UnequipItem()
{
}

void ADE1Equipment::AttachToOwner(FName SocketName)
{
	if (ACharacter* OwnerCharacter = Cast<ACharacter>(GetOwner()))
	{
		if (USkeletalMeshComponent* CharacterMesh = OwnerCharacter->GetMesh())
		{
			AttachToComponent(CharacterMesh, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), SocketName);
		}
	}
}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Equipments/DE1Equipment.h"
#include "Interfaces/DE1Interact.h"
#include "DE1PickupItem.generated.h"

UCLASS()
class DE1_API ADE1PickupItem : public AActor, public IDE1Interact
{
	GENERATED_BODY()
	
public:	
	ADE1PickupItem();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	virtual void Interact(AActor* InteractionActor) override;

public:
	FORCEINLINE void SetEquipmentClass(const TSubclassOf<ADE1Equipment>& NewEquipmentClass) { EquipmentClass = NewEquipmentClass; };

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item")
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TSubclassOf<ADE1Equipment> EquipmentClass;
};


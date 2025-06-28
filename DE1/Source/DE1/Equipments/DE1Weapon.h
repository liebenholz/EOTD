// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Equipments/DE1Equipment.h"
#include "DE1Weapon.generated.h"

class UDE1WeaponCollisionComponent;
class UDE1MontageActionData;
struct FGameplayTag;
class UDE1CombatComponent;
/**
* 
*/
UCLASS()
class DE1_API ADE1Weapon : public ADE1Equipment
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment | Socket")
	FName EquipSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment | Socket")
	FName UnequipSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment | Animation")
	UDE1MontageActionData* MontageActionData;

// Component Section
protected:
	UPROPERTY(VisibleAnywhere)
	UDE1WeaponCollisionComponent* WeaponCollision;

protected:
	UPROPERTY()
	UDE1CombatComponent* CombatComponent;

// Data Section
protected:
	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, float> StaminaCostMap;

	/** 기본 데미지 */
	UPROPERTY(EditAnywhere)
	float BaseDamage = 15.f;

	/** 데미지 승수 */
	UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, float> DamageMultiplierMap;

public:
	ADE1Weapon();

public:
	virtual void EquipItem() override;

	UAnimMontage* GetMontageForTag(const FGameplayTag& Tag, const int32 Index = 0) const;

	float GetStaminaCost(const FGameplayTag& InTag) const;
	float GetAttackDamage() const;

	FORCEINLINE FName GetEquipSocketName() const { return EquipSocketName; };
	FORCEINLINE FName GetUnequipSocketName() const { return UnequipSocketName; };
	FORCEINLINE UDE1WeaponCollisionComponent* GetCollision() const { return WeaponCollision; };

public:
	/** 무기의 Collision에 검출된 Actor에 Damage를 전달 */
	void OnHitActor(const FHitResult& Hit);
};

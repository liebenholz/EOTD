// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "DE1CombatComponent.generated.h"

class ADE1Weapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DE1_API UDE1CombatComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	ADE1Weapon* MainWeapon;

	/** Is Combat Enabled? */
	UPROPERTY(EditAnywhere)
	bool bCombatEnabled = false;

	/** Lastest AttackType */
	UPROPERTY(VisibleAnywhere)
	FGameplayTag LastAttackType;

public:	
	UDE1CombatComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	void SetWeapon(ADE1Weapon* NewWeapon);

public:
	FORCEINLINE bool IsCombatEnabled() const { return bCombatEnabled; }
	FORCEINLINE void SetCombatEnabled(const bool bEnabled) { bCombatEnabled = bEnabled; }

	FORCEINLINE ADE1Weapon* GetMainWeapon() const { return MainWeapon; };

	FORCEINLINE FGameplayTag GetLastAttackType() const { return LastAttackType; };
	FORCEINLINE void SetLastAttackType(const FGameplayTag& NewAttackTypeTag) { LastAttackType = NewAttackTypeTag; };
};


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DE1Define.h"
#include "Components/ActorComponent.h"
#include "DE1AttributeComponent.generated.h"

DECLARE_MULTICAST_DELEGATE_TwoParams(FDelegateOnAttributeChanged, EDE1AttributeType, float);
DECLARE_MULTICAST_DELEGATE(FOnDeath)

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DE1_API UDE1AttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** ���� ���� Delegate */
	FDelegateOnAttributeChanged OnAttributeChanged;

	/** ������ �˸��� Delegate */
	FOnDeath OnDeath;

protected:

	UPROPERTY(EditAnywhere, Category = "Stamina")
	float BaseStamina = 100.f;

	UPROPERTY(EditAnywhere, Category = "Stamina")
	float MaxStamina = 100.f;

	UPROPERTY(EditAnywhere, Category = "Stamina")
	float StaminaRegenRate = 0.2f;

	UPROPERTY(EditAnywhere, Category = "Health")
	float BaseHealth = 100.f;

	UPROPERTY(EditAnywhere, Category = "Health")
	float MaxHealth = 100.f;

	/** ���¹̳� ������ Ÿ�̸� �ڵ� */
	FTimerHandle StaminaRegenTimerHandle;

public:	
	UDE1AttributeComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	FORCEINLINE float GetBaseStamina() const { return BaseStamina; };
	FORCEINLINE float GetMaxStamina() const { return MaxStamina; };
	FORCEINLINE float GetBaseHealth() const { return BaseHealth; };
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; };

	/** ���׹̳� ���� ��� */
	FORCEINLINE float GetStaminaRatio() const { return BaseStamina / MaxStamina; };

	/** ���׹̳ʰ� ������� üũ */
	bool CheckHasEnoughStamina(float StaminaCost) const;

	/** ���׹̳� ���� */
	void DecreaseStamina(float StaminaCost);

	/** ���׹̳� ������/���� ��� */
	void ToggleStaminaRegeneration(bool bEnabled, float StartDelay = 2.f);

	/** ���� ������ �����ϴ� Broadcast Function */
	void BroadcastAttributeChanged(EDE1AttributeType InAttributeType) const;

	void TakeDamageAmount(float DamageAmount);

private:
	/** ���¹̳� ������ ó�� �ڵ鸵 �Լ� */
	void RegenerateStaminaHandler();
		
};

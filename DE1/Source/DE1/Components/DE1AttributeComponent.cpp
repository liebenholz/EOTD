// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/DE1AttributeComponent.h"

#include "DE1GameplayTags.h"
#include "DE1StateComponent.h"

UDE1AttributeComponent::UDE1AttributeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UDE1AttributeComponent::BeginPlay()
{
	Super::BeginPlay();

}


void UDE1AttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

bool UDE1AttributeComponent::CheckHasEnoughStamina(float StaminaCost) const
{
	return BaseStamina >= StaminaCost;
}

void UDE1AttributeComponent::DecreaseStamina(float StaminaCost)
{
	BaseStamina = FMath::Clamp(BaseStamina - StaminaCost, 0.f, MaxStamina);

	BroadcastAttributeChanged(EDE1AttributeType::Stamina);
}

void UDE1AttributeComponent::ToggleStaminaRegeneration(bool bEnabled, float StartDelay)
{
	if (bEnabled)
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(StaminaRegenTimerHandle) == false)
		{
			GetWorld()->GetTimerManager().SetTimer(StaminaRegenTimerHandle, this, &ThisClass::RegenerateStaminaHandler, 0.1f, true, StartDelay);
		}
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(StaminaRegenTimerHandle);
	}
}

void UDE1AttributeComponent::BroadcastAttributeChanged(EDE1AttributeType InAttributeType) const
{
	if (OnAttributeChanged.IsBound())
	{
		// Type에 따라서 값을 골라준다.
		float Ratio = 0.f;
		switch (InAttributeType)
		{
		case EDE1AttributeType::Stamina:
			Ratio = GetStaminaRatio();
			break;

		case EDE1AttributeType::Health:
			break;
		}

		OnAttributeChanged.Broadcast(InAttributeType, Ratio);
	}
}

void UDE1AttributeComponent::TakeDamageAmount(float DamageAmount)
{
	// 체력 차감.
	BaseHealth = FMath::Clamp(BaseHealth - DamageAmount, 0.f, MaxHealth);

	BroadcastAttributeChanged(EDE1AttributeType::Health);

	if (BaseHealth <= 0.f)
	{
		// Call Death Delegate
		if (OnDeath.IsBound())
		{
			OnDeath.Broadcast();
		}

		// Set Death State
		if (UDE1StateComponent* StateComp = GetOwner()->FindComponentByClass<UDE1StateComponent>())
		{
			StateComp->SetState(DE1GameplayTags::Character_State_Death);
		}
	}
}

void UDE1AttributeComponent::RegenerateStaminaHandler()
{
	BaseStamina = FMath::Clamp(BaseStamina + StaminaRegenRate, 0.f, MaxStamina);

	BroadcastAttributeChanged(EDE1AttributeType::Stamina);

	if (BaseStamina >= MaxStamina)
	{
		ToggleStaminaRegeneration(false);
	}
}
// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/DE1StateComponent.h"

#include "Kismet/KismetSystemLibrary.h"


UDE1StateComponent::UDE1StateComponent()
{

	PrimaryComponentTick.bCanEverTick = true;

}


void UDE1StateComponent::BeginPlay()
{
	Super::BeginPlay();
	
}


void UDE1StateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDE1StateComponent::ToggleMovementInput(bool bEnabled, float Duration)
{
	if (bEnabled)
	{
		FLatentActionInfo LatentAction;
		LatentAction.CallbackTarget = this;
		LatentAction.ExecutionFunction = "MovementInputEnableAction";
		LatentAction.Linkage = 0;
		LatentAction.UUID = 0;

		UKismetSystemLibrary::RetriggerableDelay(GetWorld(), Duration, LatentAction);
	}
	else
	{
		bMovementInputEnabled = false;
	}
}

void UDE1StateComponent::MovementInputEnableAction()
{
	bMovementInputEnabled = true;
	ClearState();
}

void UDE1StateComponent::ClearState()
{
	CurrentState = FGameplayTag::EmptyTag;
}

bool UDE1StateComponent::IsCurrentStateEqualToAny(const FGameplayTagContainer& TagsToCheck) const
{
	return TagsToCheck.HasTagExact(CurrentState);
}


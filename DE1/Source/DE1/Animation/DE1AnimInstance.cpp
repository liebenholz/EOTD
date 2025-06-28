// Fill out your copyright notice in the Description page of Project Settings.

#include "Animation/DE1AnimInstance.h"

#include "Character/DE1Character.h"
#include "Components/DE1StateComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UDE1AnimInstance::UDE1AnimInstance()
{
}

void UDE1AnimInstance::NativeInitializeAnimation()
{
    Super::NativeInitializeAnimation();

    Character = Cast<ACharacter>(GetOwningActor());

    if (Character)
    {
        MovementComponent = Character->GetCharacterMovement();
    }
}

void UDE1AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    {
        Super::NativeUpdateAnimation(DeltaSeconds);

        if (Character == nullptr)
        {
            return;
        }

        if (MovementComponent == nullptr)
        {
            return;
        }

        Velocity = MovementComponent->Velocity;
        GroundSpeed = Velocity.Size2D();

        bShouldMove = GroundSpeed > 3.f && MovementComponent->GetCurrentAcceleration() != FVector::ZeroVector;

        bIsFalling = MovementComponent->IsFalling();
    }
}

void UDE1AnimInstance::AnimNotify_ResetMovementInput()
{
    if (ADE1Character* LocalCharacter = Cast<ADE1Character>(GetOwningActor()))
    {
        LocalCharacter->GetStateComponent()->ToggleMovementInput(true);
    }
}

void UDE1AnimInstance::AnimNotify_ResetState()
{
    if (const ADE1Character* LocalCharacter = Cast<ADE1Character>(GetOwningActor()))
    {
        LocalCharacter->GetStateComponent()->ClearState(); 
    }
}

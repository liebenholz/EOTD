// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_DE1WeaponCollide.generated.h"

/**
 * 
 */
UCLASS(meta = (DisplayName = "Weapon Collision"))
class DE1_API UAnimNotifyState_DE1WeaponCollide : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	UAnimNotifyState_DE1WeaponCollide(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;

};

// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotify_DE1AttackFinished.h"

#include "Character/DE1Character.h"
#include "Components/DE1StateComponent.h"

UAnimNotify_DE1AttackFinished::UAnimNotify_DE1AttackFinished(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void UAnimNotify_DE1AttackFinished::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (ADE1Character* Character = Cast<ADE1Character>(MeshComp->GetOwner()))
	{
		Character->AttackFinished(ComboResetDelay);
	}
}


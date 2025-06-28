// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNotifyState_DE1ComboWindow.h"

#include "Character/DE1Character.h"

UAnimNotifyState_DE1ComboWindow::UAnimNotifyState_DE1ComboWindow(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void UAnimNotifyState_DE1ComboWindow::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (ADE1Character* Character = Cast<ADE1Character>(MeshComp->GetOwner()))
	{
		Character->EnableComboWindow();
	}
}

void UAnimNotifyState_DE1ComboWindow::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (ADE1Character* Character = Cast<ADE1Character>(MeshComp->GetOwner()))
	{
		Character->DisableComboWindow();
	}
}

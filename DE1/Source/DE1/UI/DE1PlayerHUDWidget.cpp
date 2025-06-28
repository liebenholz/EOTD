// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/DE1PlayerHUDWidget.h"

#include "DE1StatBarWidget.h"
#include "Components/DE1AttributeComponent.h"


UDE1PlayerHUDWidget::UDE1PlayerHUDWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void UDE1PlayerHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (APawn* OwningPawn = GetOwningPlayerPawn())
	{
		if (UDE1AttributeComponent* Attribute = OwningPawn->GetComponentByClass<UDE1AttributeComponent>())
		{
			Attribute->OnAttributeChanged.AddUObject(this, &ThisClass::OnAttributeChanged);
			Attribute->BroadcastAttributeChanged(EDE1AttributeType::Stamina);
		}
	}
}

void UDE1PlayerHUDWidget::OnAttributeChanged(EDE1AttributeType AttributeType, float InValue)
{
	switch (AttributeType)
	{
	case EDE1AttributeType::Stamina:
		StaminaBarWidget->SetRatio(InValue);
		break;

	case EDE1AttributeType::Health:
		break;
	}
}

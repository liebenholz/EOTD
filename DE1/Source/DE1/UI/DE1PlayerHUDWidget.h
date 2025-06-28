// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DE1Define.h"
#include "Blueprint/UserWidget.h"
#include "DE1PlayerHUDWidget.generated.h"

class UDE1StatBarWidget;

UCLASS()
class DE1_API UDE1PlayerHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UDE1StatBarWidget* StaminaBarWidget;

public:
	UDE1PlayerHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

public:
	virtual void NativeConstruct() override;

protected:
	void OnAttributeChanged(EDE1AttributeType AttributeType, float InValue);
};


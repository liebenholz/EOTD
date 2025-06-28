// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/DE1StatBarWidget.h"

#include "Components/ProgressBar.h"


UDE1StatBarWidget::UDE1StatBarWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
}

void UDE1StatBarWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (StatBar)
	{
		StatBar->SetFillColorAndOpacity(FillColorAndOpacity);
	}
}

void UDE1StatBarWidget::SetRatio(float Ratio) const
{
	if (StatBar)
	{
		StatBar->SetPercent(Ratio);
	}
}

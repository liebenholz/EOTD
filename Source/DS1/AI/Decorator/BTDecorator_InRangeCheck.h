// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_InRangeCheck.generated.h"

/**
 * 
 */
UCLASS()
class DS1_API UBTDecorator_InRangeCheck : public UBTDecorator
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector TargetBlackboardKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangeMin = 100.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RangeMax = 200.f;

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};

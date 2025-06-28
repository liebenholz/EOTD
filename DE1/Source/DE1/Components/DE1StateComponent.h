// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "DE1StateComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DE1_API UDE1StateComponent : public UActorComponent
{
	GENERATED_BODY()

protected:

	/** �̵�Ű �Է� ���� ���� */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
	bool bMovementInputEnabled = true;

	/** ĳ������ ���� ���� */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "State")
	FGameplayTag CurrentState;


public:
	UDE1StateComponent();

protected:
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	/** �̵� �Է��� Ȱ��ȭ ��������? */
	FORCEINLINE bool MovementInputEnabled() const { return bMovementInputEnabled; };

	/** �̵� �Է� ��� */
	void ToggleMovementInput(bool bEnabled, float Duration = 0.f);

protected:
	UFUNCTION()
	void MovementInputEnableAction();

public:
	FORCEINLINE void SetState(const FGameplayTag NewState) { CurrentState = NewState; };
	FORCEINLINE FGameplayTag GetCurrentState() const { return CurrentState; };

	/** ���� ���� �ʱ�ȭ */
	void ClearState();

	/** ���� State�� TagsToCheck�� ��Ͱ� ������ üũ [OR] */
	bool IsCurrentStateEqualToAny(const FGameplayTagContainer& TagsToCheck) const;


};
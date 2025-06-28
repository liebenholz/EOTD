// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameFramework/Character.h"
#include "DE1Character.generated.h"

class UDE1CombatComponent;
class UDE1StateComponent;
class UDE1PlayerHUDWidget;
struct FInputActionValue;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;
class UDE1AttributeComponent;

UCLASS()
class DE1_API ADE1Character : public ACharacter
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;

// Input Section
private:
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SprintRollingAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* InteractAction;

	/** Combat Activate/Deactivate Toggle */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* ToggleCombatAction;

	/** Attack */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* AttackAction;

	/** Heavy Attack */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* HeavyAttackAction;


private:
	/** Character Status */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UDE1AttributeComponent* AttributeComponent;

	/** Character State */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UDE1StateComponent* StateComponent;

	/** Equip & Combat */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UDE1CombatComponent* CombatComponent;

	/** Combat Activate/Deactivate Toggle */
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	//UInputAction* ToggleCombatAction;

// UI Section
protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> PlayerHUDWidgetClass;

	UPROPERTY()
	UDE1PlayerHUDWidget* PlayerHUDWidget;

// Sprint
protected:
	UPROPERTY(EditAnywhere, Category = "Sprinting")
	float SprintingSpeed = 750.f;

	UPROPERTY(EditAnywhere, Category = "Sprinting")
	float NormalSpeed = 500.f;

	UPROPERTY(VisibleAnywhere, Category = "Sprinting")
	bool bSprinting = false;

// Combo Section
protected:
	/** �޺� ������ ������ */
	bool bComboSequenceRunning = false;

	/** �޺� �Է� ����? */
	bool bCanComboInput = false;

	/** �޺� ī���� */
	int32 ComboCounter = 0;

	/** �޺� �Է� ���� */
	bool bSavedComboInput = false;

	/** �޺� ���� Ÿ�̸� �ڵ� */
	FTimerHandle ComboResetTimerHandle;

// Montage Section
protected:
	UPROPERTY(EditAnywhere, Category = "Montage")
	UAnimMontage* RollingMontage;

public:
	ADE1Character();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	virtual void NotifyControllerChanged() override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	FORCEINLINE UDE1StateComponent* GetStateComponent() const { return StateComponent; };

protected:
	/** ĳ���Ͱ� �̵������� üũ */
	bool IsMoving() const;
	bool CanToggleCombat() const;
	FORCEINLINE bool IsSprinting() const { return bSprinting; }

	/** �̵� */
	void Move(const FInputActionValue& Values);
	/** ī�޶� ���� */
	void Look(const FInputActionValue& Values);
	/** ���� */
	void Sprinting();
	/** ���� �ߴ� */
	void StopSprint();
	/** ������ */
	void Rolling();
	/** ���ͷ��� */
	void Interact();
	/** �������� ��ȯ */
	void ToggleCombat();
	void AutoToggleCombat();
	/** Attack */
	void Attack();
	void SpecialAttack();
	void HeavyAttack();

protected:
	/** ���� ���¿��� ���� ������ �Ϲݰ��� */
	FGameplayTag GetAttackPerform() const;

	/** ���� ���� ���� üũ */
	bool CanPerformAttack(const FGameplayTag& AttackTypeTag) const;
	/** ���� ���� */
	void DoAttack(const FGameplayTag& AttackTypeTag);
	/** �޺� ���� */
	void ExecuteComboAttack(const FGameplayTag& AttackTypeTag);
	/** �޺� �ʱ�ȭ */
	void ResetCombo();

// Combo AnimNotify Section
public:
	void EnableComboWindow();
	void DisableComboWindow();
	void AttackFinished(const float ComboResetDelay);
};

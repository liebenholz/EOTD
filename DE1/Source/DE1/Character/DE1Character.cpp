// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/DE1Character.h"

#include "DE1GameplayTags.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Blueprint/UserWidget.h"
#include "Components/DE1CombatComponent.h"
#include "Components/DE1AttributeComponent.h"
#include "Components/DE1StateComponent.h"
#include "Equipments/DE1Weapon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/DE1Interact.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UI/DE1PlayerHUDWidget.h"

ADE1Character::ADE1Character()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);

	// Walk Speed Acceleration/Deceleration
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));
	CameraBoom->bUsePawnControlRotation = true;


	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->bUsePawnControlRotation = false;

	AttributeComponent = CreateDefaultSubobject<UDE1AttributeComponent>(TEXT("Attribute"));
	StateComponent = CreateDefaultSubobject<UDE1StateComponent>(TEXT("State"));
	CombatComponent = CreateDefaultSubobject<UDE1CombatComponent>(TEXT("Combat"));

}

void ADE1Character::BeginPlay()
{
	Super::BeginPlay();

	if (PlayerHUDWidgetClass)
	{
		PlayerHUDWidget = CreateWidget<UDE1PlayerHUDWidget>(GetWorld(), PlayerHUDWidgetClass);
		if (PlayerHUDWidget)
		{
			PlayerHUDWidget->AddToViewport();
		}
	}
}

void ADE1Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Stamina Debudding Msg
	// GEngine->AddOnScreenDebugMessage(0, 1.5f, FColor::Cyan, FString::Printf(TEXT("Stamina : %f"), AttributeComponent->GetBaseStamina()));
	// GEngine->AddOnScreenDebugMessage(2, 1.5f, FColor::Cyan, FString::Printf(TEXT("MaxWalkSpeed : %f"), GetCharacterMovement()->MaxWalkSpeed));

}

void ADE1Character::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ADE1Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);

		// ����
		EnhancedInputComponent->BindAction(SprintRollingAction, ETriggerEvent::Triggered, this, &ThisClass::Sprinting);
		EnhancedInputComponent->BindAction(SprintRollingAction, ETriggerEvent::Completed, this, &ThisClass::StopSprint);
		// ������
		EnhancedInputComponent->BindAction(SprintRollingAction, ETriggerEvent::Canceled, this, &ThisClass::Rolling);
		// ���ͷ���
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ThisClass::Interact);
		// ���� Ȱ��/��Ȱ��
		EnhancedInputComponent->BindAction(ToggleCombatAction, ETriggerEvent::Started, this, &ThisClass::ToggleCombat);

		// Combat ���·� �ڵ� ��ȯ.
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ThisClass::AutoToggleCombat);
		// �Ϲ� ����
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Canceled, this, &ThisClass::Attack);
		// Ư�� ����
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &ThisClass::SpecialAttack);
		// HeavyAttack
		EnhancedInputComponent->BindAction(HeavyAttackAction, ETriggerEvent::Started, this, &ThisClass::HeavyAttack);
	}

}

bool ADE1Character::IsMoving() const
{
	if (UCharacterMovementComponent* MovementComp = GetCharacterMovement())
	{
		return MovementComp->Velocity.Size2D() > 3.f && MovementComp->GetCurrentAcceleration() != FVector::Zero();
	}

	return false;
}

bool ADE1Character::CanToggleCombat() const
{
	check(StateComponent);

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DE1GameplayTags::Character_State_Attacking);
	CheckTags.AddTag(DE1GameplayTags::Character_State_Rolling);
	CheckTags.AddTag(DE1GameplayTags::Character_State_GeneralAction);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) == false;
}

bool ADE1Character::CanPerformAttack(const FGameplayTag& AttackTypeTag) const
{
	check(StateComponent)
		check(CombatComponent)
		check(AttributeComponent)

		if (IsValid(CombatComponent->GetMainWeapon()) == false)
		{
			return false;
		}

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DE1GameplayTags::Character_State_Rolling);
	CheckTags.AddTag(DE1GameplayTags::Character_State_GeneralAction);

	const float StaminaCost = CombatComponent->GetMainWeapon()->GetStaminaCost(AttackTypeTag);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) == false
		&& CombatComponent->IsCombatEnabled()
		&& AttributeComponent->CheckHasEnoughStamina(StaminaCost);
}


void ADE1Character::Move(const FInputActionValue& Values)
{
	check(StateComponent);

	// �̵� �Է� ���� �������� üũ.
	if (StateComponent->MovementInputEnabled() == false)
	{
		return;
	}

	FVector2D MovementVector = Values.Get<FVector2D>();

	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotator(0, Rotation.Yaw, 0);

		const FVector ForwardVector = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::X);
		const FVector RightVector = FRotationMatrix(YawRotator).GetUnitAxis(EAxis::Y);

		// �־��� ���� ���� ����(���� ����ȭ��)�� ���� 'ScaleValue'��ŭ �����ϵ� �̵� �Է��� �߰��մϴ�. 
		// ScaleValue�� 0���� ������, �̵��� �ݴ� �������� �̷�����ϴ�.
		// ScaleValue�� �Ƴ��α� �Է¿� ���� �� �ֽ��ϴ�. 
		// ���� ���, 0.5 ���� ���� ���� ������ �����ϰ�, -1.0�� ������ �ݴ�� �մϴ�.
		AddMovementInput(ForwardVector, MovementVector.Y);
		AddMovementInput(RightVector, MovementVector.X);

	}
}

void ADE1Character::Look(const FInputActionValue& Values)
{
	FVector2D LookDirection = Values.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookDirection.X);
		AddControllerPitchInput(LookDirection.Y);
	}
}

void ADE1Character::Sprinting()
{
	if (AttributeComponent->CheckHasEnoughStamina(5.f) && IsMoving())
	{
		AttributeComponent->ToggleStaminaRegeneration(false);

		GetCharacterMovement()->MaxWalkSpeed = SprintingSpeed;

		AttributeComponent->DecreaseStamina(0.1f);

		bSprinting = true;
	}
	else
	{
		StopSprint();
	}
}

void ADE1Character::StopSprint()
{
	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	AttributeComponent->ToggleStaminaRegeneration(true);
	bSprinting = false;
}

void ADE1Character::Rolling()
{
	check(AttributeComponent);
	check(StateComponent);

	if (AttributeComponent->CheckHasEnoughStamina(15.f))
	{
		// ���¹̳� ������ ����
		AttributeComponent->ToggleStaminaRegeneration(false);

		// �̵��Է� ó�� ����.
		StateComponent->ToggleMovementInput(false);

		// ���¹̳� ����.
		AttributeComponent->DecreaseStamina(15.f);

		// ������ �ִϸ��̼� ���
		PlayAnimMontage(RollingMontage);

		StateComponent->SetState(DE1GameplayTags::Character_State_Rolling);

		// ���¹̳� ������ ����
		AttributeComponent->ToggleStaminaRegeneration(true, 1.5f);
	}
}

void ADE1Character::Interact()
{
	FHitResult OutHit;
	const FVector Start = GetActorLocation();
	const FVector End = Start;
	constexpr float Radius = 100.f;

	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(COLLISION_OBJECT_INTERACTION));

	TArray<AActor*> ActorsToIgnore;

	bool bHit = UKismetSystemLibrary::SphereTraceSingleForObjects(
		this,
		Start,
		End,
		Radius,
		ObjectTypes,
		false,
		ActorsToIgnore,
		EDrawDebugTrace::ForDuration,
		OutHit,
		true);

	if (bHit)
	{
		// ������ Actor�� Interaction
		if (AActor* HitActor = OutHit.GetActor())
		{
			if (IDE1Interact* Interaction = Cast<IDE1Interact>(HitActor))
			{
				Interaction->Interact(this);
			}
		}
	}
}

void ADE1Character::ToggleCombat()
{
	check(CombatComponent)
		check(StateComponent)

		if (CombatComponent)
		{
			if (const ADE1Weapon* Weapon = CombatComponent->GetMainWeapon())
			{
				if (CanToggleCombat())
				{
					StateComponent->SetState(DE1GameplayTags::Character_State_GeneralAction);

					if (CombatComponent->IsCombatEnabled())
					{
						PlayAnimMontage(Weapon->GetMontageForTag(DE1GameplayTags::Character_Action_Unequip));
					}
					else
					{
						PlayAnimMontage(Weapon->GetMontageForTag(DE1GameplayTags::Character_Action_Equip));
					}
				}
			}
		}
}

void ADE1Character::AutoToggleCombat()
{
	if (CombatComponent)
	{
		if (!CombatComponent->IsCombatEnabled())
		{
			ToggleCombat();
		}
	}
}

void ADE1Character::Attack()
{
	const FGameplayTag AttackTypeTag = GetAttackPerform();

	if (CanPerformAttack(AttackTypeTag))
	{
		ExecuteComboAttack(AttackTypeTag);
	}
}

void ADE1Character::SpecialAttack()
{
	const FGameplayTag AttackTypeTag = DE1GameplayTags::Character_Attack_Special;

	if (CanPerformAttack(AttackTypeTag))
	{
		ExecuteComboAttack(AttackTypeTag);
	}
}

void ADE1Character::HeavyAttack()
{
	AutoToggleCombat();

	const FGameplayTag AttackTypeTag = DE1GameplayTags::Character_Attack_Heavy;

	if (CanPerformAttack(AttackTypeTag))
	{
		ExecuteComboAttack(AttackTypeTag);
	}
}

FGameplayTag ADE1Character::GetAttackPerform() const
{
	if (IsSprinting())
	{
		return DE1GameplayTags::Character_Attack_Running;
	}

	return DE1GameplayTags::Character_Attack_Light;
}

void ADE1Character::DoAttack(const FGameplayTag& AttackTypeTag)
{
	check(StateComponent)
		check(AttributeComponent)
		check(CombatComponent)

		if (const ADE1Weapon* Weapon = CombatComponent->GetMainWeapon())
		{
			StateComponent->SetState(DE1GameplayTags::Character_State_Attacking);
			StateComponent->ToggleMovementInput(false);
			CombatComponent->SetLastAttackType(AttackTypeTag);

			AttributeComponent->ToggleStaminaRegeneration(false);

			UAnimMontage* Montage = Weapon->GetMontageForTag(AttackTypeTag, ComboCounter);
			if (!Montage)
			{
				// �޺� �Ѱ� ����.
				ComboCounter = 0;
				Montage = Weapon->GetMontageForTag(AttackTypeTag, ComboCounter);
			}

			PlayAnimMontage(Montage);

			const float StaminaCost = Weapon->GetStaminaCost(AttackTypeTag);
			AttributeComponent->DecreaseStamina(StaminaCost);
			AttributeComponent->ToggleStaminaRegeneration(true, 1.5f);
		}
}

void ADE1Character::ExecuteComboAttack(const FGameplayTag& AttackTypeTag)
{
	if (StateComponent->GetCurrentState() != DE1GameplayTags::Character_State_Attacking)
	{
		if (bComboSequenceRunning && bCanComboInput == false)
		{
			// �ִϸ��̼��� �������� ���� �޺� �������� ��ȿ�� �� - �߰� �Է� ��ȸ
			ComboCounter++;
			UE_LOG(LogTemp, Warning, TEXT("Additional input : Combo Counter = %d"), ComboCounter);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT(">>> ComboSequence Started <<<"));
			ResetCombo();
			bComboSequenceRunning = true;
		}

		DoAttack(AttackTypeTag);
		GetWorld()->GetTimerManager().ClearTimer(ComboResetTimerHandle);
	}
	else if (bCanComboInput)
	{
		// �޺� �����찡 ���� ���� �� - ������ Ÿ�̹�
		bSavedComboInput = true;
	}
}

void ADE1Character::ResetCombo()
{
	UE_LOG(LogTemp, Warning, TEXT("Combo Reset"));

	bComboSequenceRunning = false;
	bCanComboInput = false;
	bSavedComboInput = false;
	ComboCounter = 0;
}

void ADE1Character::EnableComboWindow()
{
	bCanComboInput = true;
	UE_LOG(LogTemp, Warning, TEXT("Combo Window Opened: Combo Counter = %d"), ComboCounter);
}

void ADE1Character::DisableComboWindow()
{
	check(CombatComponent)

		bCanComboInput = false;

	if (bSavedComboInput)
	{
		bSavedComboInput = false;
		ComboCounter++;
		UE_LOG(LogTemp, Warning, TEXT("Combo Window Closed: Advancing to next combo = %d"), ComboCounter);
		DoAttack(CombatComponent->GetLastAttackType());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Combo Window Closed: No input received"));
	}
}

void ADE1Character::AttackFinished(const float ComboResetDelay)
{
	UE_LOG(LogTemp, Warning, TEXT("AttackFinished"));
	if (StateComponent)
	{
		StateComponent->ToggleMovementInput(true);
	}
	// ComboResetDelay �Ŀ� �޺� ������ ����
	GetWorld()->GetTimerManager().SetTimer(ComboResetTimerHandle, this, &ThisClass::ResetCombo, ComboResetDelay, false);
}


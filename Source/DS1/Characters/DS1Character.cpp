// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/DS1Character.h"

#include "DS1GameplayTags.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Animation/DS1AnimInstance.h"
#include "Blueprint/UserWidget.h"
#include "Components/CapsuleComponent.h"
#include "Components/DS1CombatComponent.h"
#include "Components/DS1AttributeComponent.h"
#include "Components/DS1PotionInventoryComponent.h"
#include "Components/DS1StateComponent.h"
#include "Components/DS1TargetingComponent.h"
#include "Engine/DamageEvents.h"
#include "Equipments/DS1FistWeapon.h"
#include "Equipments/DS1Weapon.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/DS1Interact.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sound/SoundCue.h"
#include "UI/DS1PlayerHUDWidget.h"

ADS1Character::ADS1Character()
{
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 500.f, 0.f);

	/** Speed, Decelerating */
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	/** Spring Arm */
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f;
	CameraBoom->SetRelativeRotation(FRotator(-30.f, 0.f, 0.f));
	CameraBoom->bUsePawnControlRotation = true;

    /** Camera Attached to Spring Arm */
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom);
	FollowCamera->bUsePawnControlRotation = false;

	/** Character Mesh Settings */
	TorsoMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Torso"));
	LegsMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
	FeetMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Feet"));
	TorsoMesh->SetupAttachment(GetMesh());
	LegsMesh->SetupAttachment(GetMesh());
	FeetMesh->SetupAttachment(GetMesh());

	/** Character Attributes, Status, Combat Condition */
	AttributeComponent = CreateDefaultSubobject<UDS1AttributeComponent>(TEXT("Attribute"));
	StateComponent = CreateDefaultSubobject<UDS1StateComponent>(TEXT("State"));
	CombatComponent = CreateDefaultSubobject<UDS1CombatComponent>(TEXT("Combat"));
	// LockedOn Targeting
	TargetingComponent = CreateDefaultSubobject<UDS1TargetingComponent>(TEXT("Targeting"));

	// Bind Function OnDeath Delegate.
	AttributeComponent->OnDeath.AddUObject(this, &ThisClass::OnDeath);

	// Potion Inventory
	PotionInventoryComponent = CreateDefaultSubobject<UDS1PotionInventoryComponent>(TEXT("PotionInventory"));

}

void ADS1Character::BeginPlay()
{
	Super::BeginPlay();

	// Create Player HUD Widget
	if (PlayerHUDWidgetClass)
	{
		PlayerHUDWidget = CreateWidget<UDS1PlayerHUDWidget>(GetWorld(), PlayerHUDWidgetClass);
		if (PlayerHUDWidget)
		{
			PlayerHUDWidget->AddToViewport();
		}
	}

	// Equip Fist Weapon in Default
	if (FistWeaponClass)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		ADS1FistWeapon* FistWeapon = GetWorld()->SpawnActor<ADS1FistWeapon>(FistWeaponClass, GetActorTransform(), SpawnParams);
		FistWeapon->EquipItem();
	}
}

void ADS1Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADS1Character::NotifyControllerChanged()
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

void ADS1Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ThisClass::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ThisClass::Look);

		// Sprint
		EnhancedInputComponent->BindAction(SprintRollingAction, ETriggerEvent::Triggered, this, &ThisClass::Sprinting);
		EnhancedInputComponent->BindAction(SprintRollingAction, ETriggerEvent::Completed, this, &ThisClass::StopSprint);
		// Roll
		EnhancedInputComponent->BindAction(SprintRollingAction, ETriggerEvent::Canceled, this, &ThisClass::Rolling);
		// Interaction
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ThisClass::Interact);
		// Combat Activate/Deactivate
		EnhancedInputComponent->BindAction(ToggleCombatAction, ETriggerEvent::Started, this, &ThisClass::ToggleCombat);

		// Auto Toggle to Combat
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ThisClass::AutoToggleCombat);
		// Normal Attack
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Canceled, this, &ThisClass::Attack);
		// Special Attack
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &ThisClass::SpecialAttack);
		// Heavy Attack
		EnhancedInputComponent->BindAction(HeavyAttackAction, ETriggerEvent::Started, this, &ThisClass::HeavyAttack);

		// Lock On
		EnhancedInputComponent->BindAction(LockOnTargetAction, ETriggerEvent::Started, this, &ThisClass::LockOnTarget);
		EnhancedInputComponent->BindAction(LeftTargetAction, ETriggerEvent::Started, this, &ThisClass::LeftTarget);
		EnhancedInputComponent->BindAction(RightTargetAction, ETriggerEvent::Started, this, &ThisClass::RightTarget);

		// Block Action
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Started, this, &ThisClass::Blocking);
		EnhancedInputComponent->BindAction(BlockAction, ETriggerEvent::Completed, this, &ThisClass::BlockingEnd);

		// Parry Action
		EnhancedInputComponent->BindAction(ParryAction, ETriggerEvent::Started, this, &ThisClass::Parrying);

		// Drink Potion
		EnhancedInputComponent->BindAction(ConsumeAction, ETriggerEvent::Started, this, &ThisClass::Consume);
	}

}

bool ADS1Character::IsDeath() const
{
	check(StateComponent)

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Death);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags);
}

void ADS1Character::SetBodyPartActive(const EDS1ArmourType ArmourType, const bool bActive) const
{
	switch (ArmourType) {
	case EDS1ArmourType::Chest:
		TorsoMesh->SetVisibility(bActive);
		TorsoMesh->SetActive(bActive);
		break;
	case EDS1ArmourType::Pants:
		LegsMesh->SetVisibility(bActive);
		LegsMesh->SetActive(bActive);
		break;
	case EDS1ArmourType::Boots:
		FeetMesh->SetVisibility(bActive);
		FeetMesh->SetActive(bActive);
		break;
	case EDS1ArmourType::Gloves:
		break;
	}
}

float ADS1Character::TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float  ActualDamage = Super::TakeDamage(Damage, DamageEvent, EventInstigator, DamageCauser);

	if (!CanReceiveDamage())
	{
		UE_LOG(LogTemp, Warning, TEXT("Rolling IFrames"));
		return ActualDamage;
	}

	check(AttributeComponent);
	check(StateComponent);

	// Interrupt While Drinking Potion
	InterruptWhileDrinkingPotion();

	// Is the Direction FAcing Enemy?
	bFacingEnemy = UKismetMathLibrary::InRange_FloatFloat(GetDotProductTo(EventInstigator->GetPawn()), -0.1f, 1.f);

	// Parry
	if (ParriedAttackSucceed())
	{
		if (IDS1CombatInterface* CombatInterface = Cast<IDS1CombatInterface>(EventInstigator->GetPawn()))
		{
			CombatInterface->Parried();

			ADS1Weapon* MainWeapon = CombatComponent->GetMainWeapon();
			if (IsValid(MainWeapon))
			{
				FVector Location = MainWeapon->GetActorLocation();
				ShieldBlockingEffect(Location);
			}
		}

		return ActualDamage;
	}


	// Is Blockable?
	if (CanPerformAttackBlocking())
	{
		AttributeComponent->TakeDamageAmount(0.f);
		// Decrease Stamina
		AttributeComponent->DecreaseStamina(20.f);
		StateComponent->SetState(DS1GameplayTags::Character_State_Blocking);
	}
	else
	{
		AttributeComponent->TakeDamageAmount(ActualDamage);
		StateComponent->SetState(DS1GameplayTags::Character_State_Hit);
	}

	// Make Unmovable.
	StateComponent->ToggleMovementInput(false);

	if (DamageEvent.IsOfType(FPointDamageEvent::ClassID))
	{
		const FPointDamageEvent* PointDamageEvent = static_cast<const FPointDamageEvent*>(&DamageEvent);

		// Damage Direction
		FVector ShotDirection = PointDamageEvent->ShotDirection;
		// Hit Point
		FVector ImpactPoint = PointDamageEvent->HitInfo.ImpactPoint;
		// Hit Direction
		FVector ImpactDirection = PointDamageEvent->HitInfo.ImpactNormal;
		// Object's Location (at Object Perspective)
		FVector HitLocation = PointDamageEvent->HitInfo.Location;

		ImpactEffect(ImpactPoint);

		HitReaction(EventInstigator->GetPawn(), EDS1DamageType::HitBack);
	}
	else if (DamageEvent.IsOfType(FRadialDamageEvent::ClassID))
	{
		const FRadialDamageEvent* RadialDamageEvent = static_cast<const FRadialDamageEvent*>(&DamageEvent);

		const FVector HitLocation = RadialDamageEvent->Origin;

		ImpactEffect(HitLocation);

		HitReaction(EventInstigator->GetPawn(), EDS1DamageType::KnockBack);
	}

	return ActualDamage;
}

void ADS1Character::ImpactEffect(const FVector& Location)
{
	if (CanPerformAttackBlocking())
	{
		ShieldBlockingEffect(Location);
	}
	else
	{
		if (ImpactSound)
		{
			UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Location);
		}

		if (ImpactParticle)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactParticle, Location);
		}
	}
}

void ADS1Character::ShieldBlockingEffect(const FVector& Location) const
{
	if (BlockingSound)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), BlockingSound, Location);
	}

	if (BlockingParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), BlockingParticle, Location);
	}
}

void ADS1Character::HitReaction(const AActor* Attacker, const EDS1DamageType InDamageType)
{
	check(CombatComponent)

	if (CanPerformAttackBlocking())
	{
		if (UAnimMontage* BlockingMontage = CombatComponent->GetMainWeapon()->GetMontageForTag(DS1GameplayTags::Character_Action_BlockingHit))
		{
			PlayAnimMontage(BlockingMontage);
		}
	}
	else
	{
		if (InDamageType == EDS1DamageType::HitBack)
		{
			if (UAnimMontage* HitReactAnimMontage = CombatComponent->GetMainWeapon()->GetHitReactMontage(Attacker))
			{
				PlayAnimMontage(HitReactAnimMontage);
			}
		}
		else if (InDamageType == EDS1DamageType::KnockBack)
		{
			if (UAnimMontage* HitReactAnimMontage = CombatComponent->GetMainWeapon()->GetMontageForTag(DS1GameplayTags::Character_Action_KnockBackHit))
			{
				PlayAnimMontage(HitReactAnimMontage);
			}
		}
	}
}

void ADS1Character::OnDeath()
{
	if (UCapsuleComponent* CapsuleComp = GetCapsuleComponent())
	{
		CapsuleComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	// Ragdoll
	if (USkeletalMeshComponent* MeshComp = GetMesh())
	{
		MeshComp->SetCollisionProfileName("Ragdoll");
		MeshComp->SetCollisionResponseToChannel(ECC_Camera, ECR_Ignore);
		MeshComp->SetSimulatePhysics(true);
	}
}

bool ADS1Character::IsMoving() const
{
	if (UCharacterMovementComponent* MovementComp = GetCharacterMovement())
	{
		return MovementComp->Velocity.Size2D() > 3.f && MovementComp->GetCurrentAcceleration() != FVector::Zero();
	}

	return false;
}

bool ADS1Character::CanToggleCombat() const
{
	check(StateComponent);

	if (IsValid(CombatComponent->GetMainWeapon()) == false)
	{
		return false;
	}

	if (CombatComponent->GetMainWeapon()->GetCombatType() == ECombatType::MeleeFists)
	{
		return false;
	}

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Attacking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Rolling);
	CheckTags.AddTag(DS1GameplayTags::Character_State_GeneralAction);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) == false;
}

bool ADS1Character::CanPerformAttack(const FGameplayTag& AttackTypeTag) const
{
	check(StateComponent)
	check(CombatComponent)
	check(AttributeComponent)

	if (IsValid(CombatComponent->GetMainWeapon()) == false)
	{
		return false;
	}

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Rolling);
	CheckTags.AddTag(DS1GameplayTags::Character_State_GeneralAction);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Hit);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Blocking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_DrinkingPotion);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Parrying);

	const float StaminaCost = CombatComponent->GetMainWeapon()->GetStaminaCost(AttackTypeTag);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) == false
		&& CombatComponent->IsCombatEnabled()
		&& AttributeComponent->CheckHasEnoughStamina(StaminaCost);
}


void ADS1Character::Move(const FInputActionValue& Values)
{
	check(StateComponent);

	// Is Movement Input Enable?
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

		AddMovementInput(ForwardVector, MovementVector.Y);
		AddMovementInput(RightVector, MovementVector.X);
	}
}

void ADS1Character::Look(const FInputActionValue& Values)
{
	// Input Unavailable while LockedOn
	if (TargetingComponent && TargetingComponent->IsLockOn())
	{
		return;
	}

	FVector2D LookDirection = Values.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(LookDirection.X);
		AddControllerPitchInput(LookDirection.Y);
	}
}

void ADS1Character::Sprinting()
{
	check(AttributeComponent);
	check(CombatComponent);

	if (CombatComponent->IsBlockingEnabled())
	{
		return;
	}

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

void ADS1Character::StopSprint()
{
	check(AttributeComponent);
	check(CombatComponent);

	if (CombatComponent->IsBlockingEnabled())
	{
		return;
	}

	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
	AttributeComponent->ToggleStaminaRegeneration(true);
	bSprinting = false;
}

void ADS1Character::Rolling()
{
	check(AttributeComponent);
	check(StateComponent);

	if (AttributeComponent->CheckHasEnoughStamina(15.f))
	{
		// 스태미나 재충전 멈춤
		AttributeComponent->ToggleStaminaRegeneration(false);

		// 이동입력 처리 무시.
		StateComponent->ToggleMovementInput(false);

		// 스태미나 차감.
		AttributeComponent->DecreaseStamina(15.f);

		// 구르기 애니메이션 재생
		PlayAnimMontage(RollingMontage);

		StateComponent->SetState(DS1GameplayTags::Character_State_Rolling);

		// 스태미나 재충전 시작
		AttributeComponent->ToggleStaminaRegeneration(true, 1.5f);
	}
}

void ADS1Character::Interact()
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
		// 감지한 Actor와 Interaction
		if (AActor* HitActor = OutHit.GetActor())
		{
			if (IDS1Interact* Interaction = Cast<IDS1Interact>(HitActor))
			{
				Interaction->Interact(this);
			}
		}
	}
}

void ADS1Character::ToggleCombat()
{
	check(CombatComponent)
	check(StateComponent)

	if (CombatComponent)
	{
		if (const ADS1Weapon* Weapon = CombatComponent->GetMainWeapon())
		{
			if (CanToggleCombat())
			{
				StateComponent->SetState(DS1GameplayTags::Character_State_GeneralAction);

				if (CombatComponent->IsCombatEnabled())
				{
					PlayAnimMontage(Weapon->GetMontageForTag(DS1GameplayTags::Character_Action_Unequip));
				}
				else
				{
					PlayAnimMontage(Weapon->GetMontageForTag(DS1GameplayTags::Character_Action_Equip));
				}
			}
		}
	}
}

void ADS1Character::AutoToggleCombat()
{
	if (CombatComponent)
	{
		if (!CombatComponent->IsCombatEnabled())
		{
			ToggleCombat();
		}
	}
}

void ADS1Character::Attack()
{
	const FGameplayTag AttackTypeTag = GetAttackPerform();

	if (CanPerformAttack(AttackTypeTag))
	{
		ExecuteComboAttack(AttackTypeTag);
	}
}

void ADS1Character::SpecialAttack()
{
	const FGameplayTag AttackTypeTag = DS1GameplayTags::Character_Attack_Special;

	if (CanPerformAttack(AttackTypeTag))
	{
		ExecuteComboAttack(AttackTypeTag);
	}
}

void ADS1Character::HeavyAttack()
{
	AutoToggleCombat();

	const FGameplayTag AttackTypeTag = DS1GameplayTags::Character_Attack_Heavy;

	if (CanPerformAttack(AttackTypeTag))
	{
		ExecuteComboAttack(AttackTypeTag);
	}
}

void ADS1Character::LockOnTarget()
{
	TargetingComponent->ToggleLockOn();
}

void ADS1Character::LeftTarget()
{
	TargetingComponent->SwitchingLockedOnActor(ESwitchingDirection::Left);
}

void ADS1Character::RightTarget()
{
	TargetingComponent->SwitchingLockedOnActor(ESwitchingDirection::Right);
}

void ADS1Character::Blocking()
{
	check(CombatComponent);
	check(StateComponent);

	if (CombatComponent->GetMainWeapon())
	{
		if (CanPlayerBlockStance())
		{
			GetCharacterMovement()->MaxWalkSpeed = BlockingSpeed;
			CombatComponent->SetBlockingEnabled(true);
			if (UDS1AnimInstance* AnimInstance = Cast<UDS1AnimInstance>(GetMesh()->GetAnimInstance()))
			{
				AnimInstance->UpdateBlocking(true);
				StateComponent->SetState(DS1GameplayTags::Character_State_Blocking);
			}
		}
	}
}

void ADS1Character::BlockingEnd()
{
	check(CombatComponent);
	check(StateComponent);

	CombatComponent->SetBlockingEnabled(false);
	if (UDS1AnimInstance* AnimInstance = Cast<UDS1AnimInstance>(GetMesh()->GetAnimInstance()))
	{
		AnimInstance->UpdateBlocking(false);
		StateComponent->ClearState();
	}
	GetCharacterMovement()->MaxWalkSpeed = NormalSpeed;
}

void ADS1Character::Parrying()
{
	check(CombatComponent);
	check(StateComponent);
	check(AttributeComponent);

	if (CanPerformParry())
	{
		if (const ADS1Weapon* MainWeapon = CombatComponent->GetMainWeapon())
		{
			UAnimMontage* ParryingMontage = MainWeapon->GetMontageForTag(DS1GameplayTags::Character_State_Parrying);

			StateComponent->ToggleMovementInput(false);
			AttributeComponent->ToggleStaminaRegeneration(false);
			AttributeComponent->DecreaseStamina(10.f);

			PlayAnimMontage(ParryingMontage);

			AttributeComponent->ToggleStaminaRegeneration(true, 1.5f);
		}
	}
}

void ADS1Character::Consume()
{
	if (!StateComponent)
	{
		return;
	}

	if (CanDrinkPotion())
	{
		StateComponent->SetState(DS1GameplayTags::Character_State_DrinkingPotion);
		PlayAnimMontage(DrinkingMontage);
	}
}

FGameplayTag ADS1Character::GetAttackPerform() const
{
	if (IsSprinting())
	{
		return DS1GameplayTags::Character_Attack_Running;
	}

	return DS1GameplayTags::Character_Attack_Light;
}

void ADS1Character::DoAttack(const FGameplayTag& AttackTypeTag)
{
	check(StateComponent)
	check(AttributeComponent)
	check(CombatComponent)

	if (const ADS1Weapon* Weapon = CombatComponent->GetMainWeapon())
	{
		StateComponent->SetState(DS1GameplayTags::Character_State_Attacking);
		StateComponent->ToggleMovementInput(false);
		CombatComponent->SetLastAttackType(AttackTypeTag);

		AttributeComponent->ToggleStaminaRegeneration(false);

		UAnimMontage* Montage = Weapon->GetMontageForTag(AttackTypeTag, ComboCounter);
		if (!Montage)
		{
			// 콤보 한계 도달.
			ComboCounter = 0;
			Montage = Weapon->GetMontageForTag(AttackTypeTag, ComboCounter);
		}

		PlayAnimMontage(Montage);

		const float StaminaCost = Weapon->GetStaminaCost(AttackTypeTag);
		AttributeComponent->DecreaseStamina(StaminaCost);
		AttributeComponent->ToggleStaminaRegeneration(true, 1.5f);
	}
}

void ADS1Character::ExecuteComboAttack(const FGameplayTag& AttackTypeTag)
{
	if (StateComponent->GetCurrentState() != DS1GameplayTags::Character_State_Attacking)
	{
		if (bComboSequenceRunning && bCanComboInput == false)
		{
			// 애니메이션은 끝났지만 아직 콤보 시퀀스가 유효할 때 - 추가 입력 기회
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
		// 콤보 윈도우가 열려 있을 때 - 최적의 타이밍
		bSavedComboInput = true;
	}
}

void ADS1Character::ResetCombo()
{
	UE_LOG(LogTemp, Warning, TEXT("Combo Reset"));

	bComboSequenceRunning = false;
	bCanComboInput = false;
	bSavedComboInput = false;
	ComboCounter = 0;
}

bool ADS1Character::CanPlayerBlockStance() const
{
	check(StateComponent);
	check(CombatComponent);
	check(AttributeComponent);

	if (IsSprinting())
	{
		return false;
	}

	ADS1Weapon* Weapon = CombatComponent->GetMainWeapon();
	if (!IsValid(Weapon))
	{
		return false;
	}

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Attacking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_GeneralAction);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Hit);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Rolling);
	CheckTags.AddTag(DS1GameplayTags::Character_State_DrinkingPotion);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Parrying);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) == false &&
		Weapon->GetCombatType() == ECombatType::SwordShield &&
		AttributeComponent->CheckHasEnoughStamina(1.f);
}

bool ADS1Character::CanPerformAttackBlocking() const
{
	check(CombatComponent);
	check(AttributeComponent);

	return bFacingEnemy && CombatComponent->IsBlockingEnabled() && AttributeComponent->CheckHasEnoughStamina(20.f);
}

bool ADS1Character::CanPerformParry() const
{
	check(StateComponent);
	check(CombatComponent);
	check(AttributeComponent);

	ADS1Weapon* MainWeapon = CombatComponent->GetMainWeapon();
	if (!IsValid(MainWeapon))
	{
		return false;
	}

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Attacking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Rolling);
	CheckTags.AddTag(DS1GameplayTags::Character_State_GeneralAction);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Hit);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Blocking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Death);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Parrying);
	CheckTags.AddTag(DS1GameplayTags::Character_State_DrinkingPotion);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) == false &&
		MainWeapon->GetCombatType() == ECombatType::SwordShield &&
		AttributeComponent->CheckHasEnoughStamina(1.f);
}

bool ADS1Character::ParriedAttackSucceed() const
{
	check(StateComponent);

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Parrying);

	return StateComponent->IsCurrentStateEqualToAny(CheckTags) && bFacingEnemy;
}

bool ADS1Character::CanDrinkPotion() const
{
	check(PotionInventoryComponent);
	check(StateComponent);

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_Attacking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Blocking);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Death);
	CheckTags.AddTag(DS1GameplayTags::Character_State_GeneralAction);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Hit);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Parrying);
	CheckTags.AddTag(DS1GameplayTags::Character_State_Rolling);

	return PotionInventoryComponent->GetPotionQuantity() > 0 && StateComponent->IsCurrentStateEqualToAny(CheckTags) == false;
}

void ADS1Character::InterruptWhileDrinkingPotion() const
{
	check(StateComponent);

	FGameplayTagContainer CheckTags;
	CheckTags.AddTag(DS1GameplayTags::Character_State_DrinkingPotion);

	if (StateComponent->IsCurrentStateEqualToAny(CheckTags))
	{
		if (PotionInventoryComponent)
		{
			PotionInventoryComponent->DespawnPotion();
		}
	}
}

void ADS1Character::EnableComboWindow()
{
	bCanComboInput = true;
	UE_LOG(LogTemp, Warning, TEXT("Combo Window Opened: Combo Counter = %d"), ComboCounter);
}

void ADS1Character::DisableComboWindow()
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

void ADS1Character::AttackFinished(const float ComboResetDelay)
{
	UE_LOG(LogTemp, Warning, TEXT("AttackFinished"));
	if (StateComponent)
	{
		StateComponent->ToggleMovementInput(true);
	}
	// ComboResetDelay 후에 콤보 시퀀스 종료
	GetWorld()->GetTimerManager().SetTimer(ComboResetTimerHandle, this, &ThisClass::ResetCombo, ComboResetDelay, false);
}

void ADS1Character::ActivateWeaponCollision(EWeaponCollisionType WeaponCollisionType)
{
	if (CombatComponent)
	{
		CombatComponent->GetMainWeapon()->ActivateCollision(WeaponCollisionType);
	}
}

void ADS1Character::DeactivateWeaponCollision(EWeaponCollisionType WeaponCollisionType)
{
	if (CombatComponent)
	{
		CombatComponent->GetMainWeapon()->DeactivateCollision(WeaponCollisionType);
	}
}

void ADS1Character::ToggleIFrames(const bool bEnabled)
{
	bEnabledIFrames = bEnabled;
}


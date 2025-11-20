// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Maze_Character.generated.h"

UCLASS()
class MYCPPPROJECT_API AMaze_Character : public ACharacter
{
	GENERATED_BODY()

	

private:
	//Private Variables
	UPROPERTY(EditAnywhere)
	float moveSpeed;
	UPROPERTY(EditAnywhere)
	float turnSpeed;

public:
	// Sets default values for this character's properties
	AMaze_Character();

	//Public health variables
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _curHealth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float maxHealth;

	UPROPERTY(EditAnywhere)
	UCharacterMovementComponent* CharMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Timer for speed up functionality
	FTimerHandle MyTimer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Movement functions
	virtual void MoveForward(float speed);

	virtual void MoveSideways(float speed);

	virtual void Rotate(float rotation);

	virtual void StartJump();

	virtual void AddYaw(float yawVal);

	virtual void AddPitch(float pitchVal);

	//Stun Function
	virtual void StunEnemies();

	//Healing functions
	virtual void HealWounds(float healAmt);

	//Speed functions
	virtual void SpeedUp();

	virtual void SlowDown();

	//Damage Functions
	UFUNCTION(BlueprintCallable)
	virtual float TakeDamage(float damageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageDealer);

	virtual void Die();
};

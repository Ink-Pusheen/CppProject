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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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
};

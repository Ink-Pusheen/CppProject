// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze_Character.h"

// Sets default values
AMaze_Character::AMaze_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMaze_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMaze_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Called to bind functionality to input
void AMaze_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMaze_Character::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveSideways"), this, &AMaze_Character::MoveSideways);
	PlayerInputComponent->BindAxis(TEXT("Horizontal"), this, &AMaze_Character::AddYaw);
	PlayerInputComponent->BindAxis(TEXT("Vertical"), this, &AMaze_Character::AddPitch);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AMaze_Character::StartJump);
}

void AMaze_Character::MoveForward(float speed)
{
	AddMovementInput(GetActorForwardVector(), speed * moveSpeed);
}

void AMaze_Character::MoveSideways(float speed)
{
	AddMovementInput(GetActorRightVector(), speed * moveSpeed);
}

void AMaze_Character::Rotate(float rotation)
{
	AddControllerYawInput(rotation * turnSpeed);
}

void AMaze_Character::AddYaw(float yawVal)
{
	AddControllerYawInput(yawVal * turnSpeed);
}

void AMaze_Character::AddPitch(float pitchVal)
{
	AddControllerPitchInput(pitchVal * turnSpeed);
}

void AMaze_Character::StartJump()
{
	Jump();
}

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

	AddMovementInput(GetActorForwardVector(), moveSpeed);
}

// Called to bind functionality to input
void AMaze_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


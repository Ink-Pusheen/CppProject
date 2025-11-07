// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze_Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMaze_Character::AMaze_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CharMovement = GetCharacterMovement();
}

// Called when the game starts or when spawned
void AMaze_Character::BeginPlay()
{
	Super::BeginPlay();
	
	//Sets the players health to max
	_curHealth = maxHealth;
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
	PlayerInputComponent->BindAction(TEXT("Stun"), IE_Pressed, this, &AMaze_Character::StunEnemies);
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

void AMaze_Character::StunEnemies()
{
	//Get all AI within a radius of the character
	//Call the stun event on those AI it hits. The event will set "isStunned" on the blackboard to true and set a timer
	//	isStunned is their first Check so it is comitted first
	//	...
}

void AMaze_Character::StartJump()
{
	Jump();
}

//Speed functions

void AMaze_Character::SpeedUp()
{
	if (CharMovement->MaxWalkSpeed != 600) return; //Return if the player is alread speed up

	CharMovement->MaxWalkSpeed += 600.f; //Speeds the player up

	//Proof on concept
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Player Sped up"));

	//Starts the timer to slow the player down after 3 seconds
	GetWorldTimerManager().SetTimer(MyTimer, this, &AMaze_Character::SlowDown, 3.f, false);
}

void AMaze_Character::SlowDown()
{
	CharMovement->MaxWalkSpeed -= 600.f; //Slows the player down

	//Proof of concept
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Player Slowed"));
}

//Damage Functions

void AMaze_Character::HealWounds(float healAmt)
{
	_curHealth += healAmt; //Heals the designated amount

	if (_curHealth > maxHealth) _curHealth = maxHealth; //Hard limit the health so it doesn't overflow

	//Proof of concept
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Current HP: %f"), _curHealth));
}

float AMaze_Character::TakeDamage(float damageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageDealer)
{
	if (moveSpeed == 0) return 0; //Break this so the player health doesn't infinitely go down

	//Applies the damage to the player
	_curHealth -= damageTaken;

	//Check if the player is dead
	if (_curHealth <= 0)
	{
		Die();
	}

	//Log
	UE_LOG(LogTemp, Log, TEXT("Player took %f damage. %f health remains"), damageTaken, _curHealth);

	if (GEngine) //Testing
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Player took damage!"));

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Current HP: %f"), _curHealth));

	}

	return damageTaken;
}

void AMaze_Character::Die()
{
	//Halts all player movement
	moveSpeed = 0;
	turnSpeed = 0;

	//Soon, allow the player to reset the scene
}

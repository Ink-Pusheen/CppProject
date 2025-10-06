// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze_Character.h"
#include "Key_Pickup.h"
#include "Door_Object.h"
#include "Engine/Engine.h"

AKey_Pickup::AKey_Pickup()
{
	OnActorBeginOverlap.AddDynamic(this, &AKey_Pickup::CheckActorType);

}

void AKey_Pickup::CheckActorType(AActor* OverlappedActor, AActor* otherActor)
{

	if (GEngine) //Testing
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Hello from C++ Actor!"));
	}

	//Checks if the other actor is the maze character
	if (otherActor->IsA(AMaze_Character::StaticClass()))
	{
		OpenDoor();
	}
}

void AKey_Pickup::OpenDoor()
{
	connectedDoor->Destroy();
	this->Destroy();
}



// Fill out your copyright notice in the Description page of Project Settings.


#include "Maze_Character.h"
#include "Key_Pickup.h"
#include "Door_Object.h"
#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/Engine.h"

AKey_Pickup::AKey_Pickup()
{
	OnActorBeginOverlap.AddDynamic(this, &AKey_Pickup::CheckActorType);

}

void AKey_Pickup::CheckActorType(AActor* OverlappedActor, AActor* otherActor)
{
	if (otherActor)
	{
		USpringArmComponent* springArm = otherActor->FindComponentByClass<USpringArmComponent>();
		//ACameraActor* Cam = otherActor->FindComponentByClass<ACameraActor>();

		if (GEngine) //Testing
		{
			if(!springArm) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Has no player input"));

			else  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Has player input"));
			
		}

		//Check if the object has a springarm
		if (springArm)
		{
			OpenDoor();
		}

		////Checks if the other actor is the maze character
		//if (otherActor->IsA(AMaze_Character::StaticClass()))
		//{
		//	//OpenDoor();
		//}
	}

	
}

void AKey_Pickup::OpenDoor()
{
	connectedDoor->Destroy();
	this->Destroy();
}



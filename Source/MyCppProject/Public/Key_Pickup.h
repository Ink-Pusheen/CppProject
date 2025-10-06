// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Door_Object.h"
#include "Key_Pickup.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPPROJECT_API AKey_Pickup : public ATriggerBox
{
	GENERATED_BODY()

public:

	AKey_Pickup();

	//Function for overlap and checking if it's the player
	UFUNCTION()
	void CheckActorType(class AActor* OverlappedActor, class AActor* otherActor);

	//Function to open the door
	UFUNCTION()
	void OpenDoor();

	//Variables
	UPROPERTY(EditAnywhere)
	ADoor_Object* connectedDoor;

};

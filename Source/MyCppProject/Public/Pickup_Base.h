// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Pickup_Base.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPPROJECT_API APickup_Base : public ATriggerBox
{
	GENERATED_BODY()
	
public:

	APickup_Base(); //On build

	//Function for checking the overlapping actor
	UFUNCTION()
	void CheckActorType(class AActor* OverlappedActor, class AActor* otherActor);

	//Function to derive custom functions onto
	UFUNCTION()
	virtual void OverlapFunction(AActor* player);

};

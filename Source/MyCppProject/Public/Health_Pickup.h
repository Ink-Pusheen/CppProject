// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup_Base.h"
#include "Health_Pickup.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPPROJECT_API AHealth_Pickup : public APickup_Base
{
	GENERATED_BODY()
	

public:

	virtual void OverlapFunction(AActor* player) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "LockAndKey.generated.h"

/**
 * 
 */
UCLASS()
class MYCPPPROJECT_API ALockAndKey : public ATriggerBox
{
	GENERATED_BODY()

	
	
public:
	ALockAndKey();

	UPROPERTY(EditAnywhere)
	int touches;

	UFUNCTION()
	void CheckActorType(class AActor* OverlappedActor, class AActor* otherActor);


};

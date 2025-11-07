// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup_Base.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/Engine.h"


APickup_Base::APickup_Base()
{
	OnActorBeginOverlap.AddDynamic(this, &APickup_Base::CheckActorType);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Error"));
}

void APickup_Base::CheckActorType(AActor* OverlappedActor, AActor* otherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Error"));
	if (otherActor)
	{
		//Checks if the overlapping object has the spring arm component
		USpringArmComponent* springArm = otherActor->FindComponentByClass<USpringArmComponent>();

		if (GEngine) //Testing
		{
			if (!springArm) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Has no player input"));

			else  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Has player input"));

		}

		//If the overlapping does have a spring arm
		if (springArm)
		{
			OverlapFunction(); //If they do have it, run the overlap function
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Error"));
		}
	}
	else {
		if (GEngine) //Testing
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Error"));

		}
	}
}

void APickup_Base::OverlapFunction()
{
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "LockAndKey.h"
#include "MazeCharacter.h"


ALockAndKey::ALockAndKey()
{
	//Call actor overlap
	OnActorBeginOverlap.AddDynamic(this, &ALockAndKey::CheckActorType);

	touches = 0; //Assigns the initial value
}

void ALockAndKey::CheckActorType(AActor* OverlappedActor, AActor* otherActor)
{
	//if(otherActor->IsA(AMazeCharacter::StaticClass()))
	touches++;
}

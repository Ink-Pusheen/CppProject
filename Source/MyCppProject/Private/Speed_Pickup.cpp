// Fill out your copyright notice in the Description page of Project Settings.


#include "Speed_Pickup.h"
#include "Maze_Character.h"

void ASpeed_Pickup::OverlapFunction(AActor* player)
{
	//Grabs the player c++ component
	AMaze_Character* playerInstance = Cast<AMaze_Character>(player);

	//Applies the speed to the player
	//playerInstance->SpeedUp();
	playerInstance->sprinters++;

	this->Destroy();
}

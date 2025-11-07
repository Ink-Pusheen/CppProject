// Fill out your copyright notice in the Description page of Project Settings.


#include "Health_Pickup.h"
#include "Maze_Character.h"

void AHealth_Pickup::OverlapFunction(AActor* player)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Health Pickup"));

	//AMaze_Character* playerInstance = player->FindComponentByClass<AMaze_Character>();
	AMaze_Character* playerInstance = Cast<AMaze_Character>(player);

	int hp = playerInstance->_curHealth;
	int maxHp = playerInstance->maxHealth;

	if (hp < maxHp)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Heal"));
		playerInstance->HealWounds(2.f);
		this->Destroy();
	}

	else GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Max Hp");
}

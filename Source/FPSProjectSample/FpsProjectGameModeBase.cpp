// Fill out your copyright notice in the Description page of Project Settings.


#include "FpsProjectGameModeBase.h"

void AFpsProjectGameModeBase::StartPlay()
{
	Super::StartPlay();

	UE_LOG(LogTemp, Warning, TEXT("Initializing game in GameMode in C++"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Hello World, this is FPSGameMode!"));
	}
}


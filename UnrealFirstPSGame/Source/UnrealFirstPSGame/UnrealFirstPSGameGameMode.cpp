// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealFirstPSGameGameMode.h"
#include "UnrealFirstPSGameHUD.h"
#include "UnrealFirstPSGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealFirstPSGameGameMode::AUnrealFirstPSGameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealFirstPSGameHUD::StaticClass();
}

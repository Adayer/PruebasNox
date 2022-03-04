// Copyright Epic Games, Inc. All Rights Reserved.

#include "NoxIAGameMode.h"
#include "NoxIAHUD.h"
#include "NoxIACharacter.h"
#include "UObject/ConstructorHelpers.h"

ANoxIAGameMode::ANoxIAGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANoxIAHUD::StaticClass();
}

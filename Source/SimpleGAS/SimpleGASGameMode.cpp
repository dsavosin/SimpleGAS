// Copyright Epic Games, Inc. All Rights Reserved.

#include "SimpleGASGameMode.h"
#include "SimpleGASCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASimpleGASGameMode::ASimpleGASGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

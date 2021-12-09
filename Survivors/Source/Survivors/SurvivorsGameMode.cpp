// Copyright Epic Games, Inc. All Rights Reserved.

#include "SurvivorsGameMode.h"
#include "SurvivorsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASurvivorsGameMode::ASurvivorsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

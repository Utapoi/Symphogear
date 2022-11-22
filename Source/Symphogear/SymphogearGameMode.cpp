// Copyright Epic Games, Inc. All Rights Reserved.

#include "SymphogearGameMode.h"
#include "SymphogearCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASymphogearGameMode::ASymphogearGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

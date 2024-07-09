// Copyright Epic Games, Inc. All Rights Reserved.

#include "cmas_1GameMode.h"
#include "cmas_1Character.h"
#include "UObject/ConstructorHelpers.h"

Acmas_1GameMode::Acmas_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

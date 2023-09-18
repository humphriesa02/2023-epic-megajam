// Copyright Epic Games, Inc. All Rights Reserved.

#include "CraneGameGameMode.h"
#include "CraneGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACraneGameGameMode::ACraneGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

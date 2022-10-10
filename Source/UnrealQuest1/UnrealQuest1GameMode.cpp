// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealQuest1GameMode.h"
#include "UnrealQuest1Character.h"
#include "UObject/ConstructorHelpers.h"

AUnrealQuest1GameMode::AUnrealQuest1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

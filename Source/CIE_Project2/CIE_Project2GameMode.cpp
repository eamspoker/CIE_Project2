// Copyright Epic Games, Inc. All Rights Reserved.

#include "CIE_Project2GameMode.h"
#include "CIE_Project2Character.h"
#include "UObject/ConstructorHelpers.h"

ACIE_Project2GameMode::ACIE_Project2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

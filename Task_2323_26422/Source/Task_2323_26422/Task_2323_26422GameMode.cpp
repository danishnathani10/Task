// Copyright Epic Games, Inc. All Rights Reserved.

#include "Task_2323_26422GameMode.h"
#include "Task_2323_26422Character.h"
#include "UObject/ConstructorHelpers.h"

ATask_2323_26422GameMode::ATask_2323_26422GameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/OtherActors/c3"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

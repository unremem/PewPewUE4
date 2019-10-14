// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PewPewGameMode.h"
#include "PewPewPawn.h"

APewPewGameMode::APewPewGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APewPewPawn::StaticClass();
}


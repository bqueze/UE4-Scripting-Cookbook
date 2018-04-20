// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "USC_001.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, USC_001, "USC_001" );

int main()
{
	/*int intVar = 5;
	float floatVar = 3.7f;
	FString fstringVar = "an fstring variable";
	UE_LOG(LogTemp, Warning, TEXT("Text, %d %f %s"), intVar,
	floatVar, *fstringVar);*/

	/*FString name = "Tim";
	int32 mana = 450;
	FString string = FString::Printf(TEXT("Name = %s Mana= %d"), *name, mana);*/

	FString name = "Tim";
	int32 mana = 450;
	TArray<FStringFormatArg> args;
	args.Add(FStringFormatArg(name));
	args.Add(FStringFormatArg(mana));
	FString string = FString::Format(TEXT("Name = {0} Mana = {1}"),
		args);
	UE_LOG(LogTemp, Warning, TEXT("Your string: %s"), *string);
}

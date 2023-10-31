// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Morph.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UMorph : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */
class PVZ_USFX_LAB02_API IMorph
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.

public:
	//The pure virtual functions of the Morph
	virtual void Morph() = 0;

};
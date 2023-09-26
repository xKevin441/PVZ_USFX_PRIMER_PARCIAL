// Fill out your copyright notice in the Description page of Project Settings.

// Clase hija de Potenciador que activa el modo MegaSol
#pragma once

#include "CoreMinimal.h"
#include "Potenciador.h"
#include "MegaSol.generated.h"

/***
 ** 
 */
UCLASS()
class PVZ_USFX_LAB02_API AMegaSol : public APotenciador
{
	GENERATED_BODY()
public:
		void ActivarPotenciador();
};

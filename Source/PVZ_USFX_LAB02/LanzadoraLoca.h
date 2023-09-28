// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "LanzadoraLoca.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ALanzadoraLoca : public APlant
{
	GENERATED_BODY()
public:
	ALanzadoraLoca();
	virtual void Tick(float DeltaTime) override;
	float TiempoTranscurrido1 = 0.0f;
	float TiempoEntreDisparos1 = 2.0f;
};

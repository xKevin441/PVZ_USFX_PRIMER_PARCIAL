// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomMovement.h"
#include "Sol.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API ASol : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASol();
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshSol;
	UPROPERTY(EditAnywhere)
	URandomMovement* MovimientoAleatorio;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ManejoClick();

	bool bIsActive;

	void Resaltado(bool bOn);
};

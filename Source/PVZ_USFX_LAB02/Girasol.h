// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Plant.h"
#include "Subscriber.h"
#include "Morph.h"
#include "Zombie.h"
#include "Girasol.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API AGirasol : public APlant, public ISubscriber, public IMorph
{
	GENERATED_BODY()
	public:
		AGirasol();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY()
	class AZombie* ZombiePublisher;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	void SpawnSoles();

	FTimerHandle Temporizador;



	virtual void Destroyed() override;
	virtual void Update(class APublisher* Publisher) override;
	virtual void Morph();
	void SetZombiePublisher(AZombie* Zombie);
};

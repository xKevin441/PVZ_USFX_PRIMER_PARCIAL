// Fill out your copyright notice in the Description page of Project Settings.
#include "Girasol.h"
#include "Sol.h"
AGirasol::AGirasol()
{
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	Tags.Add(TEXT("Girasol"));
	//Cambiar el tamaño del sol
	PlantMeshComponent->SetRelativeScale3D(FVector(3, 1, 3));

}

void AGirasol::BeginPlay()
{
	int Tiempo = FMath::RandRange(3, 6);

	UWorld* const World = GetWorld();

	World->GetTimerManager().SetTimer(Temporizador, this, &AGirasol::SpawnSoles, Tiempo, true);
}

void AGirasol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGirasol::SpawnSoles()
{
	UWorld* const World = GetWorld();

	FVector Ubicacion = GetActorLocation();

	World->SpawnActor<ASol>(ASol::StaticClass(), FVector(Ubicacion.X, Ubicacion.Y, 100), FRotator::ZeroRotator);
}

void AGirasol::Destroyed()
{
	Super::Destroyed();
	//ZombiePublisher->UnSubscribe(this);
}

void AGirasol::Update(APublisher* Publisher)
{
	Morph();
}

void AGirasol::Morph()
{
	bool EstadoZombie = ZombiePublisher->GetEstado();
	UWorld* const World = GetWorld();
	if (EstadoZombie == 0)
	{
		World->GetTimerManager().SetTimer(Temporizador, this, &AGirasol::SpawnSoles, 3, true);
	}
	else
	{
		World->GetTimerManager().SetTimer(Temporizador, this, &AGirasol::SpawnSoles, 20, true);
	}
}

void AGirasol::SetZombiePublisher(AZombie* Zombie)
{
	ZombiePublisher = Zombie;
	ZombiePublisher->Subscribe(this);
}

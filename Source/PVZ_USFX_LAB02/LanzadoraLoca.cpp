// Fill out your copyright notice in the Description page of Project Settings.


#include "LanzadoraLoca.h"
#include "PVZ_USFX_LAB02Projectile.h"

ALanzadoraLoca::ALanzadoraLoca()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
}

void ALanzadoraLoca::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	TiempoTranscurrido1 += DeltaTime;
	if (TiempoTranscurrido1 >= TiempoEntreDisparos1) {

		float NumeroAleatorioX = FMath::RandRange(-1, 1);
		float NumeroAleatorioY = FMath::RandRange(-1, 1);

		FVector Direccion = FVector(NumeroAleatorioX, NumeroAleatorioY, 0.0f);
		FireShot(Direccion);

		TiempoTranscurrido1 = 0.0f;
	}
}


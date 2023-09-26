// Fill out your copyright notice in the Description page of Project Settings.


#include "Nuez.h"

ANuez::ANuez()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);

	Tags.Add(TEXT("Nuez"));
}

// Fill out your copyright notice in the Description page of Project Settings.

#include "Plant.h"
#include "Lanzaguisantes.h"
#include "MyPlayerController.h"

//AMyPlayerController::AMyPlayerController()
//{
//
//
//
//}
//
//void AMyPlayerController::PlayerTick(float DeltaTime)
//{
//	Super::PlayerTick(DeltaTime);
//
//	//Captura la posicion del mouse en la pantalla
//	//FVector WorldLocation, WorldDirection;
//	//DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
//}
//
//void AMyPlayerController::SetupInputComponent()
//{
//	Super::SetupInputComponent();
//
//	bShowMouseCursor = true;
//	// Bind the left click event
//	InputComponent->BindAction("LeftClick", IE_Pressed, this, &AMyPlayerController::HandleLeftClick);
//}
//
//void AMyPlayerController::HandleLeftClick()
//{
//	// Captura la posicion del mouse en la pantalla
//	FVector WorldLocation, WorldDirection;
//	DeprojectMousePositionToWorld(WorldLocation, WorldDirection);
//
//	//APlant* NewPlant = GetWorld()->SpawnActor<APlant>(APawn::StaticClass(), WorldLocation, FRotator::ZeroRotator);
//	ALanzaguisantes* NewLanzaguisantes = GetWorld()->SpawnActor<ALanzaguisantes>(ALanzaguisantes::StaticClass(), WorldLocation, FRotator::ZeroRotator);
//}

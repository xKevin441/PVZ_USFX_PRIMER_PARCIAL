// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomSceneComponent.h"

// Sets default values for this component's properties
UCustomSceneComponent::UCustomSceneComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UCustomSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCustomSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


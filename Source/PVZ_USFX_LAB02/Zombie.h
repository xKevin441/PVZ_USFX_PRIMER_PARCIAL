#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Publisher.h"
#include "Zombie.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AZombie : public APublisher
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AZombie();

public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Zombie")
	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* ZombieMeshComponent;
	UFUNCTION()
		void OnOverlapBeginFunction(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float DamageGenerates = 10.0f;
	float Health = 50.0f;
	float SpawnAfter = 0.0f;
	float MovementSpeed = 4.0f;
	bool bCanMove = false;

	bool estado = false;
	void estadoChanged();
	void SetEstado(bool _estado);

	FORCEINLINE bool GetEstado() { return estado; }

	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	void MoveToTarget(FVector TargetLocation);

	virtual void Attack() {};

	FORCEINLINE void SetSpawnAfter(float _SpawnAfter) { SpawnAfter = _SpawnAfter; }
	FORCEINLINE float GetSpawnAfter() { return SpawnAfter; }
	FORCEINLINE void SetCanMove(bool _bCanMove) { bCanMove = _bCanMove; }	
};

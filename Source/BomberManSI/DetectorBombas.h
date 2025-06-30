// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAlertaObserver.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DetectorBombas.generated.h"

UCLASS()
class BOMBERMANSI_API ADetectorBombas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADetectorBombas();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	float DistanciaAlerta10 = 3000.f;

	UPROPERTY(EditAnywhere)
	float DistanciaAlerta3 = 900.f;

	UPROPERTY()
	TArray<TScriptInterface<IIAlertaObserver>> Observers;

	UPROPERTY()
	TArray<AActor*> Bombas;

	void AgregarObserver(TScriptInterface<IIAlertaObserver> Observer);
	void Detectar();

	FTimerHandle TimerHandleDeteccion;
};

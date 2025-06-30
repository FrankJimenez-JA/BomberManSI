// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"
#include "DetectorBombas.h"
#include "GameFramework/GameModeBase.h"
#include "AlertaArmadura.h"
#include "AlertaSonido.h"
#include "BomberManSIGameMode.generated.h"
class IBloqueFactory;
class ABloque;
UCLASS(minimalapi)
class ABomberManSIGameMode : public AGameModeBase
{	GENERATED_BODY()

public:
	ABomberManSIGameMode();
	virtual void BeginPlay() override;

	UPROPERTY()
	ADetectorBombas* Detector;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ADetectorBombas> ClaseDetector;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AAlertaSonido> ClaseAlerta;


	UPROPERTY(EditAnywhere)
	TSubclassOf<class ABloqueFactory> ClaseFactoryBloques;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABloque>> ClasesBloquesNormales;
	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABloque>> ClasesBloquesBombas;
	UPROPERTY(EditAnywhere)
	float ProbabilidadBomba = 0.1f; // 15% de que sea bomba
	TArray<TArray<int32>> MapaBloques =
	{
		{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
		{ 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 1 },
		{ 1, 3, 2, 3, 2, 0, 3, 3, 3, 3, 2, 0, 2, 0, 3, 2, 2, 0, 3, 1 },
		{ 1, 0, 0, 2, 0, 0, 2, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 2, 1 },
		{ 1, 3, 2, 0, 0, 2, 0, 0, 3, 0, 2, 2, 2, 2, 3, 2, 3, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 1 },
		{ 1, 2, 3, 0, 2, 0, 2, 2, 0, 2, 3, 0, 2, 0, 3, 0, 2, 0, 0, 1 },
		{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 3, 0, 2, 2, 2, 1 },
		{ 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
	};
	ABloque* BloqueActual = nullptr;
	void Spawnearbloques(FVector Posicion, int32 valor);
public:
	TMap<int32, TArray<AActor*>> BloquesPorTipo;
	TArray<ABloque*> ListaBloques;

	//UPROPERTY(EditAnywhere)
	//TSubclassOf<AAlertaArmadura> ClaseArmadura;
	/*
	// Distancias en unidades de juego (por ejemplo, si un bloque mide 300 unidades, 10 bloques = 3000)
	UPROPERTY(EditAnywhere)
	float DistanciaAlerta10 = 3000.f;  // 10 bloques

	UPROPERTY(EditAnywhere)
	float DistanciaAlerta3 = 900.f;    // 3 bloques

	// Sonidos para las alertas (configurar en el editor o constructor)
	UPROPERTY(EditAnywhere)
	USoundBase* SonidoAlerta10;

	UPROPERTY(EditAnywhere)
	USoundBase* SonidoAlerta3;

	// Flags para evitar sonidos repetidos
	//bool bAlerta10Sonando = false;
	//bool bAlerta3Sonando = false;
	//void CheckProximidadBomba();
	//FTimerHandle TimerHandle_ProximidadBomba;*/
};




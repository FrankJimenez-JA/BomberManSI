// Fill out your copyright notice in the Description page of Project Settings.


#include "DetectorBombas.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
// Sets default values
ADetectorBombas::ADetectorBombas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ADetectorBombas::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandleDeteccion, this, &ADetectorBombas::Detectar, 0.5f, true);
}

// Called every frame
void ADetectorBombas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ADetectorBombas::AgregarObserver(TScriptInterface<IIAlertaObserver> Observer)
{
	Observers.Add(Observer);
}
/*
void ADetectorBombas::Detectar()
{
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC) return;

	APawn* Jugador = PC->GetPawn();
	if (!Jugador) return;

	FVector PosJugador = Jugador->GetActorLocation();

	int NivelAlerta = 0; // 0 = sin bomba, 1 = cerca, 2 = muy cerca

	for (AActor* Bomba : Bombas)
	{
		if (!Bomba) continue;
		float Dist = FVector::Dist(PosJugador, Bomba->GetActorLocation());

		if (Dist <= DistanciaAlerta3)
		{
			NivelAlerta = 2;
			break;
		}
		else if (Dist <= DistanciaAlerta10)
		{
			NivelAlerta = FMath::Max(NivelAlerta, 1);
		}
	}

	// Notificar a todos los observadores
	for (TScriptInterface<IIAlertaObserver>& Observer : Observers)
	{
		if (Observer.GetObject())
			//Obs->OnAlertaDetectada(NivelAlerta);
			Observer->ActualizarAlerta(DistanciaMinima);
	}
}
*/
void ADetectorBombas::Detectar()
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Black, TEXT("Detectar() llamado"));
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if (!PlayerPawn) return;

	FVector PosJugador = PlayerPawn->GetActorLocation();

	float DistanciaMinima = FLT_MAX;

	for (AActor* Bomba : Bombas)
	{
		if (!Bomba) continue;

		float Distancia = FVector::Dist(PosJugador, Bomba->GetActorLocation());
		if (Distancia < DistanciaMinima)
		{
			DistanciaMinima = Distancia;
		}
	}

	for (auto& Obs : Observers)
	{
		if (Obs)
		{
			Obs->ActualizarAlerta(DistanciaMinima);
		}
	}
}
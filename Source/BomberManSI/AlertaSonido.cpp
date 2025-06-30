// Fill out your copyright notice in the Description page of Project Settings.


#include "AlertaSonido.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AAlertaSonido::AAlertaSonido()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// Asignar sonidos si existen en la ruta
	static ConstructorHelpers::FObjectFinder<USoundBase> Sonido10(TEXT("/Script/Engine.SoundWave'/Game/Sonidos/Sirena.Sirena'"));
	if (Sonido10.Succeeded())
	{
		SonidoAlerta10 = Sonido10.Object;
	}

	static ConstructorHelpers::FObjectFinder<USoundBase> Sonido3(TEXT("/Script/Engine.SoundWave'/Game/Sonidos/Alarma.Alarma'"));
	if (Sonido3.Succeeded())
	{
		SonidoAlerta3 = Sonido3.Object;
	}
}

// Called when the game starts or when spawned
void AAlertaSonido::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAlertaSonido::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAlertaSonido::ActualizarAlerta(float Distancia)
{
	if (Distancia <= 900.f)
	{
		if (!bSonando3)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Orange, TEXT("⚠ BOMBA MUY CERCA (<3 bloques)!"));
			UGameplayStatics::PlaySound2D(this, SonidoAlerta3);
			bSonando3 = true;
			bSonando10 = false;
		}
	}
	else if (Distancia <= 3000.f)
	{
		if (!bSonando10)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("⚠ Bomba cercana (<10 bloques)"));
			UGameplayStatics::PlaySound2D(this, SonidoAlerta10);
			bSonando10 = true;
			bSonando3 = false;
		}
	}
	else
	{
		bSonando10 = false;
		bSonando3 = false;
	}
}
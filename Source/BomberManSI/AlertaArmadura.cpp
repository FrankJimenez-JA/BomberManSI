// Fill out your copyright notice in the Description page of Project Settings.


#include "AlertaArmadura.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
AAlertaArmadura::AAlertaArmadura()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    /*
    ParticulasArmadura = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticulasArmadura"));
    RootComponent = ParticulasArmadura; // Es el componente raíz
    ParticulasArmadura->bAutoActivate = false;

    bArmaduraActiva = false;

    // Puedes cambiar esta ruta a otra si tienes un efecto distinto
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));
    if (ParticleAsset.Succeeded())
    {
        ParticulasArmadura->SetTemplate(ParticleAsset.Object);
    }

    /*
    static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Script/Engine.ParticleSystem'/Game/StarterContent/Particles/P_Sparks.P_Sparks'"));
    if (ParticleAsset.Succeeded()) {
        ParticulasArmadura->SetTemplate(ParticleAsset.Object);
    }
	ParticulasArmadura = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticulasArmadura"));
	ParticulasArmadura->SetupAttachment(RootComponent);
	ParticulasArmadura->bAutoActivate = false; // No activar al inicio

	bArmaduraActiva = false;*/
}

// Called when the game starts or when spawned
void AAlertaArmadura::BeginPlay()
{
	Super::BeginPlay();
   
}
/*
void AAlertaArmadura::ActualizarAlerta(float Distancia)
{
    const float DistanciaArmadura = 600.f; // 2 bloques (300 * 2)

    if (Distancia <= DistanciaArmadura && !bArmaduraActiva)
    {
        bArmaduraActiva = true;
        ParticulasArmadura->Activate(true);
        GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Green, TEXT("🛡️ Armadura ACTIVADA"));
        // Aquí puedes agregar sonido también, si quieres
    }
    else if (Distancia > DistanciaArmadura && bArmaduraActiva)
    {
        bArmaduraActiva = false;
        ParticulasArmadura->Deactivate();
        GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, TEXT("🛡️ Armadura DESACTIVADA"));
    }
}*/
// Called every frame
void AAlertaArmadura::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


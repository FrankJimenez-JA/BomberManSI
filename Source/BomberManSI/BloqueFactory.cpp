// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueFactory.h"

// Sets default values
ABloqueFactory::ABloqueFactory()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABloqueFactory::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABloqueFactory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABloqueFactory::InicializarFactory(TSubclassOf<ABloque> InNormal, TSubclassOf<ABloque> InBomba)
{
	ClaseNormal = InNormal;
	ClaseBomba = InBomba;
}

TSubclassOf<ABloque> ABloqueFactory::GetBloqueClass(bool bEsBomba) const
{
	return bEsBomba ? ClaseBomba : ClaseNormal;
}
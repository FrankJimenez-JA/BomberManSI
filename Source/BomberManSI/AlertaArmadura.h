// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/Actor.h"
#include "AlertaArmadura.generated.h"

UCLASS()
class BOMBERMANSI_API AAlertaArmadura : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAlertaArmadura();
	//virtual void ActualizarAlerta(float Distancia) override;
	//UPROPERTY(VisibleAnywhere)
	//UParticleSystemComponent* ParticulasArmadura;

	//bool bArmaduraActiva;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

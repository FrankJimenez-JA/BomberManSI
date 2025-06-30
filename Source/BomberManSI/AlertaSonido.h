// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IAlertaObserver.h"
#include "Sound/SoundBase.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AlertaSonido.generated.h"
UCLASS()
class BOMBERMANSI_API AAlertaSonido : public AActor, public IIAlertaObserver
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAlertaSonido();
	UPROPERTY(EditAnywhere)
	USoundBase* SonidoAlerta10;

	UPROPERTY(EditAnywhere)
	USoundBase* SonidoAlerta3;

	bool bSonando10 = false;
	bool bSonando3 = false;

	virtual void ActualizarAlerta(float Distancia) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

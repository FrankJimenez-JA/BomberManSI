// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IBloqueFactory.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloqueFactory.generated.h"

UCLASS()
class BOMBERMANSI_API ABloqueFactory : public AActor,public  IIBloqueFactory
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloqueFactory();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ABloque> ClaseNormal;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABloque> ClaseBomba;
	// Para inicializar las clases manualmente desde código
	void InicializarFactory(TSubclassOf<ABloque> InNormal, TSubclassOf<ABloque> InBomba);

	virtual TSubclassOf<ABloque> GetBloqueClass(bool bEsBomba) const override;
};

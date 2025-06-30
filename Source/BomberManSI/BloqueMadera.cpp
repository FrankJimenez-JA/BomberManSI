// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueMadera.h"

ABloqueMadera::ABloqueMadera()
{
	static ConstructorHelpers::FObjectFinder<UMaterial>MaterialAsset(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Wood_Floor_Walnut_Polished.M_Wood_Floor_Walnut_Polished'"));
	if (MaterialAsset.Object != nullptr)
	{
		Malla->SetMaterial(0, MaterialAsset.Object);
	}
}
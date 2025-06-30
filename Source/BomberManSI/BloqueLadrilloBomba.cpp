// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueLadrilloBomba.h"

ABloqueLadrilloBomba::ABloqueLadrilloBomba()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_CobbleStone_Smooth.M_CobbleStone_Smooth'"));
	if (Material.Object != nullptr)
	{
		Malla->SetMaterial(0, Material.Object);
	}
}
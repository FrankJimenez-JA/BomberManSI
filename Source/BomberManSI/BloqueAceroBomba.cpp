// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueAceroBomba.h"

ABloqueAceroBomba::ABloqueAceroBomba()
{
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel'"));
	if (Material.Object != nullptr)
	{
		Malla->SetMaterial(0, Material.Object);
	}
}
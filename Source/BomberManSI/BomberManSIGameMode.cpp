// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberManSIGameMode.h"
#include "BomberManSICharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "BloqueLadrillo.h"
#include "BloqueLadrilloBomba.h"
#include "BloqueMadera.h"
#include "BloqueMaderaBomba.h"
#include "BloqueFactory.h"
#include "BloqueAcero.h"
#include "BloqueAceroBomba.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "DetectorBombas.h"
//#include "AlertaSonido.h"
ABomberManSIGameMode::ABomberManSIGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}


	static ConstructorHelpers::FClassFinder<ADetectorBombas> DetectorBPClass(TEXT("/Script/BomberManSI.DetectorBombas"));
	if (DetectorBPClass.Succeeded())
	{
		ClaseDetector = DetectorBPClass.Class;
	}

	static ConstructorHelpers::FClassFinder<AAlertaSonido> AlertaBPClass(TEXT("/Script/BomberManSI.AlertaSonido"));
	if (AlertaBPClass.Succeeded())
	{
		ClaseAlerta = AlertaBPClass.Class;
	}
	//ClaseArmadura = AAlertaArmadura::StaticClass();
	/*
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
	}*/
}

void ABomberManSIGameMode::BeginPlay()
{
	Super::BeginPlay();
	
	// Asignar manualmente clases normales y bomba
	ClasesBloquesNormales.Add(ABloqueLadrillo::StaticClass());
	ClasesBloquesBombas.Add(ABloqueLadrilloBomba::StaticClass());

	ClasesBloquesNormales.Add(ABloqueMadera::StaticClass());
	ClasesBloquesBombas.Add(ABloqueMaderaBomba::StaticClass());

	ClasesBloquesNormales.Add(ABloqueAcero::StaticClass());
	ClasesBloquesBombas.Add(ABloqueAceroBomba::StaticClass());

	// Asignar la clase factory
	ClaseFactoryBloques = ABloqueFactory::StaticClass();

	// Ubicación inicial y espaciado
	FVector Bloque_Inicial = FVector(-3750.0, -3750.0, 0.0f);
	float Espaciado = 300.0f;
	// Recorremos el mapa y spawneamos los bloques
	if (GetWorld()) {
		for (int fila = 0; fila < MapaBloques.Num(); fila++)
		{
			for (int columna = 0; columna < MapaBloques[fila].Num(); columna++)
			{
				int32 valor = MapaBloques[fila][columna];
				FVector Ubicacion = Bloque_Inicial + FVector(columna * Espaciado, fila * Espaciado, 0.0f);
				Spawnearbloques(Ubicacion, valor);
			
			}
		}
	}

	if (ClaseDetector && ClaseAlerta)
	{
		Detector = GetWorld()->SpawnActor<ADetectorBombas>(ClaseDetector, FVector(0, 0, 100), FRotator::ZeroRotator);
		AAlertaSonido* Alerta = GetWorld()->SpawnActor<AAlertaSonido>(ClaseAlerta, FVector(0, 0, 150), FRotator::ZeroRotator);

		TScriptInterface<IIAlertaObserver> Observer;
		Observer.SetObject(Alerta);
		Observer.SetInterface(Cast<IIAlertaObserver>(Alerta));
		Detector->AgregarObserver(Observer);

		// Opcional: pasarle la lista de bombas
		if (BloquesPorTipo.Contains(99))
		{
			Detector->Bombas = BloquesPorTipo[99];
		}
		GetWorldTimerManager().SetTimer(
			Detector->TimerHandleDeteccion,
			Detector,
			&ADetectorBombas::Detectar,
			0.5f, // cada medio segundo
			true
		);
	}
	/*
	if (ClaseArmadura)
	{
		AAlertaArmadura* AlertaArmadura = GetWorld()->SpawnActor<AAlertaArmadura>(ClaseArmadura, FVector(0, 0, 150), FRotator::ZeroRotator);

		TScriptInterface<IIAlertaObserver> ObserverArmadura;
		ObserverArmadura.SetObject(AlertaArmadura);
		ObserverArmadura.SetInterface(Cast<IIAlertaObserver>(AlertaArmadura));

		Detector->AgregarObserver(ObserverArmadura);
	}*/
	// Registrar al personaje Bomberman como observador para armadura
	ABomberManSICharacter* Bomberman = Cast<ABomberManSICharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Bomberman)
	{
		TScriptInterface<IIAlertaObserver> ObserverArmadura;
		ObserverArmadura.SetObject(Bomberman);
		ObserverArmadura.SetInterface(Cast<IIAlertaObserver>(Bomberman));
		Detector->AgregarObserver(ObserverArmadura);
	}
	/*
	// Crear el detector
	ADetectorBombas* Detector = GetWorld()->SpawnActor<ADetectorBombas>();
	Detector->Bombas = BloquesPorTipo.Contains(99) ? BloquesPorTipo[99] : TArray<AActor*>();

	// Crear el observador
	AAlertaSonido* AlertaSonido = GetWorld()->SpawnActor<AAlertaSonido>();
	Detector->AgregarObserver(AlertaSonido);
	// Activar el chequeo de proximidad
	//GetWorldTimerManager().SetTimer(TimerHandle_ProximidadBomba, this, &ABomberManSIGameMode::CheckProximidadBomba, 0.5f, true);*/
}

void ABomberManSIGameMode::Spawnearbloques(FVector Ubicacion, int32 Bloque)
{
	ABloque* TipoBloque = nullptr;
	
	if ((Bloque == 1 || Bloque == 2 || Bloque == 3) && ClaseFactoryBloques && ClasesBloquesNormales.Num() > 0)
	{
		int Index = INDEX_NONE;
		if (Bloque == 2) Index = 0; // Ladrillo
		else if (Bloque == 3) Index = 1; // Madera
		else if (Bloque == 1) Index = 2; // Acero

		ABloqueFactory* FactoryTemp = GetWorld()->SpawnActor<ABloqueFactory>(ClaseFactoryBloques, FVector(-9999), FRotator::ZeroRotator);

		if (FactoryTemp)
		{
			FactoryTemp->InicializarFactory(ClasesBloquesNormales[Index], ClasesBloquesBombas[Index]);

			bool bEsBomba = FMath::FRand() < ProbabilidadBomba;


			TSubclassOf<ABloque> ClaseSeleccionada = FactoryTemp->GetBloqueClass(bEsBomba);

			//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Clase seleccionada: %s"), *ClaseSeleccionada->GetName()));

			if (ClaseSeleccionada)
			{
				TipoBloque = GetWorld()->SpawnActor<ABloque>(ClaseSeleccionada, Ubicacion, FRotator::ZeroRotator);
				// Añadir también al tipo 99 si es bomba
				if (ClaseSeleccionada == ClasesBloquesBombas[Index])
				{
					const int32 ID_BloquesBomba = 99;
					if (!BloquesPorTipo.Contains(ID_BloquesBomba))
					{
						BloquesPorTipo.Add(ID_BloquesBomba, TArray<AActor*>());
					}
					BloquesPorTipo[ID_BloquesBomba].Add(TipoBloque);
				}
			}
			
			FactoryTemp->Destroy();
		}
	}

	if (TipoBloque)
	{
		TipoBloque->SetActorScale3D(FVector(3.0f, 3.0f, 3.0f));
		ListaBloques.Add(TipoBloque);

		if (!BloquesPorTipo.Contains(Bloque))
		{
			BloquesPorTipo.Add(Bloque, TArray<AActor*>());
		}
		BloquesPorTipo[Bloque].Add(TipoBloque);
	}
}
/*
void ABomberManSIGameMode::CheckProximidadBomba()
{
	const int32 ID_BloquesBomba = 99;
	if (!GetWorld()) return;

	APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) return;

	FVector PosJugador = PlayerPawn->GetActorLocation();

	bool bDetectoAlerta10 = false;
	bool bDetectoAlerta3 = false;

	// Recorrer todos los bloques bomba (por ejemplo, el tipo que guardas en BloquesPorTipo)
	if (BloquesPorTipo.Contains(ID_BloquesBomba))
	{
		TArray<AActor*>& Bombas = BloquesPorTipo[ID_BloquesBomba];

		for (AActor* Bomba : Bombas)
		{
			if (!Bomba) continue;

			float Dist = FVector::Dist(PosJugador, Bomba->GetActorLocation());

			if (Dist <= DistanciaAlerta3)
			{
				bDetectoAlerta3 = true;
				break; // urgente, salimos
			}
			else if (Dist <= DistanciaAlerta10)
			{
				bDetectoAlerta10 = true;
			}
		}
	}

	// Manejar sonidos según detección y flags para no repetirlos

	if (bDetectoAlerta3)
	{
		if (!bAlerta3Sonando)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Red, TEXT("⚠ BOMBA MUY CERCA (<3 bloques)!"));
			UGameplayStatics::PlaySound2D(this, SonidoAlerta3);
			bAlerta3Sonando = true;
			bAlerta10Sonando = false; // bajar alerta menor
		}
	}
	else if (bDetectoAlerta10)
	{
		if (!bAlerta10Sonando)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.5f, FColor::Yellow, TEXT("⚠ Bomba cercana (<10 bloques)"));
			UGameplayStatics::PlaySound2D(this, SonidoAlerta10);
			bAlerta10Sonando = true;
			bAlerta3Sonando = false; // no urgente
		}
	}
	else
	{
		bAlerta10Sonando = false;
		bAlerta3Sonando = false;
	}
}*/
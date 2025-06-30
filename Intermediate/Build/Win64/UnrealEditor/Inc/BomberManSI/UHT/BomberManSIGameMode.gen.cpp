// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/BomberManSIGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberManSIGameMode() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_AAlertaSonido_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueFactory_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABomberManSIGameMode();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABomberManSIGameMode_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_ADetectorBombas_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ABomberManSIGameMode
void ABomberManSIGameMode::StaticRegisterNativesABomberManSIGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberManSIGameMode);
UClass* Z_Construct_UClass_ABomberManSIGameMode_NoRegister()
{
	return ABomberManSIGameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberManSIGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberManSIGameMode.h" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Detector_MetaData[] = {
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseDetector_MetaData[] = {
		{ "Category", "BomberManSIGameMode" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseAlerta_MetaData[] = {
		{ "Category", "BomberManSIGameMode" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseFactoryBloques_MetaData[] = {
		{ "Category", "BomberManSIGameMode" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClasesBloquesNormales_MetaData[] = {
		{ "Category", "BomberManSIGameMode" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClasesBloquesBombas_MetaData[] = {
		{ "Category", "BomberManSIGameMode" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProbabilidadBomba_MetaData[] = {
		{ "Category", "BomberManSIGameMode" },
		{ "ModuleRelativePath", "BomberManSIGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Detector;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseDetector;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseAlerta;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseFactoryBloques;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClasesBloquesNormales_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClasesBloquesNormales;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClasesBloquesBombas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClasesBloquesBombas;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProbabilidadBomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberManSIGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_Detector = { "Detector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, Detector), Z_Construct_UClass_ADetectorBombas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Detector_MetaData), NewProp_Detector_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClaseDetector = { "ClaseDetector", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, ClaseDetector), Z_Construct_UClass_UClass, Z_Construct_UClass_ADetectorBombas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseDetector_MetaData), NewProp_ClaseDetector_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClaseAlerta = { "ClaseAlerta", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, ClaseAlerta), Z_Construct_UClass_UClass, Z_Construct_UClass_AAlertaSonido_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseAlerta_MetaData), NewProp_ClaseAlerta_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClaseFactoryBloques = { "ClaseFactoryBloques", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, ClaseFactoryBloques), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloqueFactory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseFactoryBloques_MetaData), NewProp_ClaseFactoryBloques_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesNormales_Inner = { "ClasesBloquesNormales", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesNormales = { "ClasesBloquesNormales", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, ClasesBloquesNormales), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClasesBloquesNormales_MetaData), NewProp_ClasesBloquesNormales_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesBombas_Inner = { "ClasesBloquesBombas", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesBombas = { "ClasesBloquesBombas", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, ClasesBloquesBombas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClasesBloquesBombas_MetaData), NewProp_ClasesBloquesBombas_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ProbabilidadBomba = { "ProbabilidadBomba", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberManSIGameMode, ProbabilidadBomba), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProbabilidadBomba_MetaData), NewProp_ProbabilidadBomba_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberManSIGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_Detector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClaseDetector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClaseAlerta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClaseFactoryBloques,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesNormales_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesNormales,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesBombas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ClasesBloquesBombas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberManSIGameMode_Statics::NewProp_ProbabilidadBomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberManSIGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABomberManSIGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberManSIGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberManSIGameMode_Statics::ClassParams = {
	&ABomberManSIGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABomberManSIGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberManSIGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberManSIGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberManSIGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberManSIGameMode()
{
	if (!Z_Registration_Info_UClass_ABomberManSIGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberManSIGameMode.OuterSingleton, Z_Construct_UClass_ABomberManSIGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberManSIGameMode.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ABomberManSIGameMode>()
{
	return ABomberManSIGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberManSIGameMode);
ABomberManSIGameMode::~ABomberManSIGameMode() {}
// End Class ABomberManSIGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BomberManSIGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberManSIGameMode, ABomberManSIGameMode::StaticClass, TEXT("ABomberManSIGameMode"), &Z_Registration_Info_UClass_ABomberManSIGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberManSIGameMode), 1210887558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BomberManSIGameMode_h_1536218591(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BomberManSIGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BomberManSIGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

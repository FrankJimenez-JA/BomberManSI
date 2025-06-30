// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/DetectorBombas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectorBombas() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_ADetectorBombas();
BOMBERMANSI_API UClass* Z_Construct_UClass_ADetectorBombas_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_UIAlertaObserver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ADetectorBombas
void ADetectorBombas::StaticRegisterNativesADetectorBombas()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADetectorBombas);
UClass* Z_Construct_UClass_ADetectorBombas_NoRegister()
{
	return ADetectorBombas::StaticClass();
}
struct Z_Construct_UClass_ADetectorBombas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DetectorBombas.h" },
		{ "ModuleRelativePath", "DetectorBombas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaAlerta10_MetaData[] = {
		{ "Category", "DetectorBombas" },
		{ "ModuleRelativePath", "DetectorBombas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanciaAlerta3_MetaData[] = {
		{ "Category", "DetectorBombas" },
		{ "ModuleRelativePath", "DetectorBombas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observers_MetaData[] = {
		{ "ModuleRelativePath", "DetectorBombas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bombas_MetaData[] = {
		{ "ModuleRelativePath", "DetectorBombas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaAlerta10;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanciaAlerta3;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Observers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Observers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bombas_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bombas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADetectorBombas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADetectorBombas_Statics::NewProp_DistanciaAlerta10 = { "DistanciaAlerta10", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetectorBombas, DistanciaAlerta10), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaAlerta10_MetaData), NewProp_DistanciaAlerta10_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADetectorBombas_Statics::NewProp_DistanciaAlerta3 = { "DistanciaAlerta3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetectorBombas, DistanciaAlerta3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanciaAlerta3_MetaData), NewProp_DistanciaAlerta3_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Observers_Inner = { "Observers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIAlertaObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Observers = { "Observers", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetectorBombas, Observers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observers_MetaData), NewProp_Observers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Bombas_Inner = { "Bombas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Bombas = { "Bombas", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADetectorBombas, Bombas), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bombas_MetaData), NewProp_Bombas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADetectorBombas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetectorBombas_Statics::NewProp_DistanciaAlerta10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetectorBombas_Statics::NewProp_DistanciaAlerta3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Observers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Observers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Bombas_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADetectorBombas_Statics::NewProp_Bombas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADetectorBombas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADetectorBombas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADetectorBombas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADetectorBombas_Statics::ClassParams = {
	&ADetectorBombas::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADetectorBombas_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADetectorBombas_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADetectorBombas_Statics::Class_MetaDataParams), Z_Construct_UClass_ADetectorBombas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADetectorBombas()
{
	if (!Z_Registration_Info_UClass_ADetectorBombas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADetectorBombas.OuterSingleton, Z_Construct_UClass_ADetectorBombas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADetectorBombas.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ADetectorBombas>()
{
	return ADetectorBombas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADetectorBombas);
ADetectorBombas::~ADetectorBombas() {}
// End Class ADetectorBombas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_DetectorBombas_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADetectorBombas, ADetectorBombas::StaticClass, TEXT("ADetectorBombas"), &Z_Registration_Info_UClass_ADetectorBombas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADetectorBombas), 2710789828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_DetectorBombas_h_1330165999(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_DetectorBombas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_DetectorBombas_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

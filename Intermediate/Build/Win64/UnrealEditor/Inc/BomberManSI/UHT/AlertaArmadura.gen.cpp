// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/AlertaArmadura.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlertaArmadura() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_AAlertaArmadura();
BOMBERMANSI_API UClass* Z_Construct_UClass_AAlertaArmadura_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class AAlertaArmadura
void AAlertaArmadura::StaticRegisterNativesAAlertaArmadura()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAlertaArmadura);
UClass* Z_Construct_UClass_AAlertaArmadura_NoRegister()
{
	return AAlertaArmadura::StaticClass();
}
struct Z_Construct_UClass_AAlertaArmadura_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AlertaArmadura.h" },
		{ "ModuleRelativePath", "AlertaArmadura.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlertaArmadura>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAlertaArmadura_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlertaArmadura_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAlertaArmadura_Statics::ClassParams = {
	&AAlertaArmadura::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlertaArmadura_Statics::Class_MetaDataParams), Z_Construct_UClass_AAlertaArmadura_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAlertaArmadura()
{
	if (!Z_Registration_Info_UClass_AAlertaArmadura.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAlertaArmadura.OuterSingleton, Z_Construct_UClass_AAlertaArmadura_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAlertaArmadura.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<AAlertaArmadura>()
{
	return AAlertaArmadura::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAlertaArmadura);
AAlertaArmadura::~AAlertaArmadura() {}
// End Class AAlertaArmadura

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaArmadura_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAlertaArmadura, AAlertaArmadura::StaticClass, TEXT("AAlertaArmadura"), &Z_Registration_Info_UClass_AAlertaArmadura, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAlertaArmadura), 2624439277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaArmadura_h_266753388(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaArmadura_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaArmadura_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

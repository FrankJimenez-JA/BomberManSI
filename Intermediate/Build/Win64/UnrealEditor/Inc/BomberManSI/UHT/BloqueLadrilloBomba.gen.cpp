// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/BloqueLadrilloBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueLadrilloBomba() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloque();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueLadrilloBomba();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueLadrilloBomba_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ABloqueLadrilloBomba
void ABloqueLadrilloBomba::StaticRegisterNativesABloqueLadrilloBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueLadrilloBomba);
UClass* Z_Construct_UClass_ABloqueLadrilloBomba_NoRegister()
{
	return ABloqueLadrilloBomba::StaticClass();
}
struct Z_Construct_UClass_ABloqueLadrilloBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueLadrilloBomba.h" },
		{ "ModuleRelativePath", "BloqueLadrilloBomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueLadrilloBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueLadrilloBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrilloBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueLadrilloBomba_Statics::ClassParams = {
	&ABloqueLadrilloBomba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueLadrilloBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueLadrilloBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueLadrilloBomba()
{
	if (!Z_Registration_Info_UClass_ABloqueLadrilloBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueLadrilloBomba.OuterSingleton, Z_Construct_UClass_ABloqueLadrilloBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueLadrilloBomba.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ABloqueLadrilloBomba>()
{
	return ABloqueLadrilloBomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueLadrilloBomba);
ABloqueLadrilloBomba::~ABloqueLadrilloBomba() {}
// End Class ABloqueLadrilloBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueLadrilloBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueLadrilloBomba, ABloqueLadrilloBomba::StaticClass, TEXT("ABloqueLadrilloBomba"), &Z_Registration_Info_UClass_ABloqueLadrilloBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueLadrilloBomba), 1099176384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueLadrilloBomba_h_2640817837(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueLadrilloBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueLadrilloBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

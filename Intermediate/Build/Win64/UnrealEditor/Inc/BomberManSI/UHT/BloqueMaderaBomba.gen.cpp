// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/BloqueMaderaBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueMaderaBomba() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloque();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueMaderaBomba();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueMaderaBomba_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ABloqueMaderaBomba
void ABloqueMaderaBomba::StaticRegisterNativesABloqueMaderaBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueMaderaBomba);
UClass* Z_Construct_UClass_ABloqueMaderaBomba_NoRegister()
{
	return ABloqueMaderaBomba::StaticClass();
}
struct Z_Construct_UClass_ABloqueMaderaBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueMaderaBomba.h" },
		{ "ModuleRelativePath", "BloqueMaderaBomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueMaderaBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueMaderaBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMaderaBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueMaderaBomba_Statics::ClassParams = {
	&ABloqueMaderaBomba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueMaderaBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueMaderaBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueMaderaBomba()
{
	if (!Z_Registration_Info_UClass_ABloqueMaderaBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueMaderaBomba.OuterSingleton, Z_Construct_UClass_ABloqueMaderaBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueMaderaBomba.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ABloqueMaderaBomba>()
{
	return ABloqueMaderaBomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueMaderaBomba);
ABloqueMaderaBomba::~ABloqueMaderaBomba() {}
// End Class ABloqueMaderaBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueMaderaBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueMaderaBomba, ABloqueMaderaBomba::StaticClass, TEXT("ABloqueMaderaBomba"), &Z_Registration_Info_UClass_ABloqueMaderaBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueMaderaBomba), 3085704861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueMaderaBomba_h_1673104021(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueMaderaBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueMaderaBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

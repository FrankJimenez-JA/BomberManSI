// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/BloqueAceroBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAceroBomba() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloque();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueAceroBomba();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueAceroBomba_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ABloqueAceroBomba
void ABloqueAceroBomba::StaticRegisterNativesABloqueAceroBomba()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAceroBomba);
UClass* Z_Construct_UClass_ABloqueAceroBomba_NoRegister()
{
	return ABloqueAceroBomba::StaticClass();
}
struct Z_Construct_UClass_ABloqueAceroBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueAceroBomba.h" },
		{ "ModuleRelativePath", "BloqueAceroBomba.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAceroBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAceroBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAceroBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAceroBomba_Statics::ClassParams = {
	&ABloqueAceroBomba::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAceroBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAceroBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAceroBomba()
{
	if (!Z_Registration_Info_UClass_ABloqueAceroBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAceroBomba.OuterSingleton, Z_Construct_UClass_ABloqueAceroBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAceroBomba.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ABloqueAceroBomba>()
{
	return ABloqueAceroBomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAceroBomba);
ABloqueAceroBomba::~ABloqueAceroBomba() {}
// End Class ABloqueAceroBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueAceroBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAceroBomba, ABloqueAceroBomba::StaticClass, TEXT("ABloqueAceroBomba"), &Z_Registration_Info_UClass_ABloqueAceroBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAceroBomba), 1229974158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueAceroBomba_h_4087089248(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueAceroBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueAceroBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

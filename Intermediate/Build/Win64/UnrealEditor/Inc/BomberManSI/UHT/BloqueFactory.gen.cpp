// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/BloqueFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueFactory() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueFactory();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueFactory_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_UIBloqueFactory_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ABloqueFactory
void ABloqueFactory::StaticRegisterNativesABloqueFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueFactory);
UClass* Z_Construct_UClass_ABloqueFactory_NoRegister()
{
	return ABloqueFactory::StaticClass();
}
struct Z_Construct_UClass_ABloqueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueFactory.h" },
		{ "ModuleRelativePath", "BloqueFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseNormal_MetaData[] = {
		{ "Category", "BloqueFactory" },
		{ "ModuleRelativePath", "BloqueFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClaseBomba_MetaData[] = {
		{ "Category", "BloqueFactory" },
		{ "ModuleRelativePath", "BloqueFactory.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseNormal;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClaseBomba;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABloqueFactory_Statics::NewProp_ClaseNormal = { "ClaseNormal", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFactory, ClaseNormal), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseNormal_MetaData), NewProp_ClaseNormal_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABloqueFactory_Statics::NewProp_ClaseBomba = { "ClaseBomba", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloqueFactory, ClaseBomba), Z_Construct_UClass_UClass, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClaseBomba_MetaData), NewProp_ClaseBomba_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloqueFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFactory_Statics::NewProp_ClaseNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloqueFactory_Statics::NewProp_ClaseBomba,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloqueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloqueFactory_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIBloqueFactory_NoRegister, (int32)VTABLE_OFFSET(ABloqueFactory, IIBloqueFactory), false },  // 299789864
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueFactory_Statics::ClassParams = {
	&ABloqueFactory::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloqueFactory_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFactory_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueFactory()
{
	if (!Z_Registration_Info_UClass_ABloqueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueFactory.OuterSingleton, Z_Construct_UClass_ABloqueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueFactory.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ABloqueFactory>()
{
	return ABloqueFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueFactory);
ABloqueFactory::~ABloqueFactory() {}
// End Class ABloqueFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueFactory, ABloqueFactory::StaticClass, TEXT("ABloqueFactory"), &Z_Registration_Info_UClass_ABloqueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueFactory), 1766332147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueFactory_h_2211588448(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

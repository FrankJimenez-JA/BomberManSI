// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/AlertaSonido.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlertaSonido() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_AAlertaSonido();
BOMBERMANSI_API UClass* Z_Construct_UClass_AAlertaSonido_NoRegister();
BOMBERMANSI_API UClass* Z_Construct_UClass_UIAlertaObserver_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class AAlertaSonido
void AAlertaSonido::StaticRegisterNativesAAlertaSonido()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAlertaSonido);
UClass* Z_Construct_UClass_AAlertaSonido_NoRegister()
{
	return AAlertaSonido::StaticClass();
}
struct Z_Construct_UClass_AAlertaSonido_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AlertaSonido.h" },
		{ "ModuleRelativePath", "AlertaSonido.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonidoAlerta10_MetaData[] = {
		{ "Category", "AlertaSonido" },
		{ "ModuleRelativePath", "AlertaSonido.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SonidoAlerta3_MetaData[] = {
		{ "Category", "AlertaSonido" },
		{ "ModuleRelativePath", "AlertaSonido.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SonidoAlerta10;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SonidoAlerta3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAlertaSonido>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAlertaSonido_Statics::NewProp_SonidoAlerta10 = { "SonidoAlerta10", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlertaSonido, SonidoAlerta10), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonidoAlerta10_MetaData), NewProp_SonidoAlerta10_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAlertaSonido_Statics::NewProp_SonidoAlerta3 = { "SonidoAlerta3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAlertaSonido, SonidoAlerta3), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SonidoAlerta3_MetaData), NewProp_SonidoAlerta3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAlertaSonido_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlertaSonido_Statics::NewProp_SonidoAlerta10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAlertaSonido_Statics::NewProp_SonidoAlerta3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlertaSonido_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAlertaSonido_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAlertaSonido_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAlertaSonido_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UIAlertaObserver_NoRegister, (int32)VTABLE_OFFSET(AAlertaSonido, IIAlertaObserver), false },  // 2678820745
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAlertaSonido_Statics::ClassParams = {
	&AAlertaSonido::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAlertaSonido_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAlertaSonido_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAlertaSonido_Statics::Class_MetaDataParams), Z_Construct_UClass_AAlertaSonido_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAlertaSonido()
{
	if (!Z_Registration_Info_UClass_AAlertaSonido.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAlertaSonido.OuterSingleton, Z_Construct_UClass_AAlertaSonido_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAlertaSonido.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<AAlertaSonido>()
{
	return AAlertaSonido::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAlertaSonido);
AAlertaSonido::~AAlertaSonido() {}
// End Class AAlertaSonido

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaSonido_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAlertaSonido, AAlertaSonido::StaticClass, TEXT("AAlertaSonido"), &Z_Registration_Info_UClass_AAlertaSonido, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAlertaSonido), 3014819337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaSonido_h_3902078438(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaSonido_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_AlertaSonido_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

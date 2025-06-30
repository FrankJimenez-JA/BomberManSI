// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/IBloqueFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIBloqueFactory() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_UIBloqueFactory();
BOMBERMANSI_API UClass* Z_Construct_UClass_UIBloqueFactory_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Interface UIBloqueFactory
void UIBloqueFactory::StaticRegisterNativesUIBloqueFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIBloqueFactory);
UClass* Z_Construct_UClass_UIBloqueFactory_NoRegister()
{
	return UIBloqueFactory::StaticClass();
}
struct Z_Construct_UClass_UIBloqueFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IBloqueFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIBloqueFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIBloqueFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIBloqueFactory_Statics::ClassParams = {
	&UIBloqueFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIBloqueFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UIBloqueFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIBloqueFactory()
{
	if (!Z_Registration_Info_UClass_UIBloqueFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIBloqueFactory.OuterSingleton, Z_Construct_UClass_UIBloqueFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIBloqueFactory.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<UIBloqueFactory>()
{
	return UIBloqueFactory::StaticClass();
}
UIBloqueFactory::UIBloqueFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIBloqueFactory);
UIBloqueFactory::~UIBloqueFactory() {}
// End Interface UIBloqueFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIBloqueFactory, UIBloqueFactory::StaticClass, TEXT("UIBloqueFactory"), &Z_Registration_Info_UClass_UIBloqueFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIBloqueFactory), 299789864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_4168668034(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

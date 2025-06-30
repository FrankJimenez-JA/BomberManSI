// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberManSI/BloqueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueManager() {}

// Begin Cross Module References
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueManager();
BOMBERMANSI_API UClass* Z_Construct_UClass_ABloqueManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberManSI();
// End Cross Module References

// Begin Class ABloqueManager
void ABloqueManager::StaticRegisterNativesABloqueManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueManager);
UClass* Z_Construct_UClass_ABloqueManager_NoRegister()
{
	return ABloqueManager::StaticClass();
}
struct Z_Construct_UClass_ABloqueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloqueManager.h" },
		{ "ModuleRelativePath", "BloqueManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberManSI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueManager_Statics::ClassParams = {
	&ABloqueManager::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueManager()
{
	if (!Z_Registration_Info_UClass_ABloqueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueManager.OuterSingleton, Z_Construct_UClass_ABloqueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueManager.OuterSingleton;
}
template<> BOMBERMANSI_API UClass* StaticClass<ABloqueManager>()
{
	return ABloqueManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueManager);
ABloqueManager::~ABloqueManager() {}
// End Class ABloqueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueManager, ABloqueManager::StaticClass, TEXT("ABloqueManager"), &Z_Registration_Info_UClass_ABloqueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueManager), 3230680649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueManager_h_397065747(TEXT("/Script/BomberManSI"),
	Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_BloqueManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

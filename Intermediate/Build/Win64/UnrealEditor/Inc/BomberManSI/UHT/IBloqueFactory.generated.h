// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IBloqueFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMANSI_IBloqueFactory_generated_h
#error "IBloqueFactory.generated.h already included, missing '#pragma once' in IBloqueFactory.h"
#endif
#define BOMBERMANSI_IBloqueFactory_generated_h

#define FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BOMBERMANSI_API UIBloqueFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIBloqueFactory(UIBloqueFactory&&); \
	UIBloqueFactory(const UIBloqueFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BOMBERMANSI_API, UIBloqueFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIBloqueFactory); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIBloqueFactory) \
	BOMBERMANSI_API virtual ~UIBloqueFactory();


#define FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIBloqueFactory(); \
	friend struct Z_Construct_UClass_UIBloqueFactory_Statics; \
public: \
	DECLARE_CLASS(UIBloqueFactory, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BomberManSI"), BOMBERMANSI_API) \
	DECLARE_SERIALIZER(UIBloqueFactory)


#define FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIBloqueFactory() {} \
public: \
	typedef UIBloqueFactory UClassType; \
	typedef IIBloqueFactory ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_10_PROLOG
#define FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMANSI_API UClass* StaticClass<class UIBloqueFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Documentos_Unreal_Projects_BomberManSI_Source_BomberManSI_IBloqueFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

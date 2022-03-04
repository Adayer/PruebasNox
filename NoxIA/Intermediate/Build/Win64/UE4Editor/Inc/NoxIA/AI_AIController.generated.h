// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOXIA_AI_AIController_generated_h
#error "AI_AIController.generated.h already included, missing '#pragma once' in AI_AIController.h"
#endif
#define NOXIA_AI_AIController_generated_h

#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_SPARSE_DATA
#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckForNearbyPlayer); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execUpdateNextWaypoint);


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckForNearbyPlayer); \
	DECLARE_FUNCTION(execMoveToTarget); \
	DECLARE_FUNCTION(execUpdateNextWaypoint);


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAI_AIController(); \
	friend struct Z_Construct_UClass_AAI_AIController_Statics; \
public: \
	DECLARE_CLASS(AAI_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoxIA"), NO_API) \
	DECLARE_SERIALIZER(AAI_AIController)


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAI_AIController(); \
	friend struct Z_Construct_UClass_AAI_AIController_Statics; \
public: \
	DECLARE_CLASS(AAI_AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoxIA"), NO_API) \
	DECLARE_SERIALIZER(AAI_AIController)


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAI_AIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAI_AIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_AIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_AIController(AAI_AIController&&); \
	NO_API AAI_AIController(const AAI_AIController&); \
public:


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAI_AIController(AAI_AIController&&); \
	NO_API AAI_AIController(const AAI_AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAI_AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAI_AIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAI_AIController)


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_PRIVATE_PROPERTY_OFFSET
#define NoxIA_Source_NoxIA_IA_AI_AIController_h_14_PROLOG
#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_PRIVATE_PROPERTY_OFFSET \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_SPARSE_DATA \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_RPC_WRAPPERS \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_INCLASS \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoxIA_Source_NoxIA_IA_AI_AIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_PRIVATE_PROPERTY_OFFSET \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_SPARSE_DATA \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_INCLASS_NO_PURE_DECLS \
	NoxIA_Source_NoxIA_IA_AI_AIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOXIA_API UClass* StaticClass<class AAI_AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoxIA_Source_NoxIA_IA_AI_AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

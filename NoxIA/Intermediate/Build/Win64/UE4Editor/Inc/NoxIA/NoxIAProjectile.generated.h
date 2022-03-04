// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NOXIA_NoxIAProjectile_generated_h
#error "NoxIAProjectile.generated.h already included, missing '#pragma once' in NoxIAProjectile.h"
#endif
#define NOXIA_NoxIAProjectile_generated_h

#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_SPARSE_DATA
#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANoxIAProjectile(); \
	friend struct Z_Construct_UClass_ANoxIAProjectile_Statics; \
public: \
	DECLARE_CLASS(ANoxIAProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoxIA"), NO_API) \
	DECLARE_SERIALIZER(ANoxIAProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANoxIAProjectile(); \
	friend struct Z_Construct_UClass_ANoxIAProjectile_Statics; \
public: \
	DECLARE_CLASS(ANoxIAProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoxIA"), NO_API) \
	DECLARE_SERIALIZER(ANoxIAProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANoxIAProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANoxIAProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoxIAProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoxIAProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoxIAProjectile(ANoxIAProjectile&&); \
	NO_API ANoxIAProjectile(const ANoxIAProjectile&); \
public:


#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoxIAProjectile(ANoxIAProjectile&&); \
	NO_API ANoxIAProjectile(const ANoxIAProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoxIAProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoxIAProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANoxIAProjectile)


#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ANoxIAProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ANoxIAProjectile, ProjectileMovement); }


#define NoxIA_Source_NoxIA_NoxIAProjectile_h_12_PROLOG
#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_SPARSE_DATA \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_RPC_WRAPPERS \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_INCLASS \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoxIA_Source_NoxIA_NoxIAProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_SPARSE_DATA \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_INCLASS_NO_PURE_DECLS \
	NoxIA_Source_NoxIA_NoxIAProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOXIA_API UClass* StaticClass<class ANoxIAProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoxIA_Source_NoxIA_NoxIAProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOXIA_NoxIACharacter_generated_h
#error "NoxIACharacter.generated.h already included, missing '#pragma once' in NoxIACharacter.h"
#endif
#define NOXIA_NoxIACharacter_generated_h

#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_SPARSE_DATA
#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_RPC_WRAPPERS
#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANoxIACharacter(); \
	friend struct Z_Construct_UClass_ANoxIACharacter_Statics; \
public: \
	DECLARE_CLASS(ANoxIACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoxIA"), NO_API) \
	DECLARE_SERIALIZER(ANoxIACharacter)


#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesANoxIACharacter(); \
	friend struct Z_Construct_UClass_ANoxIACharacter_Statics; \
public: \
	DECLARE_CLASS(ANoxIACharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NoxIA"), NO_API) \
	DECLARE_SERIALIZER(ANoxIACharacter)


#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANoxIACharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANoxIACharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoxIACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoxIACharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoxIACharacter(ANoxIACharacter&&); \
	NO_API ANoxIACharacter(const ANoxIACharacter&); \
public:


#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANoxIACharacter(ANoxIACharacter&&); \
	NO_API ANoxIACharacter(const ANoxIACharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANoxIACharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANoxIACharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANoxIACharacter)


#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(ANoxIACharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(ANoxIACharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(ANoxIACharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(ANoxIACharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(ANoxIACharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(ANoxIACharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(ANoxIACharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(ANoxIACharacter, L_MotionController); }


#define NoxIA_Source_NoxIA_NoxIACharacter_h_17_PROLOG
#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_SPARSE_DATA \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_RPC_WRAPPERS \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_INCLASS \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NoxIA_Source_NoxIA_NoxIACharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_SPARSE_DATA \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_INCLASS_NO_PURE_DECLS \
	NoxIA_Source_NoxIA_NoxIACharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOXIA_API UClass* StaticClass<class ANoxIACharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NoxIA_Source_NoxIA_NoxIACharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

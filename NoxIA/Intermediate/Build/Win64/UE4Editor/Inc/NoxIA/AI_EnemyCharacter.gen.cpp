// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoxIA/IA/AI_EnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_EnemyCharacter() {}
// Cross Module References
	NOXIA_API UClass* Z_Construct_UClass_AAI_EnemyCharacter_NoRegister();
	NOXIA_API UClass* Z_Construct_UClass_AAI_EnemyCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NoxIA();
	NOXIA_API UClass* Z_Construct_UClass_AAI_PointOfInterest_NoRegister();
// End Cross Module References
	void AAI_EnemyCharacter::StaticRegisterNativesAAI_EnemyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAI_EnemyCharacter_NoRegister()
	{
		return AAI_EnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAI_EnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_tWaypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tWaypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_tWaypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_EnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_EnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "IA/AI_EnemyCharacter.h" },
		{ "ModuleRelativePath", "IA/AI_EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints_Inner = { "m_tWaypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAI_PointOfInterest_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints_MetaData[] = {
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "IA/AI_EnemyCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints = { "m_tWaypoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_EnemyCharacter, m_tWaypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_EnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_EnemyCharacter_Statics::NewProp_m_tWaypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_EnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_EnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_EnemyCharacter_Statics::ClassParams = {
		&AAI_EnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAI_EnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_EnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_EnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_EnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_EnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_EnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_EnemyCharacter, 2918453914);
	template<> NOXIA_API UClass* StaticClass<AAI_EnemyCharacter>()
	{
		return AAI_EnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_EnemyCharacter(Z_Construct_UClass_AAI_EnemyCharacter, &AAI_EnemyCharacter::StaticClass, TEXT("/Script/NoxIA"), TEXT("AAI_EnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_EnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoxIA/IA/AI_PointOfInterest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_PointOfInterest() {}
// Cross Module References
	NOXIA_API UClass* Z_Construct_UClass_AAI_PointOfInterest_NoRegister();
	NOXIA_API UClass* Z_Construct_UClass_AAI_PointOfInterest();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	UPackage* Z_Construct_UPackage__Script_NoxIA();
// End Cross Module References
	void AAI_PointOfInterest::StaticRegisterNativesAAI_PointOfInterest()
	{
	}
	UClass* Z_Construct_UClass_AAI_PointOfInterest_NoRegister()
	{
		return AAI_PointOfInterest::StaticClass();
	}
	struct Z_Construct_UClass_AAI_PointOfInterest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_PointOfInterest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATargetPoint,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_PointOfInterest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA/AI_PointOfInterest.h" },
		{ "ModuleRelativePath", "IA/AI_PointOfInterest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_PointOfInterest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_PointOfInterest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_PointOfInterest_Statics::ClassParams = {
		&AAI_PointOfInterest::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAI_PointOfInterest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_PointOfInterest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_PointOfInterest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_PointOfInterest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_PointOfInterest, 4226784850);
	template<> NOXIA_API UClass* StaticClass<AAI_PointOfInterest>()
	{
		return AAI_PointOfInterest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_PointOfInterest(Z_Construct_UClass_AAI_PointOfInterest, &AAI_PointOfInterest::StaticClass, TEXT("/Script/NoxIA"), TEXT("AAI_PointOfInterest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_PointOfInterest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

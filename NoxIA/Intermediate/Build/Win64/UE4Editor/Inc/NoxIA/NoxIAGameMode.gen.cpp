// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoxIA/NoxIAGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoxIAGameMode() {}
// Cross Module References
	NOXIA_API UClass* Z_Construct_UClass_ANoxIAGameMode_NoRegister();
	NOXIA_API UClass* Z_Construct_UClass_ANoxIAGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NoxIA();
// End Cross Module References
	void ANoxIAGameMode::StaticRegisterNativesANoxIAGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANoxIAGameMode_NoRegister()
	{
		return ANoxIAGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANoxIAGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoxIAGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoxIAGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NoxIAGameMode.h" },
		{ "ModuleRelativePath", "NoxIAGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoxIAGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoxIAGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANoxIAGameMode_Statics::ClassParams = {
		&ANoxIAGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANoxIAGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoxIAGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoxIAGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANoxIAGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANoxIAGameMode, 1516908276);
	template<> NOXIA_API UClass* StaticClass<ANoxIAGameMode>()
	{
		return ANoxIAGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANoxIAGameMode(Z_Construct_UClass_ANoxIAGameMode, &ANoxIAGameMode::StaticClass, TEXT("/Script/NoxIA"), TEXT("ANoxIAGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoxIAGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

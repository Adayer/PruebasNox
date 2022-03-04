// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoxIA/NoxIAHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoxIAHUD() {}
// Cross Module References
	NOXIA_API UClass* Z_Construct_UClass_ANoxIAHUD_NoRegister();
	NOXIA_API UClass* Z_Construct_UClass_ANoxIAHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_NoxIA();
// End Cross Module References
	void ANoxIAHUD::StaticRegisterNativesANoxIAHUD()
	{
	}
	UClass* Z_Construct_UClass_ANoxIAHUD_NoRegister()
	{
		return ANoxIAHUD::StaticClass();
	}
	struct Z_Construct_UClass_ANoxIAHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoxIAHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoxIAHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NoxIAHUD.h" },
		{ "ModuleRelativePath", "NoxIAHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoxIAHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoxIAHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANoxIAHUD_Statics::ClassParams = {
		&ANoxIAHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANoxIAHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoxIAHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoxIAHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANoxIAHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANoxIAHUD, 2709971212);
	template<> NOXIA_API UClass* StaticClass<ANoxIAHUD>()
	{
		return ANoxIAHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANoxIAHUD(Z_Construct_UClass_ANoxIAHUD, &ANoxIAHUD::StaticClass, TEXT("/Script/NoxIA"), TEXT("ANoxIAHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoxIAHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoxIA/IA/AI_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_AIController() {}
// Cross Module References
	NOXIA_API UClass* Z_Construct_UClass_AAI_AIController_NoRegister();
	NOXIA_API UClass* Z_Construct_UClass_AAI_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_NoxIA();
// End Cross Module References
	void AAI_AIController::StaticRegisterNativesAAI_AIController()
	{
	}
	UClass* Z_Construct_UClass_AAI_AIController_NoRegister()
	{
		return AAI_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AAI_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IA/AI_AIController.h" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_AIController_Statics::ClassParams = {
		&AAI_AIController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAI_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAI_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAI_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAI_AIController, 2643069236);
	template<> NOXIA_API UClass* StaticClass<AAI_AIController>()
	{
		return AAI_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_AIController(Z_Construct_UClass_AAI_AIController, &AAI_AIController::StaticClass, TEXT("/Script/NoxIA"), TEXT("AAI_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

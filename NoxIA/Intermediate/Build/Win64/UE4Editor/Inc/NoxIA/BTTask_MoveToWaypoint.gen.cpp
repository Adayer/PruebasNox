// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NoxIA/IA/BTTask_MoveToWaypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveToWaypoint() {}
// Cross Module References
	NOXIA_API UClass* Z_Construct_UClass_UBTTask_MoveToWaypoint_NoRegister();
	NOXIA_API UClass* Z_Construct_UClass_UBTTask_MoveToWaypoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_NoxIA();
// End Cross Module References
	void UBTTask_MoveToWaypoint::StaticRegisterNativesUBTTask_MoveToWaypoint()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveToWaypoint_NoRegister()
	{
		return UBTTask_MoveToWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA/BTTask_MoveToWaypoint.h" },
		{ "ModuleRelativePath", "IA/BTTask_MoveToWaypoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveToWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::ClassParams = {
		&UBTTask_MoveToWaypoint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MoveToWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_MoveToWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveToWaypoint, 270194778);
	template<> NOXIA_API UClass* StaticClass<UBTTask_MoveToWaypoint>()
	{
		return UBTTask_MoveToWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveToWaypoint(Z_Construct_UClass_UBTTask_MoveToWaypoint, &UBTTask_MoveToWaypoint::StaticClass, TEXT("/Script/NoxIA"), TEXT("UBTTask_MoveToWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveToWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

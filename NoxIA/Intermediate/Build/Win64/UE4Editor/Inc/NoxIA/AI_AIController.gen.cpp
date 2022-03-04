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
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAI_AIController::execCheckForNearbyPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckForNearbyPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_AIController::execMoveToTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAI_AIController::execUpdateNextWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateNextWaypoint();
		P_NATIVE_END;
	}
	void AAI_AIController::StaticRegisterNativesAAI_AIController()
	{
		UClass* Class = AAI_AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckForNearbyPlayer", &AAI_AIController::execCheckForNearbyPlayer },
			{ "MoveToTarget", &AAI_AIController::execMoveToTarget },
			{ "UpdateNextWaypoint", &AAI_AIController::execUpdateNextWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Senses" },
		{ "Comment", "//UFUNCTION(Category=\"Senses\")\n//\x09void PerceptionUpdated(const TArray<AActor*>& UpdatedActors);\n" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
		{ "ToolTip", "UFUNCTION(Category=\"Senses\")\n       void PerceptionUpdated(const TArray<AActor*>& UpdatedActors);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_AIController, nullptr, "CheckForNearbyPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics
	{
		struct AI_AIController_eventMoveToTarget_Parms
		{
			TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AI_AIController_eventMoveToTarget_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Patrol" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_AIController, nullptr, "MoveToTarget", nullptr, nullptr, sizeof(AI_AIController_eventMoveToTarget_Parms), Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_AIController_MoveToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_AIController_MoveToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Patrol" },
		{ "Comment", "//Returns position of next waypoint and updates\n" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
		{ "ToolTip", "Returns position of next waypoint and updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAI_AIController, nullptr, "UpdateNextWaypoint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAI_AIController_NoRegister()
	{
		return AAI_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AAI_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerceptionCmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceptionCmp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSense_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightSense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bChasingPlayer_MetaData[];
#endif
		static void NewProp_bChasingPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bChasingPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAI_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_NoxIA,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAI_AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAI_AIController_CheckForNearbyPlayer, "CheckForNearbyPlayer" }, // 1940760573
		{ &Z_Construct_UFunction_AAI_AIController_MoveToTarget, "MoveToTarget" }, // 1718544420
		{ &Z_Construct_UFunction_AAI_AIController_UpdateNextWaypoint, "UpdateNextWaypoint" }, // 1331087262
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "IA/AI_AIController.h" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_AIController_Statics::NewProp_PerceptionCmp_MetaData[] = {
		{ "Category", "Senses" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_AIController_Statics::NewProp_PerceptionCmp = { "PerceptionCmp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_AIController, PerceptionCmp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_AIController_Statics::NewProp_PerceptionCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_AIController_Statics::NewProp_PerceptionCmp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_AIController_Statics::NewProp_SightSense_MetaData[] = {
		{ "Category", "Senses" },
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAI_AIController_Statics::NewProp_SightSense = { "SightSense", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAI_AIController, SightSense), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAI_AIController_Statics::NewProp_SightSense_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_AIController_Statics::NewProp_SightSense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer_MetaData[] = {
		{ "ModuleRelativePath", "IA/AI_AIController.h" },
	};
#endif
	void Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer_SetBit(void* Obj)
	{
		((AAI_AIController*)Obj)->bChasingPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer = { "bChasingPlayer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAI_AIController), &Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAI_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_AIController_Statics::NewProp_PerceptionCmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_AIController_Statics::NewProp_SightSense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAI_AIController_Statics::NewProp_bChasingPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAI_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAI_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAI_AIController_Statics::ClassParams = {
		&AAI_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAI_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAI_AIController_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AAI_AIController, 3950690123);
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

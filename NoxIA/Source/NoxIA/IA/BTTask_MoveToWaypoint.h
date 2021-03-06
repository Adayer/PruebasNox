// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_MoveToWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class NOXIA_API UBTTask_MoveToWaypoint : public UBTTaskNode
{
	GENERATED_BODY()

public:
	
	UBTTask_MoveToWaypoint();

	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override {}
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
};

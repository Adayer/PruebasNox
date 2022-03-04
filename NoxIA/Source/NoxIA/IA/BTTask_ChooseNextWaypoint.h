// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ChooseNextWaypoint.generated.h"

/**
 * 
 */
UCLASS()
class NOXIA_API UBTTask_ChooseNextWaypoint : public UBTTaskNode
{
	GENERATED_BODY()
public:
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override {}
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};

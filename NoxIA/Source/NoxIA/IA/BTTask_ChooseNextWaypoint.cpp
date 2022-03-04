// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_ChooseNextWaypoint.h"
#include "AI_AIController.h"

EBTNodeResult::Type UBTTask_ChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAI_AIController* pController = Cast<AAI_AIController>(OwnerComp.GetOwner());

	pController->UpdateNextWaypoint();

	return EBTNodeResult::Succeeded;
}

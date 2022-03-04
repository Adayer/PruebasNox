// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_MoveToWaypoint.h"
#include "AI_AIController.h"

UBTTask_MoveToWaypoint::UBTTask_MoveToWaypoint()
{
	bNotifyTick = true;
}

EBTNodeResult::Type UBTTask_MoveToWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	return EBTNodeResult::InProgress;
}
void UBTTask_MoveToWaypoint::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAI_AIController* pController = Cast<AAI_AIController>(OwnerComp.GetOwner());

	EPathFollowingRequestResult::Type eMoveToActorResult = pController->MoveToTarget();

	if (eMoveToActorResult == EPathFollowingRequestResult::AlreadyAtGoal)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
	}
}
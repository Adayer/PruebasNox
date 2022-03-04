// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_AIController.h"
#include "AI_PointOfInterest.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

void AAI_AIController::UpdateNextWaypoint()
{
	UBlackboardComponent* pBlackboard = BrainComponent->GetBlackboardComponent();

	//Current Index;
	int32 iWaypointIndex = pBlackboard->GetValueAsInt("WaypointIndex");
	//Update Index
	++iWaypointIndex;
	iWaypointIndex = iWaypointIndex % m_tWaypoints.Num();
	
	//Set Index in Blackboard
	pBlackboard->SetValueAsInt("WaypointIndex", iWaypointIndex);

	//Set new targetActor & targetPosition in blackboard
	pBlackboard->SetValueAsObject("TargetActor", m_tWaypoints[iWaypointIndex]);
	FVector vWaypointPosition = m_tWaypoints[iWaypointIndex]->GetActorLocation();
	pBlackboard->SetValueAsVector("TargetPosition", vWaypointPosition);
}
EPathFollowingRequestResult::Type AAI_AIController::MoveToTarget()
{
	UBlackboardComponent* pBlackboard = BrainComponent->GetBlackboardComponent();

	//Current Index;
	AActor* pTarget = Cast<AActor>(pBlackboard->GetValueAsObject("TargetActor"));
	
	EPathFollowingRequestResult::Type MoveToTargetResult = MoveToActor(pTarget);
}
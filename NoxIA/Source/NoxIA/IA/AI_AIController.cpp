// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_AIController.h"
#include "AI_PointOfInterest.h"
#include "AI_EnemyCharacter.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"

AAI_AIController::AAI_AIController()
{
	PerceptionCmp = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	SightSense = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight"));
	PerceptionCmp->ConfigureSense(*SightSense);
	PerceptionCmp->SetDominantSense(SightSense->GetSenseImplementation());

	//PerceptionCmp->OnPerceptionUpdated.AddDynamic(this, &AAI_AIController::PerceptionUpdated);
}

void AAI_AIController::UpdateNextWaypoint()
{
	UBlackboardComponent* pBlackboard = BrainComponent->GetBlackboardComponent();

	//Current Index;
	int32 iWaypointIndex = pBlackboard->GetValueAsInt("WaypointIndex");
	//Update Index
	++iWaypointIndex;
	AAI_EnemyCharacter* pCharacter = Cast<AAI_EnemyCharacter>(GetPawn());
	iWaypointIndex = iWaypointIndex % pCharacter->m_tWaypoints.Num();
	
	//Set Index in Blackboard
	pBlackboard->SetValueAsInt("WaypointIndex", iWaypointIndex);

	//Set new targetActor & targetPosition in blackboard
	pBlackboard->SetValueAsObject("TargetActor", pCharacter->m_tWaypoints[iWaypointIndex]);
	FVector vWaypointPosition = pCharacter->m_tWaypoints[iWaypointIndex]->GetActorLocation();
	pBlackboard->SetValueAsVector("TargetPosition", vWaypointPosition);
}
EPathFollowingRequestResult::Type AAI_AIController::MoveToTarget()
{
	UBlackboardComponent* pBlackboard = BrainComponent->GetBlackboardComponent();

	//Current Index;
	AActor* pTarget = Cast<AActor>(pBlackboard->GetValueAsObject("TargetActor"));
	
	EPathFollowingRequestResult::Type MoveToTargetResult = MoveToActor(pTarget);
	return MoveToTargetResult;
}
//void AAI_AIController::PerceptionUpdated(const TArray<AActor*>& UpdatedActors)
//{
//
//}

void AAI_AIController::CheckForNearbyPlayer()
{
	TArray<AActor*>tPercievedActors;
	PerceptionCmp->GetCurrentlyPerceivedActors(UAISenseConfig_Sight::StaticClass(), tPercievedActors);

	if (tPercievedActors.Num() >= 1)
	{
		UBlackboardComponent* pBlackboard = BrainComponent->GetBlackboardComponent();
		pBlackboard->SetValueAsObject("TargetActorToChase", tPercievedActors[0]);
		if(!bChasingPlayer)
		{
			bChasingPlayer = true;
		}
	}
	else if (tPercievedActors.Num() == 0)
	{
		UBlackboardComponent* pBlackboard = BrainComponent->GetBlackboardComponent();
		pBlackboard->SetValueAsObject("TargetActorToChase", nullptr);
		if (bChasingPlayer)
		{
			StopMovement();
			bChasingPlayer = false;
		}
	}
}
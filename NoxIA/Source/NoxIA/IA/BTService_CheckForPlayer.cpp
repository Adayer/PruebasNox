// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_CheckForPlayer.h"
#include "AI_AIController.h"

void UBTService_CheckForPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	AAI_AIController* pController = Cast<AAI_AIController>(OwnerComp.GetOwner());
	pController->CheckForNearbyPlayer();
	
}
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AI_AIController.generated.h"

class AAI_PointOfInterest;

/**
 * 
 */
UCLASS()
class NOXIA_API AAI_AIController : public AAIController
{
	GENERATED_BODY()

public:
	//Returns position of next waypoint and updates
	UFUNCTION(BlueprintCallable, Category="Patrol")
		void UpdateNextWaypoint();
	UFUNCTION(BlueprintCallable, Category="Patrol")
		EPathFollowingRequestResult::Type MoveToTarget();
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Patrol")
		TArray<AAI_PointOfInterest*> m_tWaypoints;
};

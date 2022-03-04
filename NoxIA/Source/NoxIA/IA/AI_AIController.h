// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "AI_AIController.generated.h"

/**
 * 
 */
UCLASS()
class NOXIA_API AAI_AIController : public AAIController
{
	GENERATED_BODY()

	//Variables
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Senses")
		UAIPerceptionComponent* PerceptionCmp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Senses")
		UAISenseConfig_Sight* SightSense;
	UPROPERTY()
		bool bChasingPlayer = false;

protected:
private:
	//Functions
public:
	
	AAI_AIController();

	//Returns position of next waypoint and updates
	UFUNCTION(BlueprintCallable, Category="Patrol")
		void UpdateNextWaypoint();
	UFUNCTION(BlueprintCallable, Category="Patrol")
		EPathFollowingRequestResult::Type MoveToTarget();
	//UFUNCTION(Category="Senses")
	//	void PerceptionUpdated(const TArray<AActor*>& UpdatedActors);
	UFUNCTION(Category = "Senses")
		void CheckForNearbyPlayer();
protected:
private:
};

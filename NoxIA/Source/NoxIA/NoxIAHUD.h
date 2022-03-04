// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NoxIAHUD.generated.h"

UCLASS()
class ANoxIAHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANoxIAHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


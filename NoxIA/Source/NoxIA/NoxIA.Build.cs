// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NoxIA : ModuleRules
{
	public NoxIA(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Task_2323_26422 : ModuleRules
{
	public Task_2323_26422(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

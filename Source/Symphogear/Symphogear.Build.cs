// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Symphogear : ModuleRules
{
	public Symphogear(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealQuest1 : ModuleRules
{
	public UnrealQuest1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CIE_Project2 : ModuleRules
{
	public CIE_Project2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

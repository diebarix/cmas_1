// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cmas_1 : ModuleRules
{
	public cmas_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

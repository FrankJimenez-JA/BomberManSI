// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberManSI : ModuleRules
{
	public BomberManSI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

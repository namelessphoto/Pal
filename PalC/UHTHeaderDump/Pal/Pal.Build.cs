using UnrealBuildTool;

public class Pal : ModuleRules {
    public Pal(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "CommonGame",
            "CommonInput",
            "CommonUI",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "Flow",
            "Foliage",
            "GameplayCameras",
            "GameplayTags",
            "InputCore",
            "LevelSequence",
            "ModularGameplay",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraAnimNotifies",
            "OnlineSubsystemUtils",
            "PPSkyCreatorPlugin",
            "Paper2D",
            "PhysicsCore",
            "PocketpairUser",
            "ReplicationGraph",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}

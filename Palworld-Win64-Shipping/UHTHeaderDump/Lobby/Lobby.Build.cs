using UnrealBuildTool;

public class Lobby : ModuleRules {
    public Lobby(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreOnline",
            "CoreUObject",
            "Engine",
            "NetCore",
            "OnlineSubsystemUtils",
        });
    }
}

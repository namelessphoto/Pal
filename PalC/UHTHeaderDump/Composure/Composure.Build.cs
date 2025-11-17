using UnrealBuildTool;

public class Composure : ModuleRules {
    public Composure(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MediaAssets",
            "MediaIOCore",
            "MovieScene",
            "MovieSceneTracks",
            "OpenColorIO",
        });
    }
}

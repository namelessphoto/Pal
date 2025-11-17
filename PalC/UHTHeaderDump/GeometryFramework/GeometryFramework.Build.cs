using UnrealBuildTool;

public class GeometryFramework : ModuleRules {
    public GeometryFramework(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InteractiveToolsFramework",
            "PhysicsCore",
        });
    }
}

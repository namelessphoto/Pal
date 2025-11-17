using UnrealBuildTool;

public class MeshModelingTools : ModuleRules {
    public MeshModelingTools(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GeometryFramework",
            "InteractiveToolsFramework",
            "ModelingComponents",
            "ModelingOperators",
        });
    }
}

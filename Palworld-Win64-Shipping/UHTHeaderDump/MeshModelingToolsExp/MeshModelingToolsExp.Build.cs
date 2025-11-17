using UnrealBuildTool;

public class MeshModelingToolsExp : ModuleRules {
    public MeshModelingToolsExp(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "GeometryFramework",
            "InteractiveToolsFramework",
            "MeshModelingTools",
            "ModelingComponents",
            "ModelingOperators",
        });
    }
}

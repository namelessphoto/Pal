using UnrealBuildTool;

public class LiveLinkCamera : ModuleRules {
    public LiveLinkCamera(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CameraCalibrationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "LiveLinkComponents",
        });
    }
}

using UnrealBuildTool;

public class CameraCalibrationCoreMovieScene : ModuleRules {
    public CameraCalibrationCoreMovieScene(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CameraCalibrationCore",
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
        });
    }
}

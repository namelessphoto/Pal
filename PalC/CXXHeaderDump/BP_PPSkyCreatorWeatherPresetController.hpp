#ifndef UE4SS_SDK_BP_PPSkyCreatorWeatherPresetController_HPP
#define UE4SS_SDK_BP_PPSkyCreatorWeatherPresetController_HPP

class ABP_PPSkyCreatorWeatherPresetController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    class APPSkyCreator* SkyCreatorTarget;
    TArray<FS_PPSkyCreatorTimePreset> Weather Presets;
    double Interpolation Duration;
    double Time;
    double Alpha;
    class UPPSkyCreatorWeatherPreset* Preset;
    class UPPSkyCreatorWeatherPreset* next preset;

    void SetBrightness();
    void GetPresets(double Time, class UPPSkyCreatorWeatherPreset*& CurrentPreset, class UPPSkyCreatorWeatherPreset*& NextPreset, double& Alpha, int32& PresetIndex);
    void GetPrePreset(int32 Index, class UPPSkyCreatorWeatherPreset*& Pre);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_PPSkyCreatorWeatherPresetController(int32 EntryPoint);
};

#endif

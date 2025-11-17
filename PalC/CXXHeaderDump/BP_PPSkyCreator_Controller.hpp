#ifndef UE4SS_SDK_BP_PPSkyCreator_Controller_HPP
#define UE4SS_SDK_BP_PPSkyCreator_Controller_HPP

class ABP_PPSkyCreator_Controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* SoundRain;
    class UTextRenderComponent* TextRender;
    class USceneComponent* DefaultSceneRoot;
    class APPSkyCreator* SkyCreatorTarget;
    bool bRealtimeWeatherChange;
    double ChangeIntervalTimeMin;
    double ChangeIntervalTimeMax;
    class UPPSkyCreatorWeatherPreset* StartWeatherPreset;
    double InterpolateDurationTimeMin;
    double InterpolateDurationTimeMax;
    TArray<class UPPSkyCreatorWeatherPreset*> RandomWeatherPresets;
    bool DrawDebugMessages;
    class USoundCue* Rain;
    class UPPSkyCreatorWeatherPreset* NextWeatherPreset;
    FPPSkyCreatorWeatherSettings CurrentWeatherSettings;
    FPPSkyCreatorWeatherSettings NextWeatherSettings;
    double WeatherInterpolateDuration;
    double InterpolateDurationAlpha;
    double CurrentChangeInterval;
    FTimerHandle Timer_WeatherInterpolateDuration;
    FTimerHandle Timer_WeatherChangeInterval;
    bool bEnableRandomWind;
    double CloudWindSpeedMin;
    double CloudWindSpeedMax;
    FPPSkyCreatorWindSettings CurrentWindSettings;
    FPPSkyCreatorWindSettings NextWindSettings;
    double CurrentWindDirection;
    double CurrentWindSpeed;
    double WetnessAccumulateDuration;
    double WetnessDryDuration;
    double PuddlesAccumulateDuration;
    double PuddlesDryDuration;
    double SnowAccumulateDuration;
    double SnowMeltDuration;
    FTimerHandle WetnessAccumulationTimer;
    FTimerHandle WetnessDryTimer;
    FTimerHandle PuddlesAccumulationTimer;
    FTimerHandle PuddlesDryTimer;
    FTimerHandle SnowAccumulationTimer;
    FTimerHandle SnowMeltTimer;
    double CurrentWetnessAmount;
    double NextWetnessAmount;
    double CurrentPuddlesAmount;
    double NextPuddlesAmount;
    double CurrentSnowAmount;
    double NextSnowAmount;
    class USoundBase* Lightnings;

    void SetRainVolume();
    void WeatherMaterialFX_Interpolation();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Start_WeatherInterpolation();
    void Finish_WeatherInterpolation();
    void Start_WeatherChangeInterval();
    void Finish_WeatherChangeInterval();
    void Finish_PuddlesAccumulation();
    void Finish_WetnessAccumulation();
    void Finish_WetnessDry();
    void Finish_PuddlesDry();
    void Start_WetnessAccumulate();
    void Start_WetnessDry();
    void Start_PuddlesAccumulate();
    void Start_PuddlesDry();
    void Start_SnowAccumulate();
    void Start_SnowMelt();
    void Finish_SnowAccumulate();
    void Finish_SnowDry();
    void LightningStrike(FVector LightningPosition);
    void ExecuteUbergraph_BP_PPSkyCreator_Controller(int32 EntryPoint);
};

#endif

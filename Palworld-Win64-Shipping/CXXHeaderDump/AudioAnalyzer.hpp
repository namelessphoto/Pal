#ifndef UE4SS_SDK_AudioAnalyzer_HPP
#define UE4SS_SDK_AudioAnalyzer_HPP

class UAudioAnalyzer : public UObject
{
    class UAudioBus* AudioBus;
    class UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem;

    void StopAnalyzing(const class UObject* WorldContextObject);
    void StartAnalyzing(const class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);
};

class UAudioAnalyzerAssetBase : public UObject
{
};

class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{
    class USoundWave* Sound;
    float DurationInSeconds;

};

class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{
};

class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{
};

class UAudioAnalyzerSubsystem : public UEngineSubsystem
{
    TArray<class UAudioAnalyzer*> AudioAnalyzers;

};

#endif

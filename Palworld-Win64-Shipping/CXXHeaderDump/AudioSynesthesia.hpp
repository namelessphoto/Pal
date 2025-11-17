#ifndef UE4SS_SDK_AudioSynesthesia_HPP
#define UE4SS_SDK_AudioSynesthesia_HPP

#include "AudioSynesthesia_enums.hpp"

struct FLoudnessResults
{
    float Loudness;
    float NormalizedLoudness;
    float PerceptualEnergy;
    float TimeSeconds;

};

struct FMeterResults
{
    float TimeSeconds;
    float MeterValue;
    float PeakValue;
    int32 NumSamplesClipping;
    float ClippingValue;

};

struct FSynesthesiaSpectrumResults
{
    float TimeSeconds;
    TArray<float> SpectrumValues;

};

class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
};

class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
};

class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{
};

class UConstantQNRT : public UAudioSynesthesiaNRT
{
    class UConstantQNRTSettings* Settings;

    void GetNormalizedChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ);
    void GetChannelConstantQAtTime(const float InSeconds, const int32 InChannel, TArray<float>& OutConstantQ);
};

class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
    float StartingFrequency;
    int32 NumBands;
    float NumBandsPerOctave;
    float AnalysisPeriod;
    bool bDownmixToMono;
    EConstantQFFTSizeEnum FFTSize;
    EFFTWindowType WindowType;
    EAudioSpectrumType SpectrumType;
    float BandWidthStretch;
    EConstantQNormalizationEnum CQTNormalization;
    float NoiseFloorDb;

};

class ULoudnessAnalyzer : public UAudioAnalyzer
{
    class ULoudnessSettings* Settings;
    FLoudnessAnalyzerOnOverallLoudnessResults OnOverallLoudnessResults;
    void OnOverallLoudnessResults(const TArray<FLoudnessResults>& OverallLoudnessResults);
    FLoudnessAnalyzerOnPerChannelLoudnessResults OnPerChannelLoudnessResults;
    void OnPerChannelLoudnessResults(int32 ChannelIndex, const TArray<FLoudnessResults>& LoudnessResults);
    FLoudnessAnalyzerOnLatestOverallLoudnessResults OnLatestOverallLoudnessResults;
    void OnLatestOverallLoudnessResults(const FLoudnessResults& LatestOverallLoudnessResults);
    FLoudnessAnalyzerOnLatestPerChannelLoudnessResults OnLatestPerChannelLoudnessResults;
    void OnLatestPerChannelLoudnessResults(int32 ChannelIndex, const FLoudnessResults& LatestLoudnessResults);

};

class ULoudnessNRT : public UAudioSynesthesiaNRT
{
    class ULoudnessNRTSettings* Settings;

    void GetNormalizedLoudnessAtTime(const float InSeconds, float& OutLoudness);
    void GetNormalizedChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness);
    void GetLoudnessAtTime(const float InSeconds, float& OutLoudness);
    void GetChannelLoudnessAtTime(const float InSeconds, const int32 InChannel, float& OutLoudness);
};

class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
    float AnalysisPeriod;
    float MinimumFrequency;
    float MaximumFrequency;
    ELoudnessNRTCurveTypeEnum CurveType;
    float NoiseFloorDb;

};

class ULoudnessSettings : public UAudioSynesthesiaSettings
{
    float AnalysisPeriod;
    float MinimumFrequency;
    float MaximumFrequency;
    ELoudnessCurveTypeEnum CurveType;
    float NoiseFloorDb;
    float ExpectedMaxLoudness;

};

class UMeterAnalyzer : public UAudioAnalyzer
{
    class UMeterSettings* Settings;
    FMeterAnalyzerOnOverallMeterResults OnOverallMeterResults;
    void OnOverallMeterResults(const TArray<FMeterResults>& MeterResults);
    FMeterAnalyzerOnPerChannelMeterResults OnPerChannelMeterResults;
    void OnPerChannelMeterResults(int32 ChannelIndex, const TArray<FMeterResults>& MeterResults);
    FMeterAnalyzerOnLatestOverallMeterResults OnLatestOverallMeterResults;
    void OnLatestOverallMeterResults(const FMeterResults& LatestOverallMeterResults);
    FMeterAnalyzerOnLatestPerChannelMeterResults OnLatestPerChannelMeterResults;
    void OnLatestPerChannelMeterResults(int32 ChannelIndex, const FMeterResults& LatestMeterResults);

};

class UMeterSettings : public UAudioSynesthesiaSettings
{
    float AnalysisPeriod;
    EMeterPeakType PeakMode;
    int32 MeterAttackTime;
    int32 MeterReleaseTime;
    int32 PeakHoldTime;
    float ClippingThreshold;

};

class UOnsetNRT : public UAudioSynesthesiaNRT
{
    class UOnsetNRTSettings* Settings;

    void GetNormalizedChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
    void GetChannelOnsetsBetweenTimes(const float InStartSeconds, const float InEndSeconds, const int32 InChannel, TArray<float>& OutOnsetTimestamps, TArray<float>& OutOnsetStrengths);
};

class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
    bool bDownmixToMono;
    float GranularityInSeconds;
    float Sensitivity;
    float MinimumFrequency;
    float MaximumFrequency;

};

class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{
    float AnalysisPeriod;
    EFFTSize FFTSize;
    EAudioSpectrumType SpectrumType;
    EFFTWindowType WindowType;
    bool bDownmixToMono;

};

class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{
    class USynesthesiaSpectrumAnalysisSettings* Settings;
    FSynesthesiaSpectrumAnalyzerOnSpectrumResults OnSpectrumResults;
    void OnSpectrumResults(int32 ChannelIndex, const TArray<FSynesthesiaSpectrumResults>& SpectrumResults);
    FSynesthesiaSpectrumAnalyzerOnLatestSpectrumResults OnLatestSpectrumResults;
    void OnLatestSpectrumResults(int32 ChannelIndex, const FSynesthesiaSpectrumResults& LatestSpectrumResults);

    int32 GetNumCenterFrequencies();
    void GetCenterFrequencies(const float InSampleRate, TArray<float>& OutCenterFrequencies);
};

#endif

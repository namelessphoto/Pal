#ifndef UE4SS_SDK_WaveTable_HPP
#define UE4SS_SDK_WaveTable_HPP

#include "WaveTable_enums.hpp"

struct FWaveTableBankEntry
{
    FWaveTableTransform Transform;

};

struct FWaveTableSettings
{
    FFilePath FilePath;
    int32 ChannelIndex;
    float Phase;
    float Top;
    float Tail;
    float FadeIn;
    float FadeOut;
    bool bNormalize;
    bool bRemoveOffset;
    TArray<float> SourcePCMData;

};

struct FWaveTableTransform
{
    EWaveTableCurve Curve;
    float Scalar;
    FRichCurve CurveCustom;
    class UCurveFloat* CurveShared;
    TArray<float> WaveTable;

};

class UWaveTableBank : public UObject
{
    EWaveTableResolution Resolution;
    bool bBipolar;
    TArray<FWaveTableBankEntry> Entries;

};

#endif

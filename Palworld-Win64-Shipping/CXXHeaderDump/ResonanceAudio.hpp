#ifndef UE4SS_SDK_ResonanceAudio_HPP
#define UE4SS_SDK_ResonanceAudio_HPP

#include "ResonanceAudio_enums.hpp"

struct FResonanceAudioReverbPluginSettings
{
    bool bEnableRoomEffects;
    bool bGetTransformFromAudioVolume;
    FVector RoomPosition;
    FQuat RoomRotation;
    FVector RoomDimensions;
    ERaMaterialName LeftWallMaterial;
    ERaMaterialName RightWallMaterial;
    ERaMaterialName FloorMaterial;
    ERaMaterialName CeilingMaterial;
    ERaMaterialName FrontWallMaterial;
    ERaMaterialName BackWallMaterial;
    float ReflectionScalar;
    float ReverbGain;
    float ReverbTimeModifier;
    float ReverbBrightness;

};

class AResonanceAudioDirectivityVisualizer : public AActor
{
    class UMaterial* Material;
    class UResonanceAudioSpatializationSourceSettings* Settings;

};

class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
    class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
};

class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
    FResonanceAudioReverbPluginSettings Settings;

    void SetRoomRotation(const FQuat& InRotation);
    void SetRoomPosition(const FVector& InPosition);
    void SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials);
    void SetRoomDimensions(const FVector& InDimensions);
    void SetReverbTimeModifier(float InReverbTimeModifier);
    void SetReverbGain(float InReverbGain);
    void SetReverbBrightness(float InReverbBrightness);
    void SetReflectionScalar(float InReflectionScalar);
    void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

class UResonanceAudioSettings : public UObject
{
    FSoftObjectPath OutputSubmix;
    ERaQualityMode QualityMode;
    FSoftObjectPath GlobalReverbPreset;
    FSoftObjectPath GlobalSourcePreset;

};

class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
    EResonanceRenderMode RenderMode;

};

class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
    ERaSpatializationMethod SpatializationMethod;
    float Pattern;
    float Sharpness;
    bool bToggleVisualization;
    float Scale;
    float Spread;
    ERaDistanceRolloffModel Rolloff;
    float minDistance;
    float MaxDistance;

    void SetSoundSourceSpread(float InSpread);
    void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};

#endif

#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

#include "AudioExtensions_enums.hpp"

struct FAudioParameter
{
    FName ParamName;
    float FloatParam;
    bool BoolParam;
    int32 IntParam;
    class UObject* ObjectParam;
    FString StringParam;
    TArray<float> ArrayFloatParam;
    TArray<bool> ArrayBoolParam;
    TArray<int32> ArrayIntParam;
    TArray<class UObject*> ArrayObjectParam;
    TArray<FString> ArrayStringParam;
    EAudioParameterType ParamType;
    FName TypeName;

};

class IAudioParameterControllerInterface : public IInterface
{

    void SetTriggerParameter(FName InName);
    void SetStringParameter(FName InName, FString InValue);
    void SetStringArrayParameter(FName InName, const TArray<FString>& InValue);
    void SetParameters_Blueprint(const TArray<FAudioParameter>& InParameters);
    void SetObjectParameter(FName InName, class UObject* InValue);
    void SetObjectArrayParameter(FName InName, const TArray<class UObject*>& InValue);
    void SetIntParameter(FName InName, int32 inInt);
    void SetIntArrayParameter(FName InName, const TArray<int32>& InValue);
    void SetFloatParameter(FName InName, float InFloat);
    void SetFloatArrayParameter(FName InName, const TArray<float>& InValue);
    void SetBoolParameter(FName InName, bool InBool);
    void SetBoolArrayParameter(FName InName, const TArray<bool>& InValue);
    void ResetParameters();
};

class UAudioCodecEncoderSettings : public UObject
{
    int32 Version;

};

class UAudioEndpointSettingsBase : public UObject
{
};

class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
    EPcmBitDepthConversion BitDepthConversion;

};

class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
};

class UOcclusionPluginSourceSettingsBase : public UObject
{
};

class UReverbPluginSourceSettingsBase : public UObject
{
};

class USoundModulatorBase : public UObject
{
};

class USoundfieldEffectBase : public UObject
{
    class USoundfieldEffectSettingsBase* Settings;

};

class USoundfieldEffectSettingsBase : public UObject
{
};

class USoundfieldEncodingSettingsBase : public UObject
{
};

class USoundfieldEndpointSettingsBase : public UObject
{
};

class USourceDataOverridePluginSourceSettingsBase : public UObject
{
};

class USpatializationPluginSourceSettingsBase : public UObject
{
};

class UWaveformTransformationBase : public UObject
{
};

class UWaveformTransformationChain : public UObject
{
    TArray<class UWaveformTransformationBase*> Transformations;

};

#endif

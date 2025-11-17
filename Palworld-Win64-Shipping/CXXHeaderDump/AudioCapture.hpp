#ifndef UE4SS_SDK_AudioCapture_HPP
#define UE4SS_SDK_AudioCapture_HPP

struct FAudioCaptureDeviceInfo
{
    FName DeviceName;
    int32 NumInputChannels;
    int32 SampleRate;

};

struct FAudioInputDeviceInfo
{
    FString DeviceName;
    FString DeviceID;
    int32 InputChannels;
    int32 PreferredSampleRate;
    uint8 bSupportsHardwareAEC;

};

class UAudioCapture : public UAudioGenerator
{

    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
};

class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void GetAvailableAudioInputDevices(const class UObject* WorldContextObject, const FGetAvailableAudioInputDevicesOnObtainDevicesEvent& OnObtainDevicesEvent);
    FString Conv_AudioInputDeviceInfoToString(const FAudioInputDeviceInfo& Info);
};

class UAudioCaptureComponent : public USynthComponent
{
    int32 JitterLatencyFrames;

};

class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UAudioCapture* CreateAudioCapture();
};

#endif

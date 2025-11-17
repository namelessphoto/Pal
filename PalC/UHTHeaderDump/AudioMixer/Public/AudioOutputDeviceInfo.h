#pragma once
#include "CoreMinimal.h"
#include "EAudioMixerChannelType.h"
#include "EAudioMixerStreamDataFormatType.h"
#include "AudioOutputDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FAudioOutputDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Name;
    
    UPROPERTY(BlueprintReadOnly)
    FString DeviceID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 NumChannels;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadOnly)
    EAudioMixerStreamDataFormatType Format;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<EAudioMixerChannelType> OutputChannelArray;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsSystemDefault: 1;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bIsCurrentDevice: 1;
    
    FAudioOutputDeviceInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "AudioInputDeviceInfo.generated.h"

USTRUCT(BlueprintType)
struct AUDIOCAPTURE_API FAudioInputDeviceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString DeviceName;
    
    UPROPERTY(BlueprintReadOnly)
    FString DeviceID;
    
    UPROPERTY(BlueprintReadOnly)
    int32 InputChannels;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PreferredSampleRate;
    
    UPROPERTY(BlueprintReadOnly)
    uint8 bSupportsHardwareAEC: 1;
    
    FAudioInputDeviceInfo();
};


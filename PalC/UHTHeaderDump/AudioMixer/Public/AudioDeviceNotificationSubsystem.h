#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "OnAudioDefaultDeviceChangedDelegate.h"
#include "OnAudioDeviceChangeDelegate.h"
#include "OnAudioDeviceStateChangedDelegate.h"
#include "AudioDeviceNotificationSubsystem.generated.h"

UCLASS()
class AUDIOMIXER_API UAudioDeviceNotificationSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnAudioDefaultDeviceChanged DefaultCaptureDeviceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioDefaultDeviceChanged DefaultRenderDeviceChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioDeviceChange DeviceAdded;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioDeviceChange DeviceRemoved;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioDeviceStateChanged DeviceStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnAudioDeviceChange DeviceSwitched;
    
    UAudioDeviceNotificationSubsystem();

};


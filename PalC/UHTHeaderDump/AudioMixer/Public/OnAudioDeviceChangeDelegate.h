#pragma once
#include "CoreMinimal.h"
#include "OnAudioDeviceChangeDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAudioDeviceChange, const FString&, DeviceID);


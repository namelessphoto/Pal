#pragma once
#include "CoreMinimal.h"
#include "SwapAudioOutputResult.h"
#include "OnCompletedDeviceSwapDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCompletedDeviceSwap, const FSwapAudioOutputResult&, SwapResult);


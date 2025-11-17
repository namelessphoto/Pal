#pragma once
#include "CoreMinimal.h"
#include "ESwapAudioOutputDeviceResultState.h"
#include "SwapAudioOutputResult.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSwapAudioOutputResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString CurrentDeviceId;
    
    UPROPERTY(BlueprintReadOnly)
    FString RequestedDeviceId;
    
    UPROPERTY(BlueprintReadOnly)
    ESwapAudioOutputDeviceResultState Result;
    
    FSwapAudioOutputResult();
};


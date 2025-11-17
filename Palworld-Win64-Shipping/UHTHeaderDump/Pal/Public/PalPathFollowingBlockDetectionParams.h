#pragma once
#include "CoreMinimal.h"
#include "PalPathFollowingBlockDetectionParams.generated.h"

USTRUCT(BlueprintType)
struct FPalPathFollowingBlockDetectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float BlockDetectionDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float BlockDetectionInterval;
    
    UPROPERTY(EditDefaultsOnly)
    int32 BlockDetectionSampleCount;
    
    PAL_API FPalPathFollowingBlockDetectionParams();
};


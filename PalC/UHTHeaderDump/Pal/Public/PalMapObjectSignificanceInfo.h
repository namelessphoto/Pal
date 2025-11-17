#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSignificanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSignificanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DistanceInRangeFromPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float TickInterval;
    
    UPROPERTY(EditDefaultsOnly)
    bool bBuildObjectVisible;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInvalidTickForSkeletalMeshComponent;
    
    PAL_API FPalMapObjectSignificanceInfo();
};


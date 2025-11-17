#pragma once
#include "CoreMinimal.h"
#include "PalFishingSpotSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingSpotSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float RespawnTimeElapsed;
    
    UPROPERTY()
    float RespawnTimeFinish;
    
    UPROPERTY()
    int32 CurrentFishCount;
    
    PAL_API FPalFishingSpotSaveData();
};


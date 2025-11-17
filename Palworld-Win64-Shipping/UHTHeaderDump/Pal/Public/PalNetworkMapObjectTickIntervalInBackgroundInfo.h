#pragma once
#include "CoreMinimal.h"
#include "PalNetworkMapObjectTickIntervalInBackgroundInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalNetworkMapObjectTickIntervalInBackgroundInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TickInterval;
    
    UPROPERTY()
    int32 Count;
    
    PAL_API FPalNetworkMapObjectTickIntervalInBackgroundInfo();
};


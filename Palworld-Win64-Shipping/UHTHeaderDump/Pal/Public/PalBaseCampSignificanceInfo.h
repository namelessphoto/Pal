#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampSignificanceInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSignificanceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DistanceInRangeFromPlayer;
    
    UPROPERTY(EditDefaultsOnly)
    float TickInterval;
    
    UPROPERTY(EditDefaultsOnly)
    bool bMergeDropItems;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateSimple;
    
    PAL_API FPalBaseCampSignificanceInfo();
};


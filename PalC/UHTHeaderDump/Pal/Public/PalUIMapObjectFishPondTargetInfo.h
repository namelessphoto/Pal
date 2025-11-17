#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectFishPondTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectFishPondTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName TargetLotteryName;
    
    UPROPERTY(BlueprintReadOnly)
    float RequiredWorkAmount;
    
    PAL_API FPalUIMapObjectFishPondTargetInfo();
};


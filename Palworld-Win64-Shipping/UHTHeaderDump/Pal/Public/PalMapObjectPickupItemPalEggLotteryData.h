#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectPickupItemPalEggData.h"
#include "PalMapObjectPickupItemPalEggLotteryData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectPickupItemPalEggLotteryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPalMapObjectPickupItemPalEggData PalEggData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Weight;
    
    PAL_API FPalMapObjectPickupItemPalEggLotteryData();
};


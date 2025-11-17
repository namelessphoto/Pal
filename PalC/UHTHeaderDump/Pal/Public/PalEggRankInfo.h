#pragma once
#include "CoreMinimal.h"
#include "PalEggRankInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalEggRankInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 PalRarity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float EggScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HatchingSpeedDivisionRate;
    
    PAL_API FPalEggRankInfo();
};


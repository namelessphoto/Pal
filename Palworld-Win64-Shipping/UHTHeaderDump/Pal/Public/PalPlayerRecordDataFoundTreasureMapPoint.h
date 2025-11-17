#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordDataFoundTreasureMapPoint.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataFoundTreasureMapPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Rarity;
    
    PAL_API FPalPlayerRecordDataFoundTreasureMapPoint();
};


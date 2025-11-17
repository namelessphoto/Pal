#pragma once
#include "CoreMinimal.h"
#include "PalPlayerSaveDataRecordDataFoundTreasureMapPoint.generated.h"

USTRUCT()
struct FPalPlayerSaveDataRecordDataFoundTreasureMapPoint {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Rarity;
    
    PAL_API FPalPlayerSaveDataRecordDataFoundTreasureMapPoint();
};


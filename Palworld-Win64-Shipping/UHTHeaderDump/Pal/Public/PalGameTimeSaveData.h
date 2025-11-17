#pragma once
#include "CoreMinimal.h"
#include "PalGameTimeSaveData.generated.h"

USTRUCT()
struct FPalGameTimeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int64 GameDateTimeTicks;
    
    UPROPERTY()
    int64 RealDateTimeTicks;
    
    PAL_API FPalGameTimeSaveData();
};


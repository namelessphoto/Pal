#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalOilrigSaveStatus.h"
#include "PalOilrigSaveData.generated.h"

USTRUCT()
struct FPalOilrigSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<EPalOilrigType, FPalOilrigSaveStatus> OilrigMap;
    
    PAL_API FPalOilrigSaveData();
};


#pragma once
#include "CoreMinimal.h"
#include "PalEnemyCampStatus.h"
#include "PalEnemyCampSaveData.generated.h"

USTRUCT()
struct FPalEnemyCampSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FPalEnemyCampStatus> EnemyCampStatusMap;
    
    PAL_API FPalEnemyCampSaveData();
};


#pragma once
#include "CoreMinimal.h"
#include "PalDimensionStorageControlData.generated.h"

class UPalDimensionLockerTimeoutTimer;

USTRUCT(BlueprintType)
struct FPalDimensionStorageControlData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ControllingPage;
    
    UPROPERTY()
    UPalDimensionLockerTimeoutTimer* TimeoutTimer;
    
    PAL_API FPalDimensionStorageControlData();
};


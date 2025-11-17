#pragma once
#include "CoreMinimal.h"
#include "PalBuilderRotateOrderInfo.generated.h"

USTRUCT()
struct FPalBuilderRotateOrderInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 YCount;
    
    UPROPERTY()
    int32 SnapYCount;
    
    UPROPERTY()
    int32 NeighborYCount;
    
    PAL_API FPalBuilderRotateOrderInfo();
};


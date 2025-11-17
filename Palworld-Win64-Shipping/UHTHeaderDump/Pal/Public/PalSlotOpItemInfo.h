#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalSlotOpItemInfo.generated.h"

USTRUCT()
struct FPalSlotOpItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemAndNum Item;
    
    UPROPERTY()
    float CorruptionProgressValue;
    
    PAL_API FPalSlotOpItemInfo();
};


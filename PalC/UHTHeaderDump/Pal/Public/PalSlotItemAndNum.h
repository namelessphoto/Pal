#pragma once
#include "CoreMinimal.h"
#include "PalItemAndSlot.h"
#include "PalSlotItemAndNum.generated.h"

USTRUCT()
struct FPalSlotItemAndNum {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemAndSlot itemSlot;
    
    UPROPERTY()
    int32 Num;
    
    PAL_API FPalSlotItemAndNum();
};


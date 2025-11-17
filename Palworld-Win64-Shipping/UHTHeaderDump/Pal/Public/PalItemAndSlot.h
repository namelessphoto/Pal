#pragma once
#include "CoreMinimal.h"
#include "PalItemId.h"
#include "PalItemSlotId.h"
#include "PalItemAndSlot.generated.h"

USTRUCT()
struct FPalItemAndSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemId ItemId;
    
    UPROPERTY()
    int32 Num;
    
    UPROPERTY()
    FPalItemSlotId SlotId;
    
    PAL_API FPalItemAndSlot();
};


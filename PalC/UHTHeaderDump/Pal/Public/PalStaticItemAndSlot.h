#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalStaticItemIdAndNum.h"
#include "PalStaticItemAndSlot.generated.h"

USTRUCT()
struct FPalStaticItemAndSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalStaticItemIdAndNum ItemInfo;
    
    UPROPERTY()
    FPalItemSlotId SlotId;
    
    PAL_API FPalStaticItemAndSlot();
};


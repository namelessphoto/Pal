#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalItemId.h"
#include "PalItemSlotSaveData.generated.h"

USTRUCT()
struct FPalItemSlotSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlotIndex;
    
    UPROPERTY()
    FPalItemId ItemId;
    
    UPROPERTY()
    int32 StackCount;
    
    PAL_API FPalItemSlotSaveData();
};


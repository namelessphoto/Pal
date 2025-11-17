#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalCharacterSlotSaveData.generated.h"

USTRUCT()
struct FPalCharacterSlotSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlotIndex;
    
    PAL_API FPalCharacterSlotSaveData();
};


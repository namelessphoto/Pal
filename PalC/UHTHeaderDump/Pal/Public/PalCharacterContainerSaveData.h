#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalCharacterSlotSaveData.h"
#include "PalCharacterContainerSaveData.generated.h"

USTRUCT()
struct FPalCharacterContainerSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bReferenceSlot;
    
    UPROPERTY()
    TArray<FPalCharacterSlotSaveData> Slots;
    
    UPROPERTY()
    int32 SlotNum;
    
    PAL_API FPalCharacterContainerSaveData();
};


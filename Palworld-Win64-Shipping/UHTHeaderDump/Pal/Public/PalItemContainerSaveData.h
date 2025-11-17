#pragma once
#include "CoreMinimal.h"
#include "PalBinaryMemory.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemSlotSaveData.h"
#include "PalItemContainerSaveData.generated.h"

USTRUCT()
struct FPalItemContainerSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemContainerBelongInfo BelongInfo;
    
    UPROPERTY()
    TArray<FPalItemSlotSaveData> Slots;
    
    UPROPERTY()
    int32 SlotNum;
    
    PAL_API FPalItemContainerSaveData();
};


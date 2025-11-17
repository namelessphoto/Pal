#pragma once
#include "CoreMinimal.h"
#include "PalItemAndSlot.h"
#include "PalStaticItemIdAndDynamicItemDataSet.h"
#include "PalItemAndSlotUpdateContentSet.generated.h"

USTRUCT()
struct FPalItemAndSlotUpdateContentSet {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FPalItemAndSlot> UpdateContents;
    
    UPROPERTY()
    TArray<FPalStaticItemIdAndDynamicItemDataSet> UpdateDynamicItems;
    
    PAL_API FPalItemAndSlotUpdateContentSet();
};


#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalDynamicItemInfo.generated.h"

class UPalDynamicItemDataBase;

USTRUCT(BlueprintType)
struct FPalDynamicItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalItemSlotId SlotId;
    
    UPROPERTY()
    UPalDynamicItemDataBase* DynamicItemData;
    
    PAL_API FPalDynamicItemInfo();
};


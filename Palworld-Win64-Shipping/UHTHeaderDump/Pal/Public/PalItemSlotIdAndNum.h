#pragma once
#include "CoreMinimal.h"
#include "PalItemSlotId.h"
#include "PalItemSlotIdAndNum.generated.h"

USTRUCT(BlueprintType)
struct FPalItemSlotIdAndNum {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPalItemSlotId SlotId;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    int32 Num;
    
    PAL_API FPalItemSlotIdAndNum();
};


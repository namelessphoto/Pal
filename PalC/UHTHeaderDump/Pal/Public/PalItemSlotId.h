#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalItemSlotId.generated.h"

USTRUCT(BlueprintType)
struct FPalItemSlotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite)
    int32 SlotIndex;
    
    PAL_API FPalItemSlotId();
};


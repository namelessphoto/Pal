#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalCharacterSlotId.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterSlotId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SlotIndex;
    
    PAL_API FPalCharacterSlotId();
};


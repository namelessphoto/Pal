#pragma once
#include "CoreMinimal.h"
#include "PalCharacterSlotId.h"
#include "PalInstanceID.h"
#include "PalCharacterContainerSlotInfo.generated.h"

USTRUCT()
struct FPalCharacterContainerSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalInstanceID IndividualId;
    
    UPROPERTY()
    FPalCharacterSlotId SlotId;
    
    PAL_API FPalCharacterContainerSlotInfo();
};


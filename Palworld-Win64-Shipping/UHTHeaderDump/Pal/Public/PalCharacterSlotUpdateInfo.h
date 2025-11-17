#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalCharacterSlotUpdateInfo.generated.h"

USTRUCT()
struct FPalCharacterSlotUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalContainerId ContainerId;
    
    UPROPERTY()
    int32 SlotIndex;
    
    UPROPERTY()
    FPalInstanceID InstanceId;
    
    PAL_API FPalCharacterSlotUpdateInfo();
};


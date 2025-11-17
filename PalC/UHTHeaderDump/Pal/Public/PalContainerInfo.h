#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalContainerInfo.generated.h"

USTRUCT()
struct FPalContainerInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPalContainerId ContainerId;
    
    UPROPERTY()
    int32 SlotNum;
    
    PAL_API FPalContainerInfo();
};


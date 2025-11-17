#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalDynamicItemId.h"
#include "PalInstanceID.h"
#include "PalFixupParameterForSaveData.generated.h"

USTRUCT()
struct FPalFixupParameterForSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TSet<FPalInstanceID> UsedInstanceIDs;
    
    UPROPERTY()
    TSet<FPalContainerId> UsedContainerIDs;
    
    UPROPERTY()
    TSet<FPalDynamicItemId> UsedDynamicItemIDs;
    
    PAL_API FPalFixupParameterForSaveData();
};


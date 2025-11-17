#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectWorkerAvailableFacilityType.h"
#include "PalBaseCampFacilityCountPair.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampFacilityCountPair {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalMapObjectWorkerAvailableFacilityType FacilityType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 FacilityCount;
    
    PAL_API FPalBaseCampFacilityCountPair();
};


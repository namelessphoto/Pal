#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampFacilityUsageState.h"
#include "PalInstanceID.h"
#include "PalBaseCampFacilityUsageInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampFacilityUsageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalBaseCampFacilityUsageState State;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalInstanceID ReservedIndividualId;
    
    PAL_API FPalBaseCampFacilityUsageInfo();
};


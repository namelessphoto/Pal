#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalWorkSuitabilityInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSuitabilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EPalWorkSuitability WorkSuitability;
    
    UPROPERTY(BlueprintReadOnly)
    int32 Rank;
    
    PAL_API FPalWorkSuitabilityInfo();
};


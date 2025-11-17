#pragma once
#include "CoreMinimal.h"
#include "EPalSupportedPlatformType.h"
#include "PalOptionWorldSettinThresholds.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionWorldSettinThresholds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSupportedPlatformType, int32> BaseCampMaxNumInGuild;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSupportedPlatformType, int32> BaseCampWorkerMaxNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<EPalSupportedPlatformType, int32> MaxBuildingLimitNum;
    
    PAL_API FPalOptionWorldSettinThresholds();
};


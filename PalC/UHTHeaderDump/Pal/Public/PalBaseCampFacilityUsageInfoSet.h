#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalBaseCampFacilityUsageInfo.h"
#include "PalBaseCampFacilityUsageInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampFacilityUsageInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalBaseCampFacilityUsageInfo> InfoMap;
    
    PAL_API FPalBaseCampFacilityUsageInfoSet();
};


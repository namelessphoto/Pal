#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalTreasureMapPointData.h"
#include "PalTreasureMapPointDataLotteryResult.generated.h"

USTRUCT()
struct FPalTreasureMapPointDataLotteryResult {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid PointId;
    
    UPROPERTY()
    FPalTreasureMapPointData PointData;
    
    UPROPERTY()
    bool bFoundAllPoint;
    
    PAL_API FPalTreasureMapPointDataLotteryResult();
};


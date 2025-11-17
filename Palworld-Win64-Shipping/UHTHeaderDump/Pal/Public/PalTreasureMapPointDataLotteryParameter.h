#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalTreasureMapPointDataLotteryParameter.generated.h"

USTRUCT()
struct FPalTreasureMapPointDataLotteryParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> IgnorePointIds;
    
    PAL_API FPalTreasureMapPointDataLotteryParameter();
};


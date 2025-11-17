#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalSupplyInfo.h"
#include "PalSupplySaveData.generated.h"

USTRUCT()
struct FPalSupplySaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid LastSupplyGuid;
    
    UPROPERTY()
    FDateTime LastSupplyTime;
    
    UPROPERTY()
    FDateTime LastLotteryTime;
    
    UPROPERTY()
    TMap<FGuid, FPalSupplyInfo> SupplyInfos;
    
    PAL_API FPalSupplySaveData();
};


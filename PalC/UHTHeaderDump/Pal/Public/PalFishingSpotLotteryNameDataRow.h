#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFishingSpotLotteryNameDataRow.generated.h"

USTRUCT(BlueprintType)
struct FPalFishingSpotLotteryNameDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float RespawnTime;
    
    PAL_API FPalFishingSpotLotteryNameDataRow();
};


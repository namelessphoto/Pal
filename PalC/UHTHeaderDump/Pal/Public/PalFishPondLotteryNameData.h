#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalFishPondLotteryNameData.generated.h"

USTRUCT(BlueprintType)
struct FPalFishPondLotteryNameData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName TextId;
    
    PAL_API FPalFishPondLotteryNameData();
};


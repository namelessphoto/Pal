#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalFarmSkillFruitsLotteryItemType.h"
#include "PalMapObjectFarmSkillFruitsLotteryRow.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFarmSkillFruitsLotteryRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalFarmSkillFruitsLotteryItemType LotteryItemType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName OtherItemId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Weight;
    
    PAL_API FPalMapObjectFarmSkillFruitsLotteryRow();
};


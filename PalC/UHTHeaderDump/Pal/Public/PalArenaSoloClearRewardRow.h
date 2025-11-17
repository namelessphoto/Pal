#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalArenaRank.h"
#include "PalArenaSoloClearItemInfo.h"
#include "PalArenaSoloClearRewardRow.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaSoloClearRewardRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalArenaRank Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalArenaSoloClearItemInfo> FirstClearReward;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalArenaSoloClearItemInfo> RepeatClearReward;
    
    PAL_API FPalArenaSoloClearRewardRow();
};


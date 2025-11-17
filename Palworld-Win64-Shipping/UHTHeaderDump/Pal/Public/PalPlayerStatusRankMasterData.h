#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PalPlayerStatusRankMasterData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerStatusRankMasterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Rank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 RequiredRelicNum;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ResetRequiredMoney;
    
    PAL_API FPalPlayerStatusRankMasterData();
};


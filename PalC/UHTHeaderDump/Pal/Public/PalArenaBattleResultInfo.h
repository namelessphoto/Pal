#pragma once
#include "CoreMinimal.h"
#include "EPalArenaBattleResult.h"
#include "PalArenaRankPointChangeResult.h"
#include "PalArenaBattleResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalArenaBattleResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EPalArenaBattleResult BattleResult;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsTimeup;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FPalArenaRankPointChangeResult> RankPointChangeResults;
    
    PAL_API FPalArenaBattleResultInfo();
};


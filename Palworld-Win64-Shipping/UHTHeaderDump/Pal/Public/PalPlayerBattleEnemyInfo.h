#pragma once
#include "CoreMinimal.h"
#include "EPalBattleBGMType.h"
#include "PalPlayerBattleEnemyInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalPlayerBattleEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    EPalBattleBGMType Rank;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> WeakActor;
    
    PAL_API FPalPlayerBattleEnemyInfo();
};


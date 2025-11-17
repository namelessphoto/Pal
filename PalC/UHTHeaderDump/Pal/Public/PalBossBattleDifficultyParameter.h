#pragma once
#include "CoreMinimal.h"
#include "PalBossBattleSuccessItemInfo.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalBossBattleDifficultyParameter.generated.h"

class APalBossBattleEventBase;

USTRUCT(BlueprintType)
struct FPalBossBattleDifficultyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FPalDataTableRowName_PalMonsterData PalId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPalBossBattleSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalBossBattleEventBase> BossBattleEvent;
    
    PAL_API FPalBossBattleDifficultyParameter();
};


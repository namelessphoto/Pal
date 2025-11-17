#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalDungeonRewardSpawnerContentType.h"
#include "EPalDungeonRewardSpawnerType.h"
#include "PalDungeonRewardSpawnerLotteryData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonRewardSpawnerLotteryData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalDungeonRewardSpawnerType RewardSpawnerType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float Weight;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalDungeonRewardSpawnerContentType SpawnerContentType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LotteryValue;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LotteryValueBlueprintClassName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> LotteryValueBlueprintSoftClass;
    
    FPalDungeonRewardSpawnerLotteryData();
};


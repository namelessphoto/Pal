#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EPalDungeonEnemySpawnerRankType.h"
#include "PalDungeonEnemySpawnerData.generated.h"

class APalNPCSpawnerBase;

USTRUCT(BlueprintType)
struct PAL_API FPalDungeonEnemySpawnerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnAreaId;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EPalDungeonEnemySpawnerRankType RankType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float WeightInSpawnAreaAndRank;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<APalNPCSpawnerBase> SpawnerBlueprintSoftClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName SpawnerName;
    
    FPalDungeonEnemySpawnerData();
};


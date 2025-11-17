#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalDungeonInstanceBossState.h"
#include "EPalDungeonType.h"
#include "GameDateTime.h"
#include "PalDungeonRewardSaveData.h"
#include "PalMapObjectSaveData.h"
#include "PalStageInstanceId.h"
#include "PalDungeonSaveData.generated.h"

USTRUCT()
struct FPalDungeonSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid InstanceId;
    
    UPROPERTY()
    EPalDungeonType DungeonType;
    
    UPROPERTY()
    FGuid MarkerPointId;
    
    UPROPERTY()
    FName DungeonSpawnAreaId;
    
    UPROPERTY()
    FName DungeonLevelName;
    
    UPROPERTY()
    EPalDungeonInstanceBossState BossState;
    
    UPROPERTY()
    FName EnemySpawnerDataBossRowName;
    
    UPROPERTY()
    FGameDateTime DisappearTimeAt;
    
    UPROPERTY()
    int32 ReservedDataLayerAssetIndex;
    
    UPROPERTY()
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY()
    TArray<FPalMapObjectSaveData> MapObjectSaveData;
    
    UPROPERTY()
    TMap<FGuid, FPalDungeonRewardSaveData> RewardSaveDataMap;
    
    UPROPERTY()
    FGameDateTime RespawnBossTimeAt;
    
    PAL_API FPalDungeonSaveData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalDungeonLevelVersion.h"
#include "PalBaseCampSaveData.h"
#include "PalBossSpawnerSaveData.h"
#include "PalCellCoord.h"
#include "PalCharacterContainerSaveData.h"
#include "PalCharacterParameterStorageSaveData.h"
#include "PalContainerId.h"
#include "PalDungeonPointMarkerSaveData.h"
#include "PalDungeonSaveData.h"
#include "PalDynamicItemSaveData.h"
#include "PalEnemyCampSaveData.h"
#include "PalFishingSpotSaveData.h"
#include "PalFixedWeaponDestroySaveData.h"
#include "PalFoliageGridSaveData.h"
#include "PalGameTimeSaveData.h"
#include "PalGroupSaveData.h"
#include "PalGuildExtraSaveData.h"
#include "PalIndividualCharacterSaveParameterSaveData.h"
#include "PalInstanceID.h"
#include "PalInvaderSaveData.h"
#include "PalItemContainerSaveData.h"
#include "PalMapObjectSaveData.h"
#include "PalMapObjectSpawnerInStageSaveData.h"
#include "PalMapObjectSpawnerSaveData.h"
#include "PalNPCAppearFlagSaveData.h"
#include "PalOilrigSaveData.h"
#include "PalRandomizerSaveData.h"
#include "PalStageInstanceId.h"
#include "PalSupplySaveData.h"
#include "PalWorkSaveData.h"
#include "PalWorldSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString WorldName;
    
    UPROPERTY()
    TMap<FPalInstanceID, FPalIndividualCharacterSaveParameterSaveData> CharacterSaveParameterMap;
    
    UPROPERTY()
    TArray<FPalMapObjectSaveData> MapObjectSaveData;
    
    UPROPERTY()
    TMap<FPalCellCoord, FPalFoliageGridSaveData> FoliageGridSaveDataMap;
    
    UPROPERTY()
    TMap<FGuid, FPalMapObjectSpawnerSaveData> MapObjectSpawnerSaveData;
    
    UPROPERTY()
    TMap<FPalStageInstanceId, FPalMapObjectSpawnerInStageSaveData> MapObjectSpawnerInStageSaveData;
    
    UPROPERTY()
    TArray<FPalWorkSaveData> WorkSaveData;
    
    UPROPERTY()
    TMap<FGuid, FPalBaseCampSaveData> BaseCampSaveData;
    
    UPROPERTY()
    TMap<FPalContainerId, FPalItemContainerSaveData> ItemContainerSaveData;
    
    UPROPERTY()
    TArray<FPalDynamicItemSaveData> DynamicItemSaveData;
    
    UPROPERTY()
    TMap<FPalContainerId, FPalCharacterContainerSaveData> CharacterContainerSaveData;
    
    UPROPERTY()
    TMap<FGuid, FPalGroupSaveData> GroupSaveDataMap;
    
    UPROPERTY()
    TMap<FGuid, FPalGuildExtraSaveData> GuildExtraSaveDataMap;
    
    UPROPERTY()
    FPalCharacterParameterStorageSaveData CharacterParameterStorageSaveData;
    
    UPROPERTY()
    FPalGameTimeSaveData GameTimeSaveData;
    
    UPROPERTY()
    FPalBossSpawnerSaveData BossSpawnerSaveData;
    
    UPROPERTY()
    FPalEnemyCampSaveData EnemyCampSaveData;
    
    UPROPERTY()
    FPalNPCAppearFlagSaveData NPCAppearFlagSaveData;
    
    UPROPERTY()
    TArray<FPalDungeonPointMarkerSaveData> DungeonPointMarkerSaveData;
    
    UPROPERTY()
    TArray<FPalDungeonSaveData> DungeonSaveData;
    
    UPROPERTY()
    EPalDungeonLevelVersion DungeonLevelVersion;
    
    UPROPERTY()
    TMap<FGuid, FPalInvaderSaveData> InvaderSaveData;
    
    UPROPERTY()
    FPalOilrigSaveData OilrigSaveData;
    
    UPROPERTY()
    FPalFixedWeaponDestroySaveData FixedWeaponDestroySaveData;
    
    UPROPERTY()
    FPalSupplySaveData SupplySaveData;
    
    UPROPERTY()
    FPalRandomizerSaveData RandomizerSaveData;
    
    UPROPERTY()
    uint32 WorldMetaSaveVersionBitMask;
    
    UPROPERTY()
    TSet<FPalInstanceID> InLockerCharacterInstanceIDArray;
    
    UPROPERTY()
    TMap<FGuid, FPalFishingSpotSaveData> FishingSpotSaveData;
    
    PAL_API FPalWorldSaveData();
};


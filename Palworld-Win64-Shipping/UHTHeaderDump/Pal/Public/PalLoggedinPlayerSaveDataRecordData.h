#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalPlayerSaveDataRecordDataFoundTreasureMapPoint.h"
#include "PalLoggedinPlayerSaveDataRecordData.generated.h"

USTRUCT()
struct FPalLoggedinPlayerSaveDataRecordData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, bool> TowerBossDefeatFlag;
    
    UPROPERTY()
    TMap<FName, int32> TowerBossDefeatCount;
    
    UPROPERTY()
    TMap<FName, bool> NormalBossDefeatFlag;
    
    UPROPERTY()
    TMap<FName, int32> RaidBossDefeatCount;
    
    UPROPERTY()
    TMap<FName, int32> SpecificBossDefeatFlag;
    
    UPROPERTY()
    int32 BossDefeatCount;
    
    UPROPERTY()
    int32 PredatorDefeatCount;
    
    UPROPERTY()
    int32 TribeCaptureCount;
    
    UPROPERTY()
    TMap<FName, int32> PalCaptureCount;
    
    UPROPERTY()
    TMap<FName, int32> PalCaptureBonusCount;
    
    UPROPERTY()
    TMap<FName, int32> PalButcherCount;
    
    UPROPERTY()
    TMap<FName, bool> PaldeckUnlockFlag;
    
    UPROPERTY()
    int32 PalCaptureCountBonusCount_Tier1;
    
    UPROPERTY()
    int32 PalCaptureCountBonusCount_Tier2;
    
    UPROPERTY()
    int32 PalCaptureCountBonusCount_Tier3;
    
    UPROPERTY()
    int32 PalCaptureBonusExpTableIndex;
    
    UPROPERTY()
    int32 NpcBonusExpTableIndex;
    
    UPROPERTY()
    TMap<FName, bool> RelicObtainForInstanceFlag;
    
    UPROPERTY()
    int32 RelicPossessNum;
    
    UPROPERTY()
    TMap<FName, bool> NoteObtainForInstanceFlag;
    
    UPROPERTY()
    TMap<FName, int32> NPCTalkIdCount;
    
    UPROPERTY()
    TMap<FName, bool> FastTravelPointUnlockFlag;
    
    UPROPERTY()
    TArray<FGuid> BuildingObjectMapObjectInstanceIds;
    
    UPROPERTY()
    TMap<FName, int32> CraftItemCount;
    
    UPROPERTY()
    int32 NormalDungeonClearCount;
    
    UPROPERTY()
    int32 FixedDungeonClearCount;
    
    UPROPERTY()
    int32 OilrigClearCount;
    
    UPROPERTY()
    TMap<FName, int32> PalRankupCount;
    
    UPROPERTY()
    TMap<FName, bool> FindAreaFlagMap;
    
    UPROPERTY()
    int32 AreaBonusExpTableIndex;
    
    UPROPERTY()
    TMap<FName, int32> ArenaSoloClearCount;
    
    UPROPERTY()
    TArray<FGuid> CompletedEmoteNPCIDArray;
    
    UPROPERTY()
    TMap<FName, int32> NPCTalkCountMap;
    
    UPROPERTY()
    TMap<FName, bool> InvokeNPCNetworkEventMap;
    
    UPROPERTY()
    TMap<FGuid, FPalPlayerSaveDataRecordDataFoundTreasureMapPoint> FoundTreasureMapPointMap;
    
    UPROPERTY()
    TMap<FName, int32> FishingCountMap;
    
    UPROPERTY()
    int32 CampConqueredCount;
    
    UPROPERTY()
    int32 FoundTreasureCount;
    
    UPROPERTY()
    TMap<FName, bool> NpcItemTradeFlag;
    
    UPROPERTY()
    TMap<FName, bool> PalDisplayNPCDataTableProgress;
    
    UPROPERTY()
    TMap<FName, bool> NPCAchivementRewardFlag;
    
    UPROPERTY()
    bool bFirstFishingComplete;
    
    PAL_API FPalLoggedinPlayerSaveDataRecordData();
};


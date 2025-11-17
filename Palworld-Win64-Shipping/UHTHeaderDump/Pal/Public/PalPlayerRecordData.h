#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PalPlayerRecordDataFoundTreasureMapPoint.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_IntVal.h"
#include "PalStageInstanceId.h"
#include "ThreadSafeBoolean.h"
#include "ThreadSafeInt32.h"
#include "PalPlayerRecordData.generated.h"

class UPalMapObjectModel;
class UPalPlayerRecordDataTrigger;

UCLASS(BlueprintType)
class PAL_API UPalPlayerRecordData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateTreasureMapPointDelegate, const FGuid&, PointId);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdateTreasureMapPointDataDelegate, const FGuid&, PointId, const FPalPlayerRecordDataFoundTreasureMapPoint&, PointData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRelicNumUpdateDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRelicNumAddedDelegate, int32, AddNum);
    
    UPROPERTY(BlueprintAssignable)
    FOnRelicNumUpdateDelegate OnRelicNumUpdate;
    
    UPROPERTY(BlueprintAssignable)
    FOnRelicNumAddedDelegate OnRelicNumAdd;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UPalPlayerRecordDataTrigger>> RecordDataTriggerClassArray;
    
    UPROPERTY()
    TArray<UPalPlayerRecordDataTrigger*> RecordDataTriggerArray;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    FGuid OwnerPlayerUId;
    
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal TowerBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal TowerBossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NormalBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal RaidBossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal SpecificBossDefeatFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 BossDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 PredatorDefeatCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 TribeCaptureCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalCaptureCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalCaptureBonusCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalButcherCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal PaldeckUnlockFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 PalCaptureBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 NpcBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 AreaBonusExpTableIndex;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal FindAreaFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal RelicObtainForInstanceFlag;
    
    UPROPERTY(BlueprintReadWrite, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_RelicNum)
    FThreadSafeInt32 RelicPossessNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FThreadSafeInt32 RelicPossessNumMirror;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NoteObtainForInstanceFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal FastTravelPointUnlockFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalStageInstanceId EnteringStageInstanceId;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> BuildingObjectMapObjectInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal CraftItemCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 NormalDungeonClearCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 FixedDungeonClearCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 OilrigClearCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal PalRankupCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> CompletedEmoteNPCIDArray;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal ArenaSoloClearCount;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal NPCTalkCountMap;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal InvokeNPCNetworkEventMap;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal FishingCountMap;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 FoundTreasureCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeInt32 CampConqueredCount;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NpcItemTradeFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal PalDisplayNPCDataTableProgress;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FPalPlayerRecordDataRepInfoArrayThreadSafe_BoolVal NPCAchivementRewardFlag;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FThreadSafeBoolean bFirstFishingComplete;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalPlayerRecordDataFoundTreasureMapPoint> FoundTreasureMapPointMap;
    
public:
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FString Debug_EnteringStageDataLayerName;
    
    UPROPERTY(BlueprintReadWrite, Replicated, Transient, VisibleInstanceOnly)
    FString Debug_LastEnteredStageDataLayerName;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 PalCaptureCountBonusCount_Tier1_Old;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 PalCaptureCountBonusCount_Tier2_Old;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 PalCaptureCountBonusCount_Tier3_Old;
    
public:
    UPalPlayerRecordData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_RelicNum();
    
private:
    UFUNCTION()
    void OnCompleteBuild_ServerInternal(UPalMapObjectModel* MapObjectModel);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetUnlockedPaldexCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetTotalPalCaptureCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNormalBossDefeatCount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFoundedAreaNum() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBonusExpTableIndex() const;
    
};


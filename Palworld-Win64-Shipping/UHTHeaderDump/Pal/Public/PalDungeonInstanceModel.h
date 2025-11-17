#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EPalDungeonInstanceBossState.h"
#include "GameDateTime.h"
#include "PalDeadInfo.h"
#include "PalDungeonInstanceEnemySpawnerStatus.h"
#include "PalDungeonInstanceLevelLoadedInfos.h"
#include "PalMapObjectSaveData.h"
#include "PalStageInstanceId.h"
#include "PalDungeonInstanceModel.generated.h"

class APalCharacter;
class APalNPCSpawnerBase;
class UDataLayerAsset;
class UPalDungeonInstanceModel;
class UPalDungeonRewardSpawnerContent;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalDungeonInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalDungeonInstanceModel*, Self);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnChangeInstanceStatusDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FGuid DungeonInstanceId;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FGuid MarkerPointId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FName DungeonSpawnAreaId;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FName DungeonLevelName;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FName OverrideDungeonNameTextId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FVector_NetQuantize RepFieldWarpPointLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform FieldWarpPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform DeadItemDropTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BossState)
    EPalDungeonInstanceBossState BossState;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FName EnemySpawner_Boss_RowName;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TSoftClassPtr<APalNPCSpawnerBase> EnemySpawnerClass_Boss;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid EnemyBossSpawnerGroupId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, FPalDungeonInstanceEnemySpawnerStatus> EnemySpawnerStatusMap;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGuid, UPalDungeonRewardSpawnerContent*> RewardSpawnerContentMapBySpawnerPoint;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_DisappearTimeAt)
    FGameDateTime DisappearTimeAt;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FPalMapObjectSaveData> MapObjectSaveDataArray;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 ReservedDataLayerAssetIndex;
    
    UPROPERTY()
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalDungeonInstanceLevelLoadedInfos LevelLoadedInfos;
    
public:
    UPalDungeonInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdateBossState();
    
public:
    UFUNCTION()
    void OnSpawnedCharacter_ServerInternal(UPalIndividualCharacterHandle* IndividualHandle);
    
protected:
    UFUNCTION()
    void OnRep_DisappearTimeAt();
    
    UFUNCTION()
    void OnRep_BossState();
    
    UFUNCTION()
    void OnDeadBoss_ServerInternal(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnChangeInstanceStatus();
    
    UFUNCTION()
    void OnCapturedBoss_ServerInternal(APalCharacter* Character, APalCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    FName GetDungeonSpawnAreaId() const;
    
    UFUNCTION(BlueprintPure)
    FText GetDungeonNameText() const;
    
    UFUNCTION(BlueprintPure)
    FGameDateTime GetDisappearTimeAt() const;
    
    UFUNCTION(BlueprintPure)
    EPalDungeonInstanceBossState GetBossState() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcRemainSecondsBy(const UObject* WorldContextObject, const FGameDateTime& TimeAt);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float CalcDisappearRemainSeconds(const UObject* WorldContextObject, const FGameDateTime& InDisappearTimeAt);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleState.h"
#include "EPalBossType.h"
#include "PalBossBattleSuccessItemInfo.h"
#include "PalStageInstanceId.h"
#include "PalBossBattleInstanceModel.generated.h"

class ALevelInstance;
class APalBossBattleEventBase;
class APalBossBattleLevelInstance;
class APalBossTower;
class APalCutsceneActor;
class APalPlayerCharacter;
class UAkAudioEvent;
class UDataLayerAsset;
class UPalBossBattleSequencer;

UCLASS(BlueprintType)
class PAL_API UPalBossBattleInstanceModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeEntryPlayerDelegate, TArray<APalPlayerCharacter*>, EntryPlayers);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeCombatTimeLimitDelegate, FDateTime, CombatTimeLimit);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangeBossBattleStateDelegate, EPalBossBattleState, BossBattleState);
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform FrontWarpPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    FVector_NetQuantize RepFrontWarpPointtLocation;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform TopWarpPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform StartPointTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FTransform DeadItemDropTransform;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    FPalStageInstanceId StageInstanceId;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    EPalBossType BossType;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    TSoftClassPtr<APalCutsceneActor> IntroCutsceneActor;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TSoftClassPtr<ALevelInstance> BossRoomLevelInstanceAsset;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    int32 Level;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    int32 CombatTimeMax;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, ReplicatedUsing=OnRep_BossBattleLevelInstance)
    APalBossBattleLevelInstance* BossBattleLevelInstance;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BossBattleState)
    EPalBossBattleState BossBattleState;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_EntryPlayers)
    TArray<APalPlayerCharacter*> EntryPlayers;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<APalPlayerCharacter*> WonPlayers;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CombatTimeLimit)
    FDateTime CombatTimeLimit;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    UPalBossBattleSequencer* LocalBattleSequencer;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient, VisibleInstanceOnly)
    EPalBossBattleDifficulty Difficulty;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TArray<FPalBossBattleSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleInstanceOnly)
    TSoftClassPtr<APalBossBattleEventBase> BossBattleEvent;
    
private:
    UPROPERTY()
    UDataLayerAsset* ReservedDataLayerAsset;
    
public:
    UPalBossBattleInstanceModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnUpdateCombatTimeLimit();
    
    UFUNCTION()
    void OnUpdateBossBattleState();
    
    UFUNCTION()
    void OnRep_EntryPlayers();
    
    UFUNCTION()
    void OnRep_CombatTimeLimit();
    
    UFUNCTION()
    void OnRep_BossBattleState();
    
    UFUNCTION()
    void OnRep_BossBattleLevelInstance();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLevelInstanceLoaded() const;
    
    UFUNCTION(BlueprintCallable)
    void GiftSuccessItem_OnePlayer(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintPure)
    int32 GetLevel() const;
    
    UFUNCTION(BlueprintPure)
    EPalBossType GetBossType() const;
    
    UFUNCTION(BlueprintPure)
    EPalBossBattleState GetBossBattleState() const;
    
};


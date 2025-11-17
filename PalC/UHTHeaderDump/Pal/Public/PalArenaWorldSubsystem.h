#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalArenaMenuActionType.h"
#include "EPalArenaRank.h"
#include "EPalPassiveSkillEffectType.h"
#include "PalArenaRule.h"
#include "PalArenaSoloClearItemInfo.h"
#include "PalArenaWorldRankingRecord.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalArenaWorldSubsystem.generated.h"

class APalArenaEntrance;
class APalArenaSoloNPCSpawner;
class APalArenaWorldRankingInfo;
class APalPlayerCharacter;
class UDataLayerAsset;
class UDataTable;
class UPalArenaInstanceModel;
class UPalArenaSequencer;
class UPalIndividualCharacterHandle;

UCLASS(BlueprintType)
class PAL_API UPalArenaWorldSubsystem : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalOnLocalPlayerRankingInfoNotified, FPalArenaWorldRankingRecord, RankingInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUIRequestRepliedDelegate, EPalArenaMenuActionType, ActionType);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnUIRequestRepliedDelegate OnUIRequestRepliedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPalOnLocalPlayerRankingInfoNotified OnLocalPlayerRankingInfoNotified;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<UDataLayerAsset*> DataLayers;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalArenaSequencer> ArenaSequencerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalArenaSequencer> ArenaSpectateSequencerClass;
    
    UPROPERTY(EditDefaultsOnly)
    int32 InBattleTime;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypes;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EPalPassiveSkillEffectType> DisablePassiveTypesToSubPals;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SoloNPCPresetTable;
    
    UPROPERTY(EditDefaultsOnly)
    UDataTable* SoloRewadTable;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalArenaSoloNPCSpawner> SoloNPCSpawnerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<APalArenaWorldRankingInfo> ArenaWorldRankingInfoClass;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialHateHigh;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialHateLow;
    
    UPROPERTY()
    APalArenaWorldRankingInfo* ArenaWorldRankingInfo;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<UPalArenaInstanceModel*> InstanceModels;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    APalArenaEntrance* ArenaEntrance;
    
    UPROPERTY(Transient)
    FGuid GroupGuid;
    
public:
    UPalArenaWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void RequestExitSpectate();
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterArenaSolo(const EPalArenaRank Rank);
    
    UFUNCTION(BlueprintCallable)
    void RequestEnterArena(const FGuid& ArenaRoomId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateArenaRoom(const FPalArenaRule& ArenaRule);
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelEntryArena(APalPlayerCharacter* CancelPlayer);
    
private:
    UFUNCTION()
    void OnSoloNPCSpawned(APalArenaSoloNPCSpawner* Spawner);
    
    UFUNCTION()
    void OnChangeBattleEndTime_ServerInternal(FDateTime BattleEndTime);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<FPalArenaSoloClearItemInfo> GetSoloClearReward(EPalArenaRank Rank, bool bIsFirstClear);
    
    UFUNCTION(BlueprintPure)
    UPalArenaSequencer* GetLocalPlayerSequencer() const;
    
    UFUNCTION(BlueprintPure)
    APalArenaWorldRankingInfo* GetArenaWorldRankingInfo() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetArenaBattleTime();
    
    UFUNCTION()
    void ForceStageExitAll();
    
    UFUNCTION(BlueprintCallable)
    void ExitArena(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void ExitAllByInstanceId(const FGuid& ArenaInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle);
    
};


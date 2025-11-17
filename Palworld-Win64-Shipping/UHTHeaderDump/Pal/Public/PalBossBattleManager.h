#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EPalBossBattleCombatResult.h"
#include "EPalBossBattleDifficulty.h"
#include "EPalBossType.h"
#include "PalBossBattleStaticInfo.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalBossBattleManager.generated.h"

class APalBossTower;
class APalPlayerCharacter;
class UPalBossBattleInstanceModel;
class UPalBossBattleSequencer;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleManager : public UPalWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLocalPlayerBossBattleSuccessDelegate, APalPlayerCharacter*, LocalJoinedPlayer, EPalBossType, BossType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatStartUIDelegate, APalBossTower*, BossTower);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCombatEndUIActionDelegate, EPalBossBattleCombatResult, CombatResult);
    
    UPROPERTY(BlueprintAssignable)
    FOnLocalPlayerBossBattleSuccessDelegate OnLocalBossBattleSuccessDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCombatStartUIDelegate OnCombatStartUIDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FOnCombatEndUIActionDelegate OnCombatEndUIAction;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MAX_TIME_LIMIT;
    
    UPROPERTY(EditDefaultsOnly)
    float PlayerRespawnTimeLimit;
    
    UPROPERTY(EditDefaultsOnly)
    float BGMFadeDuration;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<int32, float> MultiPlayerBossHPMap;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalBossBattleSequencer> BossBattleSequencerClass;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalBossType, FPalBossBattleStaticInfo> BossInfoMap;
    
    UPROPERTY(EditDefaultsOnly)
    EPalBossType HardUnlockTiggerBoss;
    
    UPROPERTY(Transient)
    TMap<EPalBossType, UPalBossBattleInstanceModel*> InstanceModelMap;
    
    UPROPERTY(Transient)
    TMap<EPalBossType, UPalBossBattleSequencer*> BossBattleSequencerMap;
    
    UPROPERTY(Transient)
    FGuid GroupGuid;
    
    UPROPERTY(Transient)
    EPalBossType DisableSkyBossType_LocalPlayer;
    
public:
    UPalBossBattleManager();

    UFUNCTION()
    void UnlockAchievement(EPalBossType BossType);
    
    UFUNCTION(BlueprintCallable)
    void UnloadBossBattle_ServerInternal(EPalBossType BossType);
    
private:
    UFUNCTION()
    void OnBossBattleCombatStart(EPalBossType BossType);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAsyncBossBattle_ServerInternal(EPalBossType BossType);
    
    UFUNCTION(BlueprintPure)
    FTransform GetTopWarpPointTransform(EPalBossType BossType) const;
    
    UFUNCTION(BlueprintPure)
    FPalBossBattleStaticInfo GetStaticInfo(EPalBossType BossType) const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetPlayerSpawnTransformForMultiPlayer(int32 Index, FVector Location, FRotator Rotate, float Offset);
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxJoinablePlayerNum();
    
    UFUNCTION(BlueprintPure)
    bool GetIsServer();
    
    UFUNCTION(BlueprintPure)
    float GetBossHPMultiPlayerRate(int32 JoinedPlayerNum);
    
    UFUNCTION()
    FString GetBossAchievementIndex(EPalBossType BossType) const;
    
    UFUNCTION(BlueprintPure)
    float GetBattleTimeLimit() const;
    
private:
    UFUNCTION()
    void EmptyInstanceCleanup();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableSkyCreator(bool Disable);
    
    UFUNCTION(BlueprintPure)
    bool CanStartBossBattle(EPalBossType BossType);
    
    UFUNCTION()
    bool CanEntryHard(const APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintCallable)
    void BossBattleExit(EPalBossType BossType, APalPlayerCharacter* ExitPlayer);
    
    UFUNCTION(BlueprintCallable)
    void BossBattleEntryCancel(EPalBossType BossType, APalPlayerCharacter* EntryPlayer);
    
    UFUNCTION(BlueprintCallable)
    void BossBattleEntry(EPalBossType BossType, EPalBossBattleDifficulty Difficulty, APalPlayerCharacter* EntryPlayer);
    
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* AddIndividualHandle);
    
};


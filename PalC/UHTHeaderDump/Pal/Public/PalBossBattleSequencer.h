#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalBossBattleCombatResult.h"
#include "EPalBossBattleSequenceType.h"
#include "EPalBossType.h"
#include "PalDyingEndInfo.h"
#include "Templates/SubclassOf.h"
#include "PalBossBattleSequencer.generated.h"

class APalBossBattleEventBase;
class APalCharacter;
class APalPlayerCharacter;
class UAkAudioEvent;
class UPalAutoSaveDisabler;
class UPalBossBattleInstanceModel;
class UPalBossBattleSequenceBase;

UCLASS(Blueprintable)
class PAL_API UPalBossBattleSequencer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventCreated, APalBossBattleEventBase*, BossBattleEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBossBattleCombatStart, EPalBossType, BossType);
    
    UPROPERTY(BlueprintAssignable)
    FBossBattleCombatStart OnCombatStartDelegate;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float RemainBattleTimer;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool IsBattleTimerCountDown;
    
    UPROPERTY(BlueprintAssignable)
    FOnEventCreated OnEventCreated;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    EPalBossBattleCombatResult CombatResult;
    
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<EPalBossBattleSequenceType, TSubclassOf<UPalBossBattleSequenceBase>> SequenceClassMap;
    
    UPROPERTY(Transient)
    TMap<EPalBossBattleSequenceType, UPalBossBattleSequenceBase*> SequenceMap;
    
    UPROPERTY(Transient)
    UPalBossBattleSequenceBase* CurrentSequence;
    
    UPROPERTY(Transient)
    UPalBossBattleInstanceModel* BossBattleInstanceModel;
    
    UPROPERTY(Transient)
    TArray<APalPlayerCharacter*> InRoomPlayers;
    
    UPROPERTY(Transient)
    TArray<APalPlayerCharacter*> SequenceEndPlayers;
    
    UPROPERTY(Transient)
    EPalBossType SelfBossType;
    
    UPROPERTY(Transient)
    APalCharacter* BossCharacter;
    
    UPROPERTY(Transient)
    int32 PlayingBGMId;
    
    UPROPERTY(Transient)
    bool bIsClientOnly;
    
    UPROPERTY(Transient)
    APalBossBattleEventBase* BossBattleEvent;
    
    UPROPERTY(Transient)
    UPalAutoSaveDisabler* AutoSaveDisabler;
    
public:
    UPalBossBattleSequencer();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void Tick_ForBP(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMoveDisable(APalPlayerCharacter* Player, bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void SetMutekiAllPlayer(bool bIsMuteki);
    
    UFUNCTION(BlueprintCallable)
    void SetBossCharacter(APalCharacter* BossActor);
    
    UFUNCTION()
    void SetBossBattlEvent(APalBossBattleEventBase* NewBossBattleEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetAllPlayerMoveDisable(bool Disable);
    
    UFUNCTION()
    void RemovePlayerFromInRoomList(APalPlayerCharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDyingStatus();
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(UAkAudioEvent* BGMAudioEvent);
    
private:
    UFUNCTION()
    void OnPlayerRespawn(APalPlayerCharacter* Player);
    
    UFUNCTION()
    void OnPlayerDeadStopBGM(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION()
    void OnOpeningEnd(bool Success);
    
    UFUNCTION()
    void OnEndingEnd(bool Success);
    
    UFUNCTION()
    void OnDyingDeadEndDelegate(APalPlayerCharacter* PlayerCharacter, const FPalDyingEndInfo& DyingEndInfo);
    
    UFUNCTION()
    void OnCompletedEnd(bool Success);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCombatFinish(EPalBossBattleCombatResult InCombatResult);
    
private:
    UFUNCTION()
    void OnCombatEnd(bool Success);
    
    UFUNCTION()
    void NoticeClientCombatResult();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAndCreateBossBattleEvent(TSoftClassPtr<APalBossBattleEventBase> BossBattleEventClass);
    
private:
    UFUNCTION()
    void KillPlayerTimeup_AfterRevivePartnerSkill(APalPlayerCharacter* Player);
    
    UFUNCTION()
    void KillPlayerTimeup(APalPlayerCharacter* Player);
    
public:
    UFUNCTION(BlueprintCallable)
    void KillAllPlayer();
    
    UFUNCTION(BlueprintPure)
    bool IsClientOnly() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAllPlayerDead() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APalPlayerCharacter*> GetSequencePlayers() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainTimeSecond();
    
    UFUNCTION(BlueprintPure)
    APalPlayerCharacter* GetJoinedLocalPlayer();
    
    UFUNCTION(BlueprintPure)
    APalPlayerCharacter* GetJoinedAndServerLocalPlayer();
    
    UFUNCTION(BlueprintPure)
    TArray<APalPlayerCharacter*> GetInRoomPlayers();
    
    UFUNCTION(BlueprintPure)
    EPalBossType GetBossType();
    
    UFUNCTION(BlueprintPure)
    APalCharacter* GetBossCharacter();
    
    UFUNCTION(BlueprintPure)
    UPalBossBattleInstanceModel* GetBossBattleInstanceModel() const;
    
    UFUNCTION(BlueprintPure)
    APalBossBattleEventBase* GetBossBattleEvent() const;
    
    UFUNCTION(BlueprintPure)
    TArray<APalPlayerCharacter*> GetAliveOrDyingPlayers();
    
    UFUNCTION(BlueprintCallable)
    void FullRecoveryHPAllPlayer();
    
    UFUNCTION(BlueprintCallable)
    void ForceRespawnPlayer();
    
    UFUNCTION(BlueprintPure)
    APalPlayerCharacter* FindFirstCombatTargetForBossAI();
    
};


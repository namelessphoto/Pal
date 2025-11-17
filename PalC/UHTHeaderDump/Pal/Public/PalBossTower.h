#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EPalBossBattleDifficulty.h"
#include "EPalBossBattleState.h"
#include "EPalBossType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalBossTower.generated.h"

class APalPlayerCharacter;
class UPalBossBattleInstanceModel;

UCLASS()
class PAL_API APalBossTower : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnChangeBossTowerEntryWaitUI, bool, bIsCountDown, FDateTime, TimeLimit);
    
    UPROPERTY(BlueprintAssignable)
    FOnChangeBossTowerEntryWaitUI OnChangeBossTowerEntryWaitUI;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPalBossType BossType;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid EntryWaitInfoHUDId;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_InstanceModel)
    UPalBossBattleInstanceModel* InstanceModel;
    
public:
    UPROPERTY(BlueprintReadOnly, Replicated)
    FDateTime CombatTimeLimit;
    
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid LocationInstanceId;
    
private:
    UPROPERTY(Transient)
    TArray<APalPlayerCharacter*> InDoorPlayerList;
    
    UPROPERTY()
    FTimerHandle TimerHandle;
    
public:
    APalBossTower(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool WriteBossDefeatRecord_ServerInternal(APalPlayerCharacter* TargetPlayer);
    
    UFUNCTION(NetMulticast, Reliable)
    void UpdateEntry_Multicast(EPalBossBattleDifficulty NewDifficulty, const TArray<APalPlayerCharacter*>& NewEntryPlayers, EPalBossBattleState InBossBattleState);
    
    UFUNCTION(BlueprintCallable)
    void ShowWaitInfo(const FVector TargetLocation, const FVector DisplayOffset, bool isWaiting);
    
    UFUNCTION(BlueprintCallable)
    void RequestBossBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void RequestBossBattleEntry(EPalBossBattleDifficulty Difficulty);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveInDoorPlayer(APalPlayerCharacter* Player);
    
private:
    UFUNCTION()
    void OnRep_InstanceModel();
    
    UFUNCTION()
    void OnChangeEntryPlayer(TArray<APalPlayerCharacter*> EntryPlayers);
    
    UFUNCTION()
    void OnChangeCombatTimeLimit(FDateTime NewCombatTimeLimit);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeBossBattleStateBP(EPalBossBattleState NewState);
    
private:
    UFUNCTION()
    void OnChangeBossBattleState(EPalBossBattleState NewBossBattleState);
    
public:
    UFUNCTION()
    void NotifyEntryUpdateAll();
    
    UFUNCTION(BlueprintPure)
    bool IsEntered(APalPlayerCharacter* Player) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform GetTopWarpPoint() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    TArray<APalPlayerCharacter*> GetStartablePlayers();
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FTransform GetFrontWarpPoint() const;
    
protected:
    UFUNCTION(BlueprintPure)
    TArray<APalPlayerCharacter*> GetForceWarpTargets() const;
    
public:
    UFUNCTION(BlueprintNativeEvent)
    FTransform GetDeadItemDropPoint() const;
    
    UFUNCTION(BlueprintPure)
    FName GetBossBattleRowName();
    
    UFUNCTION(BlueprintCallable)
    void CloseWaitInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddInDoorPlayer(APalPlayerCharacter* Player);
    

    // Fix for true pure virtual functions not being implemented
};


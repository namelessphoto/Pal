#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPalRaidBossBattleFinishType.h"
#include "EPalRaidBossBattleStateType.h"
#include "PalDeadInfo.h"
#include "PalInstanceID.h"
#include "PalRaidBossSpawnInfoList.h"
#include "PalRaidBossSpawnerInfo.h"
#include "PalRaidBossComponent.generated.h"

class AActor;
class APalCharacter;
class APalPlayerCharacter;
class UPalBaseCampModel;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalRaidBossComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Replicated, Transient)
    TArray<FPalInstanceID> RaidBossPalList;
    
    UPROPERTY(Transient)
    TArray<UPalIndividualCharacterHandle*> DeadRaidBossPalList;
    
    UPROPERTY(Replicated, Transient)
    FGuid BaseCanpID;
    
    UPROPERTY(Replicated, Transient)
    FVector BaseCampLocation;
    
    UPROPERTY(Replicated, Transient)
    float RemainBattleTimer;
    
    UPROPERTY(Transient)
    EPalRaidBossBattleStateType CurrentState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FPalRaidBossSpawnerInfo SpawnerInfo;
    
    UPROPERTY(Replicated, Transient)
    FName StartItemName;
    
    UPROPERTY(Transient)
    FGuid StartRequestPlayerUID;
    
public:
    UPalRaidBossComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SpawnRaidBoss_BP(FPalRaidBossSpawnInfoList SpawnInfo, const FTransform& SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void OnSpawnBossPal(AActor* Pal);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndBattle_Server_BP();
    
private:
    UFUNCTION()
    void OnDisposeBaseCamp(UPalBaseCampModel* Model);
    
    UFUNCTION()
    void OnDeadPal(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnCapturePal(APalCharacter* SelfCharacter, APalCharacter* Attacker);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsValidPlayerInCamp(APalPlayerCharacter* Player);
    
protected:
    UFUNCTION(BlueprintPure)
    FGuid GetStartRequestPlayerUID() const;
    
    UFUNCTION(BlueprintPure)
    APalPlayerCharacter* GetStartRequestPlayerCharacter() const;
    
public:
    UFUNCTION(BlueprintPure)
    FName GetStartItemName();
    
    UFUNCTION(BlueprintPure)
    float GetRemainTimer();
    
protected:
    UFUNCTION(BlueprintPure)
    FGuid GetCampID() const;
    
    UFUNCTION(BlueprintCallable)
    APalPlayerCharacter* FindInRangePlayers(TArray<APalPlayerCharacter*>& Players, bool OnlyAlive);
    
    UFUNCTION(BlueprintPure)
    bool CanPlayBattleFinishUI() const;
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void CallOnEnd_ToAll(EPalRaidBossBattleFinishType FinishType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddGroupCharacter(UPalIndividualCharacterHandle* PalHandle, bool IsBoss);
    
};


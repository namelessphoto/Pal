#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalOilrigType.h"
#include "PalOilrigController.generated.h"

class APalCharacter;
class APalPlayerCharacter;
class IPalOilrigHandledActorInterface;
class UPalOilrigHandledActorInterface;

UCLASS()
class PAL_API APalOilrigController : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalOilrigType OilrigName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGuid> GoalTreasureBoxSpawners;
    
    UPROPERTY(EditDefaultsOnly)
    float CombatEndDistance;
    
    UPROPERTY(EditDefaultsOnly)
    float TrackingDistance;
    
private:
    UPROPERTY(Transient)
    AActor* CurrentShootingTower;
    
    UPROPERTY(Transient)
    TArray<TScriptInterface<IPalOilrigHandledActorInterface>> HandledActorList;
    
    UPROPERTY(Transient)
    float ResetTimer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsCombat)
    bool IsCombat;
    
    UPROPERTY(Transient)
    TArray<APalPlayerCharacter*> FoundPlayers;
    
    UPROPERTY(Replicated, Transient)
    TArray<FGuid> DestroyedObjectIDs;
    
public:
    APalOilrigController(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(NetMulticast, Reliable)
    void ResetAllSaveData_ToAll();
    
    UFUNCTION(BlueprintCallable)
    void RemoveShootingTower(AActor* Tower);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCombatToAll_BP();
    
private:
    UFUNCTION(NetMulticast, Reliable)
    void OnStartCombatToAll();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartCombatMode_BP(APalPlayerCharacter* FoundPlayer);
    
private:
    UFUNCTION()
    void OnRep_IsCombat();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnEndCombatMode_BP();
    
    UFUNCTION(BlueprintPure)
    bool IsShootingAnyTower();
    
    UFUNCTION(BlueprintPure)
    bool IsCombatMode() const;
    
    UFUNCTION(BlueprintPure)
    bool InTrackingRange(const AActor* TargetActor);
    
    UFUNCTION(BlueprintPure)
    float GetResetTimer() const;
    
    UFUNCTION(BlueprintCallable)
    APalPlayerCharacter* GetNearestFoundPlayer(APalCharacter* NPC);
    
    UFUNCTION(BlueprintCallable)
    void AddShootingTower(AActor* Tower);
    
};


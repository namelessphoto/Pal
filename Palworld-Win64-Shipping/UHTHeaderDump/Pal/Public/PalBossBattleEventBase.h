#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EPalBossBattleCombatResult.h"
#include "PalBossBattleEventBase.generated.h"

class APalCharacter;
class UPalBossBattleSequencer;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalBossBattleEventBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    TArray<UPalIndividualCharacterHandle*> SpawnCharacterHandles;
    
    UPROPERTY(ReplicatedUsing=OnRep_SpawnCharacters)
    TArray<TWeakObjectPtr<APalCharacter>> SpawnCharacters;
    
    UPROPERTY()
    UPalBossBattleSequencer* BossBattleSequencerInServer;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsCombatStarted;
    
public:
    APalBossBattleEventBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void Terminate();
    
    UFUNCTION()
    void SetBossBattleSequencer_ServerInternal(UPalBossBattleSequencer* BossBattleSequencer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTerminate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSpawnCharacter(UPalIndividualCharacterHandle* SpawnHandle);
    
private:
    UFUNCTION()
    void OnRep_SpawnCharacters(const TArray<TWeakObjectPtr<APalCharacter>>& OldSpawnCharacters);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatEnd(EPalBossBattleCombatResult Result);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNearLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
protected:
    UFUNCTION(BlueprintPure)
    UPalBossBattleSequencer* GetBossBattleSequencer() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CombatStart();
    
    UFUNCTION(BlueprintCallable)
    void CombatEnd(EPalBossBattleCombatResult Result);
    
    UFUNCTION(BlueprintPure)
    FVector CalcSpawnLocation(FVector Origin, FVector Dir, float Distance) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ActivateCharacterList(const TArray<UPalIndividualCharacterHandle*>& IndividualHandleList, const TArray<FVector>& OffsetList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateCharacter(UPalIndividualCharacterHandle* IndividualHandle, const FVector Offset);
    
};


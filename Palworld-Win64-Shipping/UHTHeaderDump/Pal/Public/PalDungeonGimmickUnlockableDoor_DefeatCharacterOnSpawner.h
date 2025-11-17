#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalDungeonGimmickSpawnedCharacterState.h"
#include "PalDeadInfo.h"
#include "PalDungeonGimmickUnlockableDoor.h"
#include "PalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner.generated.h"

class APalCharacter;
class APalNPCSpawnerBase;
class UPalDungeonInstanceModel;
class UPalIndividualCharacterHandle;

UCLASS()
class PAL_API APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner : public APalDungeonGimmickUnlockableDoor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 DefeatedCharacterNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    int32 TargetCharacterNum;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_SpawnedCharacterState)
    EPalDungeonGimmickSpawnedCharacterState SpawnedCharacterState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid SpawnerGroupId;
    
    UPROPERTY(EditInstanceOnly)
    FGuid TargetEnemySpawnerLevelObjectInstanceId;
    
public:
    APalDungeonGimmickUnlockableDoor_DefeatCharacterOnSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnSpawnedEnemySpawner_ServerInternal(UPalDungeonInstanceModel* InstanceModel, APalNPCSpawnerBase* EnemySpawner);
    
protected:
    UFUNCTION()
    void OnRep_SpawnedCharacterState(const EPalDungeonGimmickSpawnedCharacterState OldValue);
    
private:
    UFUNCTION()
    void OnEnterCharacterToSpawnerGroup_ServerInternal(UPalIndividualCharacterHandle* IndividualHandle);
    
    UFUNCTION()
    void OnDeadCharacter_ServerInternal(FPalDeadInfo DeadInfo);
    
    UFUNCTION()
    void OnCreatedEnemySpawnerGroup_ServerInternal(APalNPCSpawnerBase* EnemySpawner);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangedSpawnedCharacterStateImpl(const EPalDungeonGimmickSpawnedCharacterState State);
    
private:
    UFUNCTION()
    void OnCapturedCharacter_ServerInternal(APalCharacter* Character, APalCharacter* Attacker);
    
};


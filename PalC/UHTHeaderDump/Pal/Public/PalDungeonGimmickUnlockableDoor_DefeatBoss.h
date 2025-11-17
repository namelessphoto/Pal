#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonInstanceBossState.h"
#include "PalDungeonGimmickUnlockableDoor.h"
#include "PalDungeonGimmickUnlockableDoor_DefeatBoss.generated.h"

class UPalDungeonInstanceModel;

UCLASS()
class PAL_API APalDungeonGimmickUnlockableDoor_DefeatBoss : public APalDungeonGimmickUnlockableDoor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_BossState)
    EPalDungeonInstanceBossState BossState;
    
public:
    APalDungeonGimmickUnlockableDoor_DefeatBoss(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnRep_BossState();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeBossStateImpl(const EPalDungeonInstanceBossState ToState);
    
private:
    UFUNCTION()
    void OnChangeBossState_ServerInternal(UPalDungeonInstanceModel* InstanceModel);
    
};


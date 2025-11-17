#pragma once
#include "CoreMinimal.h"
#include "EPalOilrigType.h"
#include "PalDamageInfo.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "PalOilrigExplosiveObject.generated.h"

UCLASS()
class PAL_API APalOilrigExplosiveObject : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsExplodedFlag)
    bool IsExplodedFlag;
    
public:
    APalOilrigExplosiveObject(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(NetMulticast, Reliable)
    void SyncDestroyObject_ToAll();
    
    UFUNCTION()
    void OnRep_IsExplodedFlag();
    
    UFUNCTION()
    void OnEexplosion(FPalDamageInfo DamageInfo);
    
    UFUNCTION(NetMulticast, Reliable)
    void ChangeDestroyedVisual_ToAll();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeDestroyedVisual_BP();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ChangeDefaultVisual_BP();
    

    // Fix for true pure virtual functions not being implemented
};


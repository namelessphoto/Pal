#pragma once
#include "CoreMinimal.h"
#include "PalAIActionCompositeBase.h"
#include "PalAIActionOtomoDefault.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPalAIActionOtomoDefault : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
    UPalAIActionOtomoDefault();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ShouldSetCombatAction() const;
    
    UFUNCTION(BlueprintCallable)
    void SetOtomoWorkActionFixedAssign(AActor* HitActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoWorkAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoFollowAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoCombatAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoBerserker(AActor* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetOtomoBaseCampAction();
    
    UFUNCTION(BlueprintPure)
    bool IsSameTargetAsTrainerCommand() const;
    
    UFUNCTION(BlueprintPure)
    AActor* FindNearestAttackTarget(const TArray<AActor*>& Actors);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "PalAIActionCompositeBase.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionCompositeWorker.generated.h"

class UPalAIActionBase;

UCLASS(Blueprintable)
class UPalAIActionCompositeWorker : public UPalAIActionCompositeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBase> WaitActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBase> ApproachActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBase> WaitForWorkableActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalAIActionBase> WorkingActionClass;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TSubclassOf<UPalAIActionBase> CurrentActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    FName SpeedFlagName;
    
    UPROPERTY(EditDefaultsOnly)
    float DefaultWalkSpeed;
    
public:
    UPalAIActionCompositeWorker();

    UFUNCTION(BlueprintCallable)
    void UnregisterFixAssignWork();
    
    UFUNCTION(BlueprintCallable)
    bool TryFindNextWork();
    
    UFUNCTION(BlueprintCallable)
    void RegisterFixedAssignWorkAttack(const FGuid& MapObjectModelInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void RegisterFixedAssignWork(const FGuid& WorkId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTickInWaitAction(float DeltaTime);
    
private:
    UFUNCTION()
    void OnStartAction(UPalAIActionBase* action);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsTargetWorkable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetAssignable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAssignedToTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionWait();
    
    UFUNCTION(BlueprintCallable)
    void ChangeActionApproachToWorkArea();
    
};


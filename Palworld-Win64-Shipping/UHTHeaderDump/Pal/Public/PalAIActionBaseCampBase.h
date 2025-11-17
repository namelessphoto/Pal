#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalMapBaseCampWorkerOrderType.h"
#include "PalAIActionBase.h"
#include "PalMonsterControllerBaseCampHungryParameter.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBaseCampBase.generated.h"

class AActor;
class UPalAIActionBaseCampChildBase;
class UPalAIActionCombatBase;
class UPalBaseCampModel;
class UPalHUDDispatchParameterBase;

UCLASS(Abstract, EditInlineNew)
class PAL_API UPalAIActionBaseCampBase : public UPalAIActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float WalkSpeedDefault;
    
public:
    UPalAIActionBaseCampBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StartCombatAction(TSubclassOf<UPalAIActionCombatBase> CombatActionClass);
    
    UFUNCTION()
    void OnUpdateFullStomach(const float Current, const float Last);
    
    UFUNCTION()
    void OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION()
    void OnClosedWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);
    
    UFUNCTION(BlueprintCallable)
    void InterruptActionToRecoverHungry(const FPalMonsterControllerBaseCampHungryParameter Parameter);
    
    UFUNCTION(BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintPure)
    UPalBaseCampModel* GetBaseCampBelongTo() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FinishCombatAction();
    
    UFUNCTION(BlueprintCallable)
    void ChangeChildAction(UPalAIActionBaseCampChildBase* action);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeActionToWorker();
    
};


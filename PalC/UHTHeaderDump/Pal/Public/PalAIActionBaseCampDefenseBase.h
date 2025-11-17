#pragma once
#include "CoreMinimal.h"
#include "EPalWorkDefenseCombatType.h"
#include "EPalWorkType.h"
#include "PalAIActionBase.h"
#include "PalAIActionWorkerInterruptInterface.h"
#include "PalWorkAssignHandleId.h"
#include "Templates/SubclassOf.h"
#include "PalAIActionBaseCampDefenseBase.generated.h"

class AActor;
class APalAIController;
class APalCharacter;
class UPalAICombatModule;
class UPalActionBase;

UCLASS(EditInlineNew)
class UPalAIActionBaseCampDefenseBase : public UPalAIActionBase, public IPalAIActionWorkerInterruptInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    APalCharacter* SelfActor;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPalAICombatModule* CombatModule;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    EPalWorkType CurrentWorkType;
    
    UPROPERTY(Transient)
    FPalWorkAssignHandleId CurrentWorkAssignId;
    
    UPROPERTY(EditDefaultsOnly)
    EPalWorkDefenseCombatType DefenseCombatType;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> DefenseActionClass;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UPalActionBase> DefenseWaitActionClass;
    
public:
    UPalAIActionBaseCampDefenseBase();

protected:
    UFUNCTION(BlueprintPure)
    APalAIController* GetControllerRef();
    

    // Fix for true pure virtual functions not being implemented
};


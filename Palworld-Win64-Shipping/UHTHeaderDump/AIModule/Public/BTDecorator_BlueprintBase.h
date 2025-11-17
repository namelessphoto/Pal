#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "EBTNodeResult.h"
#include "BTDecorator_BlueprintBase.generated.h"

class AAIController;
class AActor;
class APawn;

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTDecorator_BlueprintBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AAIController* AIOwner;
    
    UPROPERTY(Transient)
    AActor* ActorOwner;
    
    UPROPERTY()
    TArray<FName> ObservedKeyNames;
    
    UPROPERTY(EditInstanceOnly)
    uint8 bShowPropertyDetails: 1;
    
    UPROPERTY(AdvancedDisplay, EditDefaultsOnly)
    uint8 bCheckConditionOnlyBlackBoardChanges: 1;
    
    UPROPERTY()
    uint8 bIsObservingBB: 1;
    
public:
    UBTDecorator_BlueprintBase();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveTick(AActor* ownerActor, float DeltaSeconds);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverDeactivated(AActor* ownerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveObserverActivated(AActor* ownerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionStart(AActor* ownerActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveExecutionFinish(AActor* ownerActor, TEnumAsByte<EBTNodeResult> NodeResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool PerformConditionCheck(AActor* ownerActor);
    
    UFUNCTION(BlueprintPure)
    bool IsDecoratorObserverActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDecoratorExecutionActive() const;
    
};


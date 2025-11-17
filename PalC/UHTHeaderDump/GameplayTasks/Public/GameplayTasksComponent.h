#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "EGameplayTaskRunResult.h"
#include "GameplayTaskOwnerInterface.h"
#include "OnClaimedResourcesChangeSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "GameplayTasksComponent.generated.h"

class UGameplayTask;
class UGameplayTaskResource;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYTASKS_API UGameplayTasksComponent : public UActorComponent, public IGameplayTaskOwnerInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bIsNetDirty: 1;
    
protected:
    UPROPERTY()
    TArray<UGameplayTask*> TaskPriorityQueue;
    
    UPROPERTY()
    TArray<UGameplayTask*> TickingTasks;
    
    UPROPERTY(Transient)
    TArray<UGameplayTask*> KnownTasks;
    
public:
    UPROPERTY(BlueprintReadWrite)
    FOnClaimedResourcesChangeSignature OnClaimedResourcesChange;
    
private:
    UPROPERTY(ReplicatedUsing=OnRep_SimulatedTasks)
    TArray<UGameplayTask*> SimulatedTasks;
    
public:
    UGameplayTasksComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION()
    void OnRep_SimulatedTasks(const TArray<UGameplayTask*>& PreviousSimulatedTasks);
    
    UFUNCTION(BlueprintCallable)
    static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);
    

    // Fix for true pure virtual functions not being implemented
};


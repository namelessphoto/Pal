#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalOilrigGoalCrateBase.generated.h"

UCLASS()
class PAL_API APalOilrigGoalCrateBase : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool IsInteracted;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsOpened)
    bool IsOpened;
    
public:
    APalOilrigGoalCrateBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RequestInteract();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OpenDoor_BP();
    
public:
    UFUNCTION(NetMulticast, Reliable)
    void OpenDoor();
    
private:
    UFUNCTION()
    void OnRep_IsOpened();
    

    // Fix for true pure virtual functions not being implemented
};


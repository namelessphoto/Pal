#pragma once
#include "CoreMinimal.h"
#include "FlagContainer.h"
#include "PalInstanceID.h"
#include "PalSkeletalMeshComponent.h"
#include "PalMapObjectSkeletalMeshComponent.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectWorkeeModule;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSkeletalMeshComponent : public UPalSkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bAnimateInWorking;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_bAnimating)
    bool bAnimating;
    
private:
    UPROPERTY(Transient, VisibleInstanceOnly)
    FFlagContainer TickableFlagContainer;
    
public:
    UPalMapObjectSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION()
    void OnWorkDisposed(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnUpdateAssignedCharacter(UPalWorkBase* Work);
    
protected:
    UFUNCTION()
    void OnRep_bAnimating();
    
private:
    UFUNCTION()
    void OnReadyWork(UPalMapObjectWorkeeModule* Module, UPalWorkBase* Work);
    
    UFUNCTION()
    void OnReadyModule_Workee(UPalMapObjectConcreteModelBase* ConcreteModel, UPalMapObjectConcreteModelModuleBase* Module);
    
    UFUNCTION()
    void OnChangedInProgress(UPalWorkProgress* WorkProgress);
    
};


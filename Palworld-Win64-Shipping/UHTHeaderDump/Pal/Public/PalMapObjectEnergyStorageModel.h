#pragma once
#include "CoreMinimal.h"
#include "EPalEnergyType.h"
#include "PalBaseCampEnergyStorageInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectEnergyStorageModel.generated.h"

class UPalMapObjectEnergyStorageModel;

UCLASS()
class UPalMapObjectEnergyStorageModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampEnergyStorageInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEnergyAmountDelegate, UPalMapObjectEnergyStorageModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateEnergyAmountDelegate OnUpdateStoredEnergyAmountDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalEnergyType EnergyType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float MaxEnergyStorage;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_StoredEnergyAmount)
    float StoredEnergyAmount;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float ConsumeEnergySpeed;
    
public:
    UPalMapObjectEnergyStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION()
    void OnRep_StoredEnergyAmount();
    
public:
    UFUNCTION(BlueprintPure)
    float GetStoredEnergyAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxEnergyStorage() const;
    
    UFUNCTION(BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    

    // Fix for true pure virtual functions not being implemented
};


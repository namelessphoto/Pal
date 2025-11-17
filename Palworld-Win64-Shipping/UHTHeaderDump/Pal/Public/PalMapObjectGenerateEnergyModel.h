#pragma once
#include "CoreMinimal.h"
#include "EPalEnergyType.h"
#include "PalBaseCampEnergyGeneratorInterface.h"
#include "PalBaseCampEnergyStorageInterface.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectGenerateEnergyModel.generated.h"

class UPalMapObjectGenerateEnergyModel;
class UPalWorkBase;
class UPalWorkOnlyJoin;

UCLASS()
class UPalMapObjectGenerateEnergyModel : public UPalMapObjectConcreteModelBase, public IPalBaseCampEnergyGeneratorInterface, public IPalBaseCampEnergyStorageInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEnergyAmountDelegate, UPalMapObjectGenerateEnergyModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateEnergyAmountDelegate OnUpdateStoredEnergyAmountDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalEnergyType EnergyType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float GenerateEnergyRateByWorker;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float MaxEnergyStorage;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_StoredEnergyAmount)
    float StoredEnergyAmount;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float ConsumeEnergySpeed;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ObtainExpByGenerateEnergy;
    
public:
    UPalMapObjectGenerateEnergyModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work);
    
    UFUNCTION()
    void OnTickCharacterWorkWait_ServerInternal(UPalWorkOnlyJoin* Work);
    
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


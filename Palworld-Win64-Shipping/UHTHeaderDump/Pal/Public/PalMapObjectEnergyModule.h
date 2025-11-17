#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EPalEnergyType.h"
#include "EPalMapObjectEnergyModuleStatusType.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectEnergyModule.generated.h"

class UPalMapObjectEnergyModule;

UCLASS(BlueprintType)
class UPalMapObjectEnergyModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalMapObjectEnergyModule*, Module);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfMulticastDelegate OnUpdateCurrentStateDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalEnergyType EnergyType;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float ConsumeEnergySpeed;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    float CurrentConsumeEnergySpeed;
    
    UPROPERTY(Transient, VisibleInstanceOnly, ReplicatedUsing=OnRep_CurrentState)
    EPalMapObjectEnergyModuleStatusType CurrentState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    bool bRequiredConsumeEnergy;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    FGuid StatusHUDId;
    
public:
    UPalMapObjectEnergyModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveHUD();
    
protected:
    UFUNCTION()
    void OnRep_CurrentState();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRequiredEnergy() const;
    
    UFUNCTION(BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    
    UFUNCTION(BlueprintPure)
    EPalMapObjectEnergyModuleStatusType GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentConsumeEnergySpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetConsumeEnergySpeed() const;
    
    UFUNCTION(BlueprintPure)
    bool CanConsumeEnergy() const;
    
};


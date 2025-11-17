#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalBaseCampModuleEnergyState.h"
#include "PalBaseCampModuleEnergy_FunctionBase.generated.h"

class UPalBaseCampModuleEnergy_FunctionBase;
class UPalMapObjectGenerateEnergyModel;

UCLASS()
class UPalBaseCampModuleEnergy_FunctionBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateEnergyAmountDelegate, UPalBaseCampModuleEnergy_FunctionBase*, Function);
    
    UPROPERTY(BlueprintAssignable)
    FUpdateEnergyAmountDelegate OnUpdateEnergyAmountDelegate;
    
protected:
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    TArray<FGuid> EnergyGeneratorConcreteModelIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> EnergyStorageConcreteModelIds;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TArray<FGuid> EnergyConsumerConcreteModelIds;
    
    UPROPERTY(Replicated, Transient, VisibleInstanceOnly)
    EPalBaseCampModuleEnergyState CurrentState;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    float ProvideWaitRemainTime;
    
public:
    UPalBaseCampModuleEnergy_FunctionBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION()
    void InvokeOnUpdateEnergyAmount(UPalMapObjectGenerateEnergyModel* Model);
    
};


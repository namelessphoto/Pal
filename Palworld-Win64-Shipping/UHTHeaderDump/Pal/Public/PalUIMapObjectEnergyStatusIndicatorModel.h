#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EPalEnergyType.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalUIMapObjectEnergyStatusIndicatorModel;

UCLASS(BlueprintType)
class PAL_API UPalUIMapObjectEnergyStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIMapObjectEnergyStatusIndicatorModel*, Model);
    
    UPROPERTY(BlueprintAssignable)
    FReturnSelfDelegate OnUpdateStoredEnergyAmountDelegate;
    
    UPalUIMapObjectEnergyStatusIndicatorModel();

    UFUNCTION(BlueprintPure)
    float GetStoredEnergyAmount() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxEnergyStorage() const;
    
    UFUNCTION(BlueprintPure)
    EPalEnergyType GetEnergyType() const;
    
    UFUNCTION(BlueprintPure)
    UPalMapObjectConcreteModelBase* GetConcreteModel() const;
    
};


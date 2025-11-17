#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel.h"
#include "PalUIMapObjectEnergyStatusIndicatorModel_EnergyStorage.generated.h"

class UPalMapObjectEnergyStorageModel;

UCLASS()
class PAL_API UPalUIMapObjectEnergyStatusIndicatorModel_EnergyStorage : public UPalUIMapObjectEnergyStatusIndicatorModel {
    GENERATED_BODY()
public:
    UPalUIMapObjectEnergyStatusIndicatorModel_EnergyStorage();

protected:
    UFUNCTION()
    void OnUpdateStoredEnergyAmount(UPalMapObjectEnergyStorageModel* EnergyStorageModel);
    
};


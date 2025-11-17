#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectHeatSourceModel.generated.h"

class UPalMapObjectEnergyModule;
class UPalWorkBase;

UCLASS()
class PAL_API UPalMapObjectHeatSourceModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectHeatSourceModel();

private:
    UFUNCTION()
    void OnUpdateEnergyModuleState_ServerInternal(UPalMapObjectEnergyModule* EnergyModule);
    
    UFUNCTION()
    void OnUpdateAssignedCharacter_ServerInternal(UPalWorkBase* Work);
    
};


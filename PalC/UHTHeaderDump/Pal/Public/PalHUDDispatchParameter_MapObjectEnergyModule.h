#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectEnergyModule.generated.h"

class UPalMapObjectEnergyModule;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_MapObjectEnergyModule : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectEnergyModule* EnergyModule;
    
    UPalHUDDispatchParameter_MapObjectEnergyModule();

};


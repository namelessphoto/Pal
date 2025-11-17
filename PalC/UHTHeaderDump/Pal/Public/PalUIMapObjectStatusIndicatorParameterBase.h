#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(BlueprintType)
class UPalUIMapObjectStatusIndicatorParameterBase : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPalUIMapObjectStatusIndicatorParameterBase();

    UFUNCTION(BlueprintPure)
    UPalMapObjectConcreteModelBase* GetConcreteModel() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectEnergyStatusIndicatorParameterBase.generated.h"

class UPalUIMapObjectEnergyStatusIndicatorModel;

UCLASS()
class PAL_API UPalUIMapObjectEnergyStatusIndicatorParameterBase : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    UPalUIMapObjectEnergyStatusIndicatorModel* UIModel;
    
public:
    UPalUIMapObjectEnergyStatusIndicatorParameterBase();

    UFUNCTION(BlueprintPure)
    UPalUIMapObjectEnergyStatusIndicatorModel* GetUIModel() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_FishPond.generated.h"

class UPalUIMapObjectFishPondStatusIndicatorModel;

UCLASS()
class UPalUIMapObjectStatusIndicatorParameter_FishPond : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPalUIMapObjectFishPondStatusIndicatorModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_FishPond();

private:
    UFUNCTION(BlueprintPure)
    UPalUIMapObjectFishPondStatusIndicatorModel* GetUIModel() const;
    
};


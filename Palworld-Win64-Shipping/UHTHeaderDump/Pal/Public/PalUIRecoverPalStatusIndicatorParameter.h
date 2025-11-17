#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIRecoverPalStatusIndicatorParameter.generated.h"

class UPalMapObjectRecoverOtomoModel;

UCLASS()
class UPalUIRecoverPalStatusIndicatorParameter : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPalUIRecoverPalStatusIndicatorParameter();

    UFUNCTION(BlueprintPure)
    bool TryGetConcreteModel(UPalMapObjectRecoverOtomoModel*& ConcreteModel) const;
    
};


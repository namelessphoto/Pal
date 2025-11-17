#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelEffectGrantParameterBase.h"
#include "PalMapObjectModelEffectGrantParameter_AccumulateTrigger.generated.h"

UCLASS(Abstract)
class PAL_API UPalMapObjectModelEffectGrantParameter_AccumulateTrigger : public UPalMapObjectModelEffectGrantParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPalMapObjectModelEffectGrantParameter_AccumulateTrigger();

};


#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelEffectBase.h"
#include "PalMapObjectModelEffect_AccumulateTrigger.generated.h"

UCLASS(Abstract)
class PAL_API UPalMapObjectModelEffect_AccumulateTrigger : public UPalMapObjectModelEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    float AccumulateValue;
    
public:
    UPalMapObjectModelEffect_AccumulateTrigger();

};


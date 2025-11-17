#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampPassiveEffectBase.h"
#include "PalBaseCampPassiveEffect_SanityDecreaseSuppressor.generated.h"

UCLASS()
class UPalBaseCampPassiveEffect_SanityDecreaseSuppressor : public UPalBaseCampPassiveEffectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient, VisibleInstanceOnly)
    float SanityDecreaseSuppressionRate;
    
public:
    UPalBaseCampPassiveEffect_SanityDecreaseSuppressor();

};


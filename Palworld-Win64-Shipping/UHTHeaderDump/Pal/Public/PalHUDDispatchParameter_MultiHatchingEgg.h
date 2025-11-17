#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MultiHatchingEgg.generated.h"

class UPalMapObjectMultiHatchingEggModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_MultiHatchingEgg : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectMultiHatchingEggModel* HatchingEggModel;
    
    UPalHUDDispatchParameter_MultiHatchingEgg();

};


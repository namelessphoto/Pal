#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HatchingEgg.generated.h"

class UPalMapObjectHatchingEggModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_HatchingEgg : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectHatchingEggModel* HatchingEggModel;
    
    UPalHUDDispatchParameter_HatchingEgg();

};


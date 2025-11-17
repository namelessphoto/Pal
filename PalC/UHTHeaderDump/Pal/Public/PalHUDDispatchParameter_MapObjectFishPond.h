#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectFishPond.generated.h"

class UPalUIMapObjectFishPondModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_MapObjectFishPond : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalUIMapObjectFishPondModel* Model;
    
    UPalHUDDispatchParameter_MapObjectFishPond();

};


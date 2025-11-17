#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalMapObjectMultiplayParameter.generated.h"

class APalMapObject;

UCLASS(BlueprintType)
class UPalMapObjectMultiplayParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    APalMapObject* MapObject;
    
    UPalMapObjectMultiplayParameter();

};


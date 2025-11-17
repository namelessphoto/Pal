#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalMapObjectHPWorldHUDParameter.generated.h"

class APalMapObject;

UCLASS(BlueprintType)
class UPalMapObjectHPWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    APalMapObject* MapObject;
    
    UPalMapObjectHPWorldHUDParameter();

};


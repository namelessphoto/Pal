#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObject.generated.h"

class UPalMapObjectConcreteModelBase;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_MapObject : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectConcreteModelBase* MapObjectConcreteModel;
    
    UPalHUDDispatchParameter_MapObject();

};


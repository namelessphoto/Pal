#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ConvertItem.generated.h"

class UPalMapObjectConvertItemModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_ConvertItem : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalMapObjectConvertItemModel* ConvertItemModel;
    
    UPalHUDDispatchParameter_ConvertItem();

};


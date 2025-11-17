#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIBuildingParameter.generated.h"

UCLASS(BlueprintType)
class UPalUIBuildingParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    int32 BuildObjectId;
    
    UPalUIBuildingParameter();

};


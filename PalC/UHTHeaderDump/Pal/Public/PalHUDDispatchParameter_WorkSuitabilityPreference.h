#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_WorkSuitabilityPreference.generated.h"

class UPalUIWorkSuitabilitySettingModel;

UCLASS(BlueprintType)
class UPalHUDDispatchParameter_WorkSuitabilityPreference : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    UPalUIWorkSuitabilitySettingModel* Model;
    
    UPalHUDDispatchParameter_WorkSuitabilityPreference();

};


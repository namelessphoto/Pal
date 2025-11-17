#pragma once
#include "CoreMinimal.h"
#include "EPalWorkSuitability.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIMapObjectStatusIndicatorBase.generated.h"

UCLASS(EditInlineNew)
class UPalUIMapObjectStatusIndicatorBase : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPalUIMapObjectStatusIndicatorBase();

    UFUNCTION(BlueprintPure)
    EPalWorkSuitability GetWorkSuitability() const;
    
};


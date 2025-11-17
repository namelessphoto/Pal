#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActivatableWidget -FallbackName=CommonActivatableWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseCaptureMode -FallbackName=EMouseCaptureMode
#include "EPalWidgetInputMode.h"
#include "PalActivatableWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPalActivatableWidget : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EPalWidgetInputMode InputConfig;
    
    UPROPERTY(EditDefaultsOnly)
    EMouseCaptureMode GameMouseCaptureMode;
    
public:
    UPalActivatableWidget();

};


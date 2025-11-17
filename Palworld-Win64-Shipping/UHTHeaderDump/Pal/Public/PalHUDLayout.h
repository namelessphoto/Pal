#pragma once
#include "CoreMinimal.h"
#include "PalActivatableWidget.h"
#include "PalHUDLayout.generated.h"

class UCommonActivatableWidget;

UCLASS(Abstract, EditInlineNew)
class UPalHUDLayout : public UPalActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UCommonActivatableWidget> EscapeMenuClass;
    
public:
    UPalHUDLayout();

};


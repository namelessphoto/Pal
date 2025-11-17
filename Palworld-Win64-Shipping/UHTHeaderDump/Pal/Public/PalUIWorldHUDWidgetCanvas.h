#pragma once
#include "CoreMinimal.h"
#include "PalUserWidget.h"
#include "PalUIWorldHUDWidgetCanvas.generated.h"

class UPalUserWidgetWorldHUD;

UCLASS(EditInlineNew)
class UPalUIWorldHUDWidgetCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    UPalUIWorldHUDWidgetCanvas();

    UFUNCTION(BlueprintImplementableEvent)
    void RemoveWidget(UPalUserWidgetWorldHUD* Widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddWidget(UPalUserWidgetWorldHUD* Widget);
    
};


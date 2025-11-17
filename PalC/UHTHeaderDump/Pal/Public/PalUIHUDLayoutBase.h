#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonActivatableWidget -FallbackName=CommonActivatableWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "PalUIHUDLayoutBase.generated.h"

class UPalUserWidget;
class UPalUserWidgetWorldHUD;

UCLASS(EditInlineNew)
class UPalUIHUDLayoutBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPalUIHUDLayoutBase();

    UFUNCTION()
    void VisibilityOverride(ESlateVisibility changedVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveWorldHUD(UPalUserWidgetWorldHUD* Widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void RemoveHUD(UPalUserWidget* Widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddWorldHUD(UPalUserWidgetWorldHUD* Widget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AddHUD(UPalUserWidget* Widget, const int32 ZOrder);
    
};


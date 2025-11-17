#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "PalUserWidgetWorldHUD.h"
#include "PalUserWidgetTimerGaugeBase.generated.h"

UCLASS(EditInlineNew)
class PAL_API UPalUserWidgetTimerGaugeBase : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FTimerHandle targetTimerHandle;
    
    UPROPERTY()
    float Time;
    
public:
    UPalUserWidgetTimerGaugeBase();

protected:
    UFUNCTION()
    void VisibilityForceHidden(ESlateVisibility changedVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGaugeText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetGaugePercent(float Percent);
    
};


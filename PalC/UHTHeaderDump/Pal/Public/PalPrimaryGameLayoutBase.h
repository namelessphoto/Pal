#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonGame -ObjectName=PrimaryGameLayout -FallbackName=PrimaryGameLayout
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "EPalFadeWidgetLayerType.h"
#include "PalUICommonItemInfoDisplayData.h"
#include "PalUICommonRewardDisplayData.h"
#include "PalUICommonWarningDisplayData.h"
#include "PalPrimaryGameLayoutBase.generated.h"

class UPalHUDDispatchParameter_FadeWidget;
class UWidget;

UCLASS(EditInlineNew)
class PAL_API UPalPrimaryGameLayoutBase : public UPrimaryGameLayout {
    GENERATED_BODY()
public:
    UPalPrimaryGameLayoutBase();

    UFUNCTION(BlueprintImplementableEvent)
    void ShowLiftIcon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowFocusCursor(UWidget* TargetWidget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCommonWarning(const FPalUICommonWarningDisplayData& WarningDisplayData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetVisibilityRootLayout(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetupLiftIcon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideLiftIcon();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideFocusCursor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCommonWarning(const FGuid PreserveID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCommonReward();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HideCommonItemInfo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void FadeOut(EPalFadeWidgetLayerType LayerType, UPalHUDDispatchParameter_FadeWidget* FadeParameter);
    
    UFUNCTION(BlueprintImplementableEvent)
    void FadeIn(EPalFadeWidgetLayerType LayerType);
    
};


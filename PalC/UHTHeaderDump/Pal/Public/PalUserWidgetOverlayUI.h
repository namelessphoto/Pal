#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EInputEvent -FallbackName=EInputEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnInputAction__DelegateSignature -FallbackName=OnInputActionDelegate
#include "PalUIActionBindData.h"
#include "PalUserWidgetStackableUI.h"
#include "PalUserWidgetOverlayUI.generated.h"

UCLASS(Abstract, EditInlineNew)
class UPalUserWidgetOverlayUI : public UPalUserWidgetStackableUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool IsEnableCancelAction;
    
private:
    UPROPERTY(Transient)
    FPalUIActionBindData CancelInputHandle;
    
    UPROPERTY(Transient)
    FPalUIActionBindData EscInputHandle;
    
    UPROPERTY(Transient)
    FPalUIActionBindData TabInputHandle;
    
public:
    UPalUserWidgetOverlayUI();

    UFUNCTION(BlueprintCallable)
    void ResetCancelAction();
    
    UFUNCTION(BlueprintCallable)
    void OverrideCancelAction(bool IsDisplayActionBar, TEnumAsByte<EInputEvent> InputType, FOnInputAction Callback);
    
    UFUNCTION(BlueprintCallable)
    void ClearCancelAction();
    
};


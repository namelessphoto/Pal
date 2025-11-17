#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "CommonUserWidget.h"
#include "OnWidgetActivationChangedDelegate.h"
#include "CommonActivatableWidget.generated.h"

class UCommonActivatableWidget;
class UCommonInputActionDomain;
class UWidget;

UCLASS(EditInlineNew)
class COMMONUI_API UCommonActivatableWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bIsBackHandler;
    
    UPROPERTY(EditAnywhere)
    bool bIsBackActionDisplayedInActionBar;
    
    UPROPERTY(EditAnywhere)
    bool bAutoActivate;
    
    UPROPERTY(EditAnywhere)
    bool bSupportsActivationFocus;
    
    UPROPERTY(EditAnywhere)
    bool bIsModal;
    
    UPROPERTY(EditAnywhere)
    bool bAutoRestoreFocus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideActionDomain;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride;
    
private:
    UPROPERTY(BlueprintAssignable)
    FOnWidgetActivationChanged BP_OnWidgetActivated;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetActivationChanged BP_OnWidgetDeactivated;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(Export, Transient)
    TArray<TWeakObjectPtr<UCommonActivatableWidget>> VisibilityBoundWidgets;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bSetVisibilityOnActivated;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility ActivatedVisibility;
    
    UPROPERTY(EditAnywhere)
    bool bSetVisibilityOnDeactivated;
    
    UPROPERTY(EditAnywhere)
    ESlateVisibility DeactivatedVisibility;
    
public:
    UCommonActivatableWidget();

    UFUNCTION(BlueprintCallable)
    void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
    
    UFUNCTION(BlueprintPure)
    bool IsActivated() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetDesiredFocusTarget() const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateWidget();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool BP_OnHandleBackAction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDeactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnActivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    UWidget* BP_GetDesiredFocusTarget() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void BindVisibilityToActivation(UCommonActivatableWidget* ActivatableWidget);
    
    UFUNCTION(BlueprintCallable)
    void ActivateWidget();
    
};


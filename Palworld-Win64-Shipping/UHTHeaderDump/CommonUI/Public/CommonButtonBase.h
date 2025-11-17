#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputMode -FallbackName=ECommonInputMode
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonClickMethod -FallbackName=EButtonClickMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonPressMethod -FallbackName=EButtonPressMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EButtonTouchMethod -FallbackName=EButtonTouchMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateSound -FallbackName=SlateSound
#include "CommonButtonBaseClickedDelegate.h"
#include "CommonSelectedStateChangedBaseDelegate.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonButtonBase.generated.h"

class UCommonActionWidget;
class UCommonButtonStyle;
class UCommonTextStyle;
class UMaterialInstanceDynamic;
class USoundBase;

UCLASS(Abstract, EditInlineNew)
class COMMONUI_API UCommonButtonBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 minHeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonButtonStyle> Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHideInputAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateSound PressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateSound HoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateSound SelectedPressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateSound SelectedHoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateSound LockedPressedSlateSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateSound LockedHoveredSlateSoundOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bApplyAlphaOnDisable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bLocked: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bSelectable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bShouldSelectUponReceivingFocus: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bInteractableWhenSelected: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bToggleable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bTriggerClickedAfterSelection: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bDisplayInputActionWhenNotInteractable: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bHideInputActionWithKeyboard: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bShouldUseFallbackDefaultInputAction: 1;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonClickMethod> ClickMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod> TouchMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonPressMethod> PressMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 InputPriority;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle TriggeringInputAction;
    
protected:
    UPROPERTY(BlueprintAssignable)
    FCommonSelectedStateChangedBase OnSelectedChangedBase;
    
    UPROPERTY(BlueprintAssignable)
    FCommonButtonBaseClicked OnButtonBaseClicked;
    
    UPROPERTY(BlueprintAssignable)
    FCommonButtonBaseClicked OnButtonBaseDoubleClicked;
    
    UPROPERTY(BlueprintAssignable)
    FCommonButtonBaseClicked OnButtonBaseHovered;
    
    UPROPERTY(BlueprintAssignable)
    FCommonButtonBaseClicked OnButtonBaseUnhovered;
    
private:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bIsPersistentBinding;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    ECommonInputMode InputModeOverride;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SingleMaterialStyleMID;
    
    UPROPERTY()
    FButtonStyle NormalStyle;
    
    UPROPERTY()
    FButtonStyle SelectedStyle;
    
    UPROPERTY()
    FButtonStyle DisabledStyle;
    
    UPROPERTY()
    FButtonStyle LockedStyle;
    
    UPROPERTY(Transient)
    uint8 bStopDoubleClickPropagation: 1;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCommonActionWidget* InputActionWidget;
    
public:
    UCommonButtonBase();

protected:
    UFUNCTION(BlueprintCallable)
    void StopDoubleClickPropagation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonButtonStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedPressedSoundOverride(USoundBase* Sound);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSelectedHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressedSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedPressedSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetLockedHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetIsToggleable(bool bInIsToggleable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelectable(bool bInIsSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetIsLocked(bool bInIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool bInIsFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName& InProgressMaterialParam);
    
    UFUNCTION(BlueprintCallable)
    void SetHoveredSoundOverride(USoundBase* Sound);
    
    UFUNCTION(BlueprintCallable)
    void SetHideInputAction(bool bInHideInputAction);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggeringInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTriggeredInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    
    UFUNCTION()
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCurrentTextStyleChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionProgress(float HeldPercent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionComplete();
    
    UFUNCTION()
    void NativeOnActionProgress(float HeldPercent);
    
    UFUNCTION()
    void NativeOnActionComplete();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractionEnabled() const;
    
protected:
    UFUNCTION()
    void HandleTriggeringActionCommited(bool& bPassThrough);
    
    UFUNCTION()
    void HandleFocusReceived();
    
    UFUNCTION()
    void HandleFocusLost();
    
    UFUNCTION()
    void HandleButtonReleased();
    
    UFUNCTION()
    void HandleButtonPressed();
    
    UFUNCTION()
    void HandleButtonClicked();
    
public:
    UFUNCTION(BlueprintPure)
    UCommonButtonStyle* GetStyle() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetSingleMaterialStyleMID() const;
    
    UFUNCTION(BlueprintPure)
    bool GetShouldSelectUponReceivingFocus() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSelected() const;
    
    UFUNCTION(BlueprintPure)
    bool GetLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsFocusable() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInputAction(FDataTableRowHandle& InputActionRow) const;
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<UCommonTextStyle> GetCurrentTextStyleClass() const;
    
    UFUNCTION(BlueprintPure)
    UCommonTextStyle* GetCurrentTextStyle() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentCustomPadding(FMargin& OutCustomPadding) const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentButtonPadding(FMargin& OutButtonPadding) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableButtonWithReason(const FText& DisabledReason);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnUnhovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSelected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnReleased();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnPressed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnLockedChanged(bool bIsLocked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnLockDoubleClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnLockClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHovered();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnFocusReceived();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnFocusLost();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDoubleClicked();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDisabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDeselected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnClicked();
    
};


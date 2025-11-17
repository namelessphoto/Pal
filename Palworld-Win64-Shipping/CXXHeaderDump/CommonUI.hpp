#ifndef UE4SS_SDK_CommonUI_HPP
#define UE4SS_SDK_CommonUI_HPP

#include "CommonUI_enums.hpp"

struct FCommonAnalogCursorSettings
{
    int32 PreprocessorPriority;
    bool bEnableCursorAcceleration;
    float CursorAcceleration;
    float CursorMaxSpeed;
    float CursorDeadZone;
    float HoverSlowdownFactor;
    float ScrollDeadZone;
    float ScrollUpdatePeriod;
    float ScrollMultiplier;

};

struct FCommonButtonStyleOptionalSlateSound
{
    bool bHasSound;
    FSlateSound Sound;

};

struct FCommonInputActionDataBase : public FTableRowBase
{
    FText DisplayName;
    FText HoldDisplayName;
    int32 NavBarPriority;
    FCommonInputTypeInfo KeyboardInputTypeInfo;
    FCommonInputTypeInfo DefaultGamepadInputTypeInfo;
    TMap<class FName, class FCommonInputTypeInfo> GamepadInputOverrides;
    FCommonInputTypeInfo TouchInputTypeInfo;

};

struct FCommonInputActionHandlerData
{
    FDataTableRowHandle InputActionRow;
    EInputActionState State;

};

struct FCommonInputTypeInfo
{
    FKey Key;
    EInputActionState OverrrideState;
    bool bActionRequiresHold;
    float HoldTime;
    FSlateBrush OverrideBrush;

};

struct FCommonNumberFormattingOptions
{
    TEnumAsByte<ERoundingMode> RoundingMode;
    bool UseGrouping;
    int32 MinimumIntegralDigits;
    int32 MaximumIntegralDigits;
    int32 MinimumFractionalDigits;
    int32 MaximumFractionalDigits;

};

struct FCommonRegisteredTabInfo
{
    int32 TabIndex;
    class UCommonButtonBase* TabButton;
    class UWidget* ContentInstance;

};

struct FRichTextIconData : public FTableRowBase
{
    FText DisplayName;
    TSoftObjectPtr<UObject> ResourceObject;
    FVector2D ImageSize;

};

struct FUIActionKeyMapping
{
    FKey Key;
    float HoldTime;

};

struct FUIActionTag : public FUITag
{
};

struct FUIInputAction
{
    FUIActionTag ActionTag;
    FText DefaultDisplayName;
    TArray<FUIActionKeyMapping> KeyMappings;

};

struct FUITag : public FGameplayTag
{
};

class ICommonActionHandlerInterface : public IInterface
{
};

class ICommonBoundActionButtonInterface : public IInterface
{
};

class ICommonPoolableWidgetInterface : public IInterface
{

    void OnReleaseToPool();
    void OnAcquireFromPool();
};

class UAnalogSlider : public USlider
{
    FAnalogSliderOnAnalogCapture OnAnalogCapture;
    void OnFloatValueChangedEvent(float Value);

};

class UCommonActionWidget : public UWidget
{
    FCommonActionWidgetOnInputMethodChanged OnInputMethodChanged;
    void OnInputMethodChanged(bool bUsingGamepad);
    FSlateBrush ProgressMaterialBrush;
    FName ProgressMaterialParam;
    FSlateBrush IconRimBrush;
    TArray<FDataTableRowHandle> InputActions;
    class UMaterialInstanceDynamic* ProgressDynamicMaterial;

    void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);
    void SetInputAction(FDataTableRowHandle InputActionRow);
    void SetIconRimBrush(FSlateBrush InIconRimBrush);
    void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
    bool IsHeldAction();
    FSlateBrush GetIcon();
    FText GetDisplayText();
};

class UCommonActivatableWidget : public UCommonUserWidget
{
    bool bIsBackHandler;
    bool bIsBackActionDisplayedInActionBar;
    bool bAutoActivate;
    bool bSupportsActivationFocus;
    bool bIsModal;
    bool bAutoRestoreFocus;
    bool bOverrideActionDomain;
    TSoftObjectPtr<UCommonInputActionDomain> ActionDomainOverride;
    FCommonActivatableWidgetBP_OnWidgetActivated BP_OnWidgetActivated;
    void OnWidgetActivationChanged();
    FCommonActivatableWidgetBP_OnWidgetDeactivated BP_OnWidgetDeactivated;
    void OnWidgetActivationChanged();
    bool bIsActive;
    TArray<TWeakObjectPtr<UCommonActivatableWidget>> VisibilityBoundWidgets;
    bool bSetVisibilityOnActivated;
    ESlateVisibility ActivatedVisibility;
    bool bSetVisibilityOnDeactivated;
    ESlateVisibility DeactivatedVisibility;

    void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive);
    bool IsActivated();
    class UWidget* GetDesiredFocusTarget();
    void DeactivateWidget();
    bool BP_OnHandleBackAction();
    void BP_OnDeactivated();
    void BP_OnActivated();
    class UWidget* BP_GetDesiredFocusTarget();
    void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);
    void ActivateWidget();
};

class UCommonActivatableWidgetContainerBase : public UWidget
{
    ECommonSwitcherTransition TransitionType;
    ETransitionCurve TransitionCurveType;
    float TransitionDuration;
    TArray<class UCommonActivatableWidget*> WidgetList;
    class UCommonActivatableWidget* DisplayedWidget;
    FUserWidgetPool GeneratedWidgetsPool;

    void SetTransitionDuration(float Duration);
    void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
    float GetTransitionDuration();
    class UCommonActivatableWidget* GetActiveWidget();
    void ClearWidgets();
    class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> ActivatableWidgetClass);
};

class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
};

class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
    TSubclassOf<class UCommonActivatableWidget> RootContentWidgetClass;
    class UCommonActivatableWidget* RootContentWidget;

};

class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
};

class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
    ECommonSwitcherTransition TransitionType;
    ETransitionCurve TransitionCurveType;
    float TransitionDuration;

    void SetDisableTransitionAnimation(bool bDisableAnimation);
    bool IsTransitionPlaying();
    bool IsCurrentlySwitching();
    bool HasWidgets();
    void ActivatePreviousWidget(bool bCanWrap);
    void ActivateNextWidget(bool bCanWrap);
};

class UCommonBorder : public UBorder
{
    TSubclassOf<class UCommonBorderStyle> Style;
    bool bReducePaddingBySafezone;
    FMargin MinimumPadding;

    void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
};

class UCommonBorderStyle : public UObject
{
    FSlateBrush Background;

    void GetBackgroundBrush(FSlateBrush& Brush);
};

class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
    TSubclassOf<class UCommonButtonBase> ActionButtonClass;
    bool bDisplayOwningPlayerActionsOnly;
    bool bIgnoreDuplicateActions;

    void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
};

class UCommonBoundActionButton : public UCommonButtonBase
{
    class UCommonTextBlock* Text_ActionName;

    void OnUpdateInputAction();
};

class UCommonButtonBase : public UCommonUserWidget
{
    int32 MinWidth;
    int32 minHeight;
    TSubclassOf<class UCommonButtonStyle> Style;
    bool bHideInputAction;
    FSlateSound PressedSlateSoundOverride;
    FSlateSound HoveredSlateSoundOverride;
    FSlateSound SelectedPressedSlateSoundOverride;
    FSlateSound SelectedHoveredSlateSoundOverride;
    FSlateSound LockedPressedSlateSoundOverride;
    FSlateSound LockedHoveredSlateSoundOverride;
    uint8 bApplyAlphaOnDisable;
    uint8 bLocked;
    uint8 bSelectable;
    uint8 bShouldSelectUponReceivingFocus;
    uint8 bInteractableWhenSelected;
    uint8 bToggleable;
    uint8 bTriggerClickedAfterSelection;
    uint8 bDisplayInputActionWhenNotInteractable;
    uint8 bHideInputActionWithKeyboard;
    uint8 bShouldUseFallbackDefaultInputAction;
    TEnumAsByte<EButtonClickMethod> ClickMethod;
    TEnumAsByte<EButtonTouchMethod> TouchMethod;
    TEnumAsByte<EButtonPressMethod> PressMethod;
    int32 InputPriority;
    FDataTableRowHandle TriggeringInputAction;
    FCommonButtonBaseOnSelectedChangedBase OnSelectedChangedBase;
    void CommonSelectedStateChangedBase(class UCommonButtonBase* Button, bool Selected);
    FCommonButtonBaseOnButtonBaseClicked OnButtonBaseClicked;
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseDoubleClicked OnButtonBaseDoubleClicked;
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseHovered OnButtonBaseHovered;
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    FCommonButtonBaseOnButtonBaseUnhovered OnButtonBaseUnhovered;
    void CommonButtonBaseClicked(class UCommonButtonBase* Button);
    bool bIsPersistentBinding;
    ECommonInputMode InputModeOverride;
    class UMaterialInstanceDynamic* SingleMaterialStyleMID;
    FButtonStyle NormalStyle;
    FButtonStyle SelectedStyle;
    FButtonStyle DisabledStyle;
    FButtonStyle LockedStyle;
    uint8 bStopDoubleClickPropagation;
    class UCommonActionWidget* InputActionWidget;

    void StopDoubleClickPropagation();
    void SetTriggeringInputAction(const FDataTableRowHandle& InputActionRow);
    void SetTriggeredInputAction(const FDataTableRowHandle& InputActionRow);
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
    void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
    void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
    void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
    void SetSelectedPressedSoundOverride(class USoundBase* Sound);
    void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
    void SetSelectedHoveredSoundOverride(class USoundBase* Sound);
    void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
    void SetPressedSoundOverride(class USoundBase* Sound);
    void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
    void SetLockedPressedSoundOverride(class USoundBase* Sound);
    void SetLockedHoveredSoundOverride(class USoundBase* Sound);
    void SetIsToggleable(bool bInIsToggleable);
    void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
    void SetIsSelectable(bool bInIsSelectable);
    void SetIsLocked(bool bInIsLocked);
    void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
    void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
    void SetIsFocusable(bool bInIsFocusable);
    void SetInputActionProgressMaterial(const FSlateBrush& InProgressMaterialBrush, const FName& InProgressMaterialParam);
    void SetHoveredSoundOverride(class USoundBase* Sound);
    void SetHideInputAction(bool bInHideInputAction);
    void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
    void OnTriggeringInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    void OnTriggeredInputActionChanged(const FDataTableRowHandle& NewTriggeredAction);
    void OnInputMethodChanged(ECommonInputType CurrentInputType);
    void OnCurrentTextStyleChanged();
    void OnActionProgress(float HeldPercent);
    void OnActionComplete();
    void NativeOnActionProgress(float HeldPercent);
    void NativeOnActionComplete();
    bool IsPressed();
    bool IsInteractionEnabled();
    void HandleTriggeringActionCommited(bool& bPassThrough);
    void HandleFocusReceived();
    void HandleFocusLost();
    void HandleButtonReleased();
    void HandleButtonPressed();
    void HandleButtonClicked();
    class UCommonButtonStyle* GetStyle();
    class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
    bool GetShouldSelectUponReceivingFocus();
    bool GetSelected();
    bool GetLocked();
    bool GetIsFocusable();
    bool GetInputAction(FDataTableRowHandle& InputActionRow);
    TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
    class UCommonTextStyle* GetCurrentTextStyle();
    void GetCurrentCustomPadding(FMargin& OutCustomPadding);
    void GetCurrentButtonPadding(FMargin& OutButtonPadding);
    void DisableButtonWithReason(const FText& DisabledReason);
    void ClearSelection();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void BP_OnReleased();
    void BP_OnPressed();
    void BP_OnLockedChanged(bool bIsLocked);
    void BP_OnLockDoubleClicked();
    void BP_OnLockClicked();
    void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);
    void BP_OnHovered();
    void BP_OnFocusReceived();
    void BP_OnFocusLost();
    void BP_OnEnabled();
    void BP_OnDoubleClicked();
    void BP_OnDisabled();
    void BP_OnDeselected();
    void BP_OnClicked();
};

class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
    FCommonButtonGroupBaseOnSelectedButtonBaseChanged OnSelectedButtonBaseChanged;
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnHoveredButtonBaseChanged OnHoveredButtonBaseChanged;
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnButtonBaseClicked OnButtonBaseClicked;
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnButtonBaseDoubleClicked OnButtonBaseDoubleClicked;
    void SimpleButtonBaseGroupDelegate(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
    FCommonButtonGroupBaseOnSelectionCleared OnSelectionCleared;
    void OnSelectionCleared();
    bool bSelectionRequired;

    void SetSelectionRequired(bool bRequireSelection);
    void SelectPreviousButton(bool bAllowWrap);
    void SelectNextButton(bool bAllowWrap);
    void SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound);
    void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);
    void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);
    void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);
    void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);
    void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);
    bool HasAnyButtons();
    int32 GetSelectedButtonIndex();
    class UCommonButtonBase* GetSelectedButtonBase();
    int32 GetHoveredButtonIndex();
    int32 GetButtonCount();
    class UCommonButtonBase* GetButtonBaseAtIndex(int32 Index);
    int32 FindButtonIndex(const class UCommonButtonBase* ButtonToFind);
    void DeselectAll();
};

class UCommonButtonInternalBase : public UButton
{
    FCommonButtonInternalBaseOnDoubleClicked OnDoubleClicked;
    void OnButtonClickedEvent();
    int32 MinWidth;
    int32 minHeight;
    bool bButtonEnabled;
    bool bInteractionEnabled;

};

class UCommonButtonStyle : public UObject
{
    bool bSingleMaterial;
    FSlateBrush SingleMaterialBrush;
    FSlateBrush NormalBase;
    FSlateBrush NormalHovered;
    FSlateBrush NormalPressed;
    FSlateBrush SelectedBase;
    FSlateBrush SelectedHovered;
    FSlateBrush SelectedPressed;
    FSlateBrush Disabled;
    FMargin ButtonPadding;
    FMargin CustomPadding;
    int32 MinWidth;
    int32 minHeight;
    TSubclassOf<class UCommonTextStyle> NormalTextStyle;
    TSubclassOf<class UCommonTextStyle> NormalHoveredTextStyle;
    TSubclassOf<class UCommonTextStyle> SelectedTextStyle;
    TSubclassOf<class UCommonTextStyle> SelectedHoveredTextStyle;
    TSubclassOf<class UCommonTextStyle> DisabledTextStyle;
    FSlateSound PressedSlateSound;
    FCommonButtonStyleOptionalSlateSound SelectedPressedSlateSound;
    FCommonButtonStyleOptionalSlateSound LockedPressedSlateSound;
    FSlateSound HoveredSlateSound;
    FCommonButtonStyleOptionalSlateSound SelectedHoveredSlateSound;
    FCommonButtonStyleOptionalSlateSound LockedHoveredSlateSound;

    class UCommonTextStyle* GetSelectedTextStyle();
    void GetSelectedPressedBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetSelectedHoveredTextStyle();
    void GetSelectedHoveredBrush(FSlateBrush& Brush);
    void GetSelectedBaseBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetNormalTextStyle();
    void GetNormalPressedBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetNormalHoveredTextStyle();
    void GetNormalHoveredBrush(FSlateBrush& Brush);
    void GetNormalBaseBrush(FSlateBrush& Brush);
    void GetMaterialBrush(FSlateBrush& Brush);
    class UCommonTextStyle* GetDisabledTextStyle();
    void GetDisabledBrush(FSlateBrush& Brush);
    void GetCustomPadding(FMargin& OutCustomPadding);
    void GetButtonPadding(FMargin& OutButtonPadding);
};

class UCommonCustomNavigation : public UBorder
{
    FCommonCustomNavigationOnNavigationEvent OnNavigationEvent;
    bool OnCustomNavigationEvent(EUINavigation NavigationType);

};

class UCommonDateTimeTextBlock : public UCommonTextBlock
{

    void SetTimespanValue(const FTimespan InTimespan);
    void SetDateTimeValue(const FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);
    void SetCountDownCompletionText(const FText InCompletionText);
    FDateTime GetDateTime();
};

class UCommonGameViewportClient : public UGameViewportClient
{
};

class UCommonGenericInputActionDataTable : public UDataTable
{
};

class UCommonHardwareVisibilityBorder : public UCommonBorder
{
    FGameplayTagQuery VisibilityQuery;
    ESlateVisibility VisibleType;
    ESlateVisibility HiddenType;

};

class UCommonHierarchicalScrollBox : public UScrollBox
{
};

class UCommonInputActionDataProcessor : public UObject
{
};

class UCommonLazyImage : public UImage
{
    FSlateBrush LoadingBackgroundBrush;
    FName MaterialTextureParamName;
    FCommonLazyImageBP_OnLoadingStateChanged BP_OnLoadingStateChanged;
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);

    void SetMaterialTextureParamName(FName TextureParamName);
    void SetBrushFromLazyTexture(const TSoftObjectPtr<UTexture2D>& LazyTexture, bool bMatchSize);
    void SetBrushFromLazyMaterial(const TSoftObjectPtr<UMaterialInterface>& LazyMaterial);
    void SetBrushFromLazyDisplayAsset(const TSoftObjectPtr<UObject>& LazyObject, bool bMatchTextureSize);
    bool IsLoading();
};

class UCommonLazyWidget : public UWidget
{
    FSlateBrush LoadingBackgroundBrush;
    class UUserWidget* Content;
    FCommonLazyWidgetBP_OnLoadingStateChanged BP_OnLoadingStateChanged;
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);

    void SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget);
    bool IsLoading();
    class UUserWidget* GetContent();
};

class UCommonListView : public UListView
{

    void SetEntrySpacing(float InEntrySpacing);
};

class UCommonLoadGuard : public UContentWidget
{
    FSlateBrush LoadingBackgroundBrush;
    TEnumAsByte<EHorizontalAlignment> ThrobberAlignment;
    FMargin ThrobberPadding;
    FText LoadingText;
    TSubclassOf<class UCommonTextStyle> TextStyle;
    FCommonLoadGuardBP_OnLoadingStateChanged BP_OnLoadingStateChanged;
    void OnLoadGuardStateChangedDynamic(bool bIsLoading);
    FSoftObjectPath SpinnerMaterialPath;

    void SetLoadingText(const FText& InLoadingText);
    void SetIsLoading(bool bInIsLoading);
    void OnAssetLoaded__DelegateSignature(class UObject* Object);
    bool IsLoading();
    void BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const FBP_GuardAndLoadAssetOnAssetLoaded& OnAssetLoaded);
};

class UCommonNumericTextBlock : public UCommonTextBlock
{
    FCommonNumericTextBlockOnInterpolationStartedEvent OnInterpolationStartedEvent;
    void OnInterpolationStarted(class UCommonNumericTextBlock* NumericTextBlock);
    FCommonNumericTextBlockOnInterpolationUpdatedEvent OnInterpolationUpdatedEvent;
    void OnInterpolationUpdated(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
    FCommonNumericTextBlockOnOutroEvent OnOutroEvent;
    void OnOutro(class UCommonNumericTextBlock* NumericTextBlock);
    FCommonNumericTextBlockOnInterpolationEndedEvent OnInterpolationEndedEvent;
    void OnInterpolationEnded(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    float CurrentNumericValue;
    ECommonNumericType NumericType;
    FCommonNumberFormattingOptions FormattingSpecification;
    float EaseOutInterpolationExponent;
    float InterpolationUpdateInterval;
    float PostInterpolationShrinkDuration;
    bool PerformSizeInterpolation;
    bool IsPercentage;

    void SetNumericType(ECommonNumericType InNumericType);
    void SetCurrentValue(const float NewValue);
    void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
    void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
    void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
    void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    bool IsInterpolatingNumericValue();
    void InterpolateToValue(const float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
    float GetTargetValue();
};

class UCommonRichTextBlock : public URichTextBlock
{
    ERichTextInlineIconDisplayMode InlineIconDisplayMode;
    bool bTintInlineIcon;
    TSubclassOf<class UCommonTextStyle> DefaultTextStyleOverrideClass;
    float MobileTextBlockScale;
    TSubclassOf<class UCommonTextScrollStyle> ScrollStyle;
    bool bIsScrollingEnabled;
    bool bDisplayAllCaps;
    bool bAutoCollapseWithEmptyText;

    void SetScrollingEnabled(bool bInIsScrollingEnabled);
};

class UCommonRotator : public UCommonButtonBase
{
    FCommonRotatorOnRotated OnRotated;
    void OnRotated(int32 Value);
    class UCommonTextBlock* MyText;

    void ShiftTextRight();
    void ShiftTextLeft();
    void SetSelectedItem(int32 InValue);
    void PopulateTextLabels(TArray<FText> Labels);
    FText GetSelectedText();
    int32 GetSelectedIndex();
    void BP_OnOptionsPopulated(int32 Count);
    void BP_OnOptionSelected(int32 Index);
};

class UCommonStyleSheet : public UDataAsset
{
    TArray<class UCommonStyleSheetTypeBase*> Properties;
    TArray<class UCommonStyleSheet*> ImportedStyleSheets;

};

class UCommonStyleSheetTypeBase : public UObject
{
    bool bIsEnabled;

};

class UCommonStyleSheetTypeColor : public UCommonStyleSheetTypeBase
{
    FLinearColor Color;

};

class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase
{
    int32 LetterSpacing;

};

class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase
{
    int32 Size;

};

class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase
{
    FSlateFontInfo Typeface;

};

class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase
{
    float LineHeightPercentage;

};

class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase
{
    float Bottom;

};

class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase
{
    float Left;

};

class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase
{
    float Right;

};

class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase
{
    float Top;

};

class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase
{
    float Opacity;

};

class UCommonTabListWidgetBase : public UCommonUserWidget
{
    FCommonTabListWidgetBaseOnTabSelected OnTabSelected;
    void OnTabSelected(FName TabId);
    FCommonTabListWidgetBaseOnTabButtonCreation OnTabButtonCreation;
    void OnTabButtonCreation(FName TabId, class UCommonButtonBase* TabButton);
    FCommonTabListWidgetBaseOnTabButtonRemoval OnTabButtonRemoval;
    void OnTabButtonRemoval(FName TabId, class UCommonButtonBase* TabButton);
    FCommonTabListWidgetBaseOnTabListRebuilt OnTabListRebuilt;
    void OnTabListRebuilt();
    FDataTableRowHandle NextTabInputActionData;
    FDataTableRowHandle PreviousTabInputActionData;
    bool bAutoListenForInput;
    bool bDeferRebuildingTabList;
    TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;
    class UCommonButtonGroupBase* TabButtonGroup;
    TMap<class FName, class FCommonRegisteredTabInfo> RegisteredTabsByID;

    void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);
    void SetTabInteractionEnabled(FName TabNameID, bool bEnable);
    void SetTabEnabled(FName TabNameID, bool bEnable);
    void SetListeningForInput(bool bShouldListen);
    void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
    bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);
    bool RemoveTab(FName TabNameID);
    void RemoveAllTabs();
    bool RegisterTab(FName TabNameID, TSubclassOf<class UCommonButtonBase> ButtonWidgetType, class UWidget* ContentWidget, const int32 TabIndex);
    void OnTabSelected__DelegateSignature(FName TabId);
    void OnTabListRebuilt__DelegateSignature();
    void OnTabButtonRemoval__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);
    void OnTabButtonCreation__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);
    void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);
    void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);
    void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32 ButtonIndex);
    void HandlePreviousTabInputAction(bool& bPassThrough);
    void HandlePreLinkedSwitcherChanged_BP();
    void HandlePostLinkedSwitcherChanged_BP();
    void HandleNextTabInputAction(bool& bPassThrough);
    FName GetTabIdAtIndex(int32 Index);
    int32 GetTabCount();
    class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);
    FName GetSelectedTabId();
    class UCommonAnimatedSwitcher* GetLinkedSwitcher();
    FName GetActiveTab();
    void DisableTabWithReason(FName TabNameID, const FText& Reason);
};

class UCommonTextBlock : public UTextBlock
{
    TSubclassOf<class UCommonTextStyle> Style;
    TSubclassOf<class UCommonTextScrollStyle> ScrollStyle;
    class UCommonStyleSheet* StyleSheet;
    bool bIsScrollingEnabled;
    bool bDisplayAllCaps;
    bool bAutoCollapseWithEmptyText;
    float MobileFontSizeMultiplier;

    void SetWrapTextWidth(int32 InWrapTextAt);
    void SetTextCase(bool bUseAllCaps);
    void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
    void SetScrollingEnabled(bool bInIsScrollingEnabled);
    void SetMargin(const FMargin& InMargin);
    void SetLineHeightPercentage(float InLineHeightPercentage);
    void ResetScrollState();
    FMargin GetMargin();
};

class UCommonTextScrollStyle : public UObject
{
    float Speed;
    float StartDelay;
    float EndDelay;
    float FadeInDelay;
    float FadeOutDelay;

};

class UCommonTextStyle : public UObject
{
    FSlateFontInfo Font;
    FLinearColor Color;
    bool bUsesDropShadow;
    FVector2D ShadowOffset;
    FLinearColor ShadowColor;
    FMargin Margin;
    FSlateBrush StrikeBrush;
    float LineHeightPercentage;

    void GetStrikeBrush(FSlateBrush& OutStrikeBrush);
    void GetShadowOffset(FVector2D& OutShadowOffset);
    void GetShadowColor(FLinearColor& OutColor);
    void GetMargin(FMargin& OutMargin);
    float GetLineHeightPercentage();
    void GetFont(FSlateFontInfo& OutFont);
    void GetColor(FLinearColor& OutColor);
};

class UCommonTileView : public UTileView
{
};

class UCommonTreeView : public UTreeView
{
};

class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
};

class UCommonUIEditorSettings : public UObject
{
    TSoftClassPtr<UCommonTextStyle> TemplateTextStyle;
    TSoftClassPtr<UCommonButtonStyle> TemplateButtonStyle;
    TSoftClassPtr<UCommonBorderStyle> TemplateBorderStyle;

};

class UCommonUIInputSettings : public UObject
{
    bool bLinkCursorToGamepadFocus;
    int32 UIActionProcessingPriority;
    TArray<FUIInputAction> InputActions;
    TArray<FUIInputAction> ActionOverrides;
    FCommonAnalogCursorSettings AnalogCursorSettings;

};

class UCommonUILibrary : public UBlueprintFunctionLibrary
{

    class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
};

class UCommonUIRichTextData : public UObject
{
    class UDataTable* InlineIconSet;

};

class UCommonUISettings : public UObject
{
    bool bAutoLoadData;
    TSoftObjectPtr<UObject> DefaultImageResourceObject;
    TSoftObjectPtr<UMaterialInterface> DefaultThrobberMaterial;
    TSoftClassPtr<UCommonUIRichTextData> DefaultRichTextDataClass;
    TArray<FGameplayTag> PlatformTraits;
    class UObject* DefaultImageResourceObjectInstance;
    class UMaterialInterface* DefaultThrobberMaterialInstance;
    FSlateBrush DefaultThrobberBrush;
    class UCommonUIRichTextData* RichTextDataInstance;

};

class UCommonUISubsystemBase : public UGameInstanceSubsystem
{

    FSlateBrush GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName);
};

class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{
};

class UCommonUserWidget : public UUserWidget
{
    bool bDisplayInActionBar;
    bool bConsumePointerInput;

    void SetConsumePointerInput(bool bInConsumePointerInput);
};

class UCommonVideoPlayer : public UWidget
{
    class UMediaSource* Video;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    class UMaterial* VideoMaterial;
    class UMediaSoundComponent* SoundComponent;
    FSlateBrush VideoBrush;

};

class UCommonVisibilitySwitcher : public UOverlay
{
    ESlateVisibility ShownVisibility;
    int32 ActiveWidgetIndex;
    bool bAutoActivateSlot;
    bool bActivateFirstSlotOnAdding;

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(const class UWidget* Widget);
    void IncrementActiveWidgetIndex(bool bAllowWrapping);
    int32 GetActiveWidgetIndex();
    class UWidget* GetActiveWidget();
    void DecrementActiveWidgetIndex(bool bAllowWrapping);
    void DeactivateVisibleSlot();
    void ActivateVisibleSlot();
};

class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
};

class UCommonVisualAttachment : public USizeBox
{
    FVector2D ContentAnchor;

};

class UCommonWidgetCarousel : public UPanelWidget
{
    int32 ActiveWidgetIndex;
    FCommonWidgetCarouselOnCurrentPageIndexChanged OnCurrentPageIndexChanged;
    void OnCurrentPageIndexChanged(class UCommonWidgetCarousel* CarouselWidget, int32 CurrentPageIndex);

    void SetActiveWidgetIndex(int32 Index);
    void SetActiveWidget(class UWidget* Widget);
    void PreviousPage();
    void NextPage();
    class UWidget* GetWidgetAtIndex(int32 Index);
    int32 GetActiveWidgetIndex();
    void EndAutoScrolling();
    void BeginAutoScrolling(float ScrollInterval);
};

class UCommonWidgetCarouselNavBar : public UWidget
{
    TSubclassOf<class UCommonButtonBase> ButtonWidgetType;
    FMargin ButtonPadding;
    class UCommonWidgetCarousel* LinkedCarousel;
    class UCommonButtonGroupBase* ButtonGroup;
    TArray<class UCommonButtonBase*> Buttons;

    void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
    void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 pageIndex);
    void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
};

class UCommonWidgetGroupBase : public UObject
{

    void RemoveWidget(class UWidget* InWidget);
    void RemoveAll();
    void AddWidget(class UWidget* InWidget);
};

class UDEPRECATED_UCommonVisibilityWidgetBase : public UCommonBorder
{
    TMap<class FName, class bool> VisibilityControls;
    bool bShowForGamepad;
    bool bShowForMouseAndKeyboard;
    bool bShowForTouch;
    ESlateVisibility VisibleType;
    ESlateVisibility HiddenType;

    TArray<FName> GetRegisteredPlatforms();
};

class ULoadGuardSlot : public UPanelSlot
{
    FMargin Padding;
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;

    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    void SetPadding(FMargin InPadding);
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};

#endif

#ifndef UE4SS_SDK_WBP_PalInteractiveObjectIndicatorUI_HPP
#define UE4SS_SDK_WBP_PalInteractiveObjectIndicatorUI_HPP

class UWBP_PalInteractiveObjectIndicatorUI_C : public UPalUserWidget
{
    class UWidgetAnimation* Default_In;
    class UWBP_Ingame_Interact_C* WBP_Ingame_Interact;
    FVector Offset;
    TMap<class EPalInteractiveObjectActionType, class FDataTableRowHandle> InteractKeyTextIdMap;
    EPalInteractiveObjectActionType Action Type;
    TMap<class EPalInteractiveObjectActionType, class FPalDataTableRowName_UIInputAction> ActionTypeNameMap;
    TScriptInterface<class IPalInteractiveObjectComponentInterface> InteractiveObject;
    EPalInteractiveObjectButtonType buttonType;
    double longPushTime;
    FPalUIActionBindData TriggerActionHandle;
    FPalUIActionBindData EndTriggerActionhandle;
    bool CachedIsValidInteract;
    bool bIsRegisteredActionInput;
    bool IsEnableSelf;
    FDataTableRowHandle LockedByRideMSGID;
    bool CanToggle;
    bool IsInteractInterval;

    bool IsInteracting();
    void IsSameTriggeringActionType(EPalInteractiveObjectActionType ActionType, bool& IsSame);
    void ResetInteractInterval();
    void ReleaseInteractButton();
    void PressInteractButton();
    void SetEnable(bool IsEnable);
    void RegisterAction(bool isInputConsume, class UPalUserWidget* Parent);
    void Update Button Type(EPalInteractiveObjectButtonType newButtonType, double newLongPushTime, bool IsValidInteract, bool CanToggle);
    void Unregister Action(class UPalUserWidget* Parent);
    void EndTriggerInteract();
    void StartTriggerInteract();
    void Deactivate(class UPalUserWidget* Parent);
    void Activate(bool isInputConsume, class UPalUserWidget* Parent);
    void Update Interactable(bool bInteractable, class UPalUserWidget* Parent);
    void UpdateVisible(bool Visible);
    void UpdateText(FText InText, bool IsLockedByRide);
    void Setup(EPalInteractiveObjectActionType ActionType, TScriptInterface<class IPalInteractiveObjectComponentInterface> Interface);
};

#endif

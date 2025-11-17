#ifndef UE4SS_SDK_WBP_PalCharacterSlotButtonBase_HPP
#define UE4SS_SDK_WBP_PalCharacterSlotButtonBase_HPP

class UWBP_PalCharacterSlotButtonBase_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCommonButtonBase* My Button;
    class UWBP_PalCharacterSlotBase_C* MyCharacterSlotWidget;
    FWBP_PalCharacterSlotButtonBase_COnClickedButton OnClickedButton;
    void OnClickedButton(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_PalCharacterSlotButtonBase_COnRightClickedButton OnRightClickedButton;
    void OnRightClickedButton(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
    FWBP_PalCharacterSlotButtonBase_COnHoveredButton OnHoveredButton;
    void OnHoveredButton(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnUnhoveredButton OnUnhoveredButton;
    void OnUnhoveredButton(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnFocusedWidget OnFocusedWidget;
    void OnFocusedWidget(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnUnFocusedWidget OnUnFocusedWidget;
    void OnUnFocusedWidget(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnDragged OnDragged;
    void OnDragged(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterSlotButtonBase_COnDropped OnDropped;
    void OnDropped(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    bool isDragging;
    bool IsEnableDragDrop;
    bool IsEnableClick;
    FWBP_PalCharacterSlotButtonBase_COnSlotSync OnSlotSync;
    void OnSlotSync(class UWBP_PalCharacterSlotButtonBase_C* SelfButton);
    FWBP_PalCharacterSlotButtonBase_COnUpdateSlot OnUpdateSlot;
    void OnUpdateSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);

    void SetupBySaveParameter(FPalIndividualCharacterSaveParameter SaveParam);
    void OnUpdateSlot_Binded(class UPalIndividualCharacterSlot* TargetSlot);
    void SetupByCharacterID(FName CharacterID);
    void GetIndividualParameter(class UPalIndividualCharacterParameter*& IndividualParameter);
    void GetIsSlotSync(bool& WaitingSync);
    void On Slot Synced();
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDropped_Internal();
    void OnDragged_Internal();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void Focus();
    void OnRightClicked_Internal();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnUnhovered_Internal(class UCommonButtonBase* Button);
    void OnHovered_Internal(class UCommonButtonBase* Button);
    void OnClicked_Internal(class UCommonButtonBase* Button);
    void BindButtonEvents();
    void GetTargetSlot(class UPalIndividualCharacterSlot*& TargetSlot);
    void SetupByIndividualId(FPalInstanceID IndividualId);
    void RegisterCharacterSlotWidget(class UWBP_PalCharacterSlotBase_C*& characterSlotWidget);
    void Setup(class UPalIndividualCharacterSlot* TargetSlot);
    void RegisterButton(class UCommonButtonBase*& Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCharacterSlotButtonBase(int32 EntryPoint);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnSlotSync__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SelfButton);
    void OnDropped__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnDragged__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
    void OnUnhoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnFocusedWidget__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnClickedButton__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
};

#endif

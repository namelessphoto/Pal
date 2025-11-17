#ifndef UE4SS_SDK_WBP_PalCharacterScrollList_HPP
#define UE4SS_SDK_WBP_PalCharacterScrollList_HPP

class UWBP_PalCharacterScrollList_C : public UWBP_PalCommonScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSubclassOf<class UWBP_PalCharacterSlotButtonBase_C> slotWidgetClass;
    FWBP_PalCharacterScrollList_COnLeftClickedSlot OnLeftClickedSlot;
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_PalCharacterScrollList_COnRightClickedSlot OnRightClickedSlot;
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnHoveredSlot OnHoveredSlot;
    void OnHoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnUnhoveredSlot OnUnhoveredSlot;
    void OnUnhoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnFocusedSlot OnFocusedSlot;
    void OnFocusedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnUnfocusedSlot OnUnfocusedSlot;
    void OnUnfocusedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_PalCharacterScrollList_COnCreatedSlot OnCreatedSlot;
    void OnCreatedSlot(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    class UWBP_CharacterScrollListBlock_C* MyBlock;
    FWBP_PalCharacterScrollList_COnUpdateSlot OnUpdateSlot;
    void OnUpdateSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);

    void OnUpdateSlot_Binded(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void GetTopFocusTarget(class UWidget*& Widget);
    void Get All Children(TArray<class UWidget*>& widgets);
    void RemoveChild(class UWBP_PalCharacterSlotButtonBase_C* targetChild);
    void FocusPreviousButton(class UWBP_PalCharacterSlotButtonBase_C* rootSlotButton);
    void ClearAllChildren();
    void FocusToTopContent();
    void ChangeChildrenPadding(FVector2D Padding);
    void ClearInnnerChildren();
    void AddCharacterSlots(TArray<class UPalIndividualCharacterSlot*>& targetSlots);
    void OnUnfocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnFocused_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnhovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHovered_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void On Right Clicked Internal(class UWBP_PalCharacterSlotButtonBase_C* ButtonBase);
    void OnLeftClicked_Internal(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void AddSlotButtonToScrollList(class UWBP_PalCharacterSlotButtonBase_C* createdSlotButton);
    void BindButtonEvents(class UWBP_PalCharacterSlotButtonBase_C* createdSlotButton);
    void CreateSlotWidget(class UPalIndividualCharacterSlot* TargetSlot, class UWBP_PalCharacterSlotButtonBase_C*& createdSlotButton);
    void AddCharacterSlot(class UPalIndividualCharacterSlot* TargetSlot);
    void AddCharacterContainer(class UPalIndividualCharacterContainer* Container);
    void Construct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCharacterScrollList(int32 EntryPoint);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void OnUnfocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnFocusedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
};

#endif

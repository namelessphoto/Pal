#ifndef UE4SS_SDK_WBP_IngameMenu_CommonCharacterContainer_HPP
#define UE4SS_SDK_WBP_IngameMenu_CommonCharacterContainer_HPP

class UWBP_IngameMenu_CommonCharacterContainer_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* MapObjectTitle;
    class UWBP_BoxPalList_Party_C* WBP_BoxPalList_Party;
    class UWBP_PalCharacterScrollList_C* WBP_DisplayCharacterScrollList;
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;
    class UPalMapObjectConcreteModelBase* Model;
    FPalUIActionBindData SendSlotInputHandle;
    FPalUIActionBindData ViewDetailInputHandle;
    FPalDataTableRowName_UIInputAction SendSlotInput;
    FPalDataTableRowName_UIInputAction ViewDetailInput;
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;
    TEnumAsByte<EPalBoxHoveredSlotType> hoverdSlotType;

    void ToPrevShortcut();
    void ToNextShortcut();
    void Set Title();
    void OnHoverPartyPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnSendSlotInput();
    void OnViewDetailInput();
    void UnregisterPalOperateInput();
    void RegisterPalOperateInput();
    void Select Slot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void OnClickSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    class UWidget* BP_GetDesiredFocusTarget();
    void OnUnhoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverPalSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void Setup();
    void OnSetup();
    void Destruct();
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_3_OnCreatedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* createdSlot);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_4_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_5_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_6_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_DisplayCage_WBP_DisplayCharacterScrollList_K2Node_ComponentBoundEvent_8_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_IngameMenu_CommonCharacterContainer_WBP_Menu_btn_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_CommonCharacterContainer_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_10_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_CommonCharacterContainer_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_11_OnHoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_CommonCharacterContainer_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_12_OnUnhoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_CommonCharacterContainer_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_13_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void BndEvt__WBP_IngameMenu_CommonCharacterContainer_WBP_BoxPalList_Party_K2Node_ComponentBoundEvent_14_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_IngameMenu_CommonCharacterContainer(int32 EntryPoint);
};

#endif

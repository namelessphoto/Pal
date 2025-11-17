#ifndef UE4SS_SDK_WBP_IngameMenu_CommonCharacterContainer_HPP
#define UE4SS_SDK_WBP_IngameMenu_CommonCharacterContainer_HPP

class UWBP_IngameMenu_CommonCharacterContainer_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UBP_PalTextBlock_C* MapObjectTitle;                                         // 0x0438 (size: 0x8)
    class UWBP_BoxPalList_Party_C* WBP_BoxPalList_Party;                              // 0x0440 (size: 0x8)
    class UWBP_PalCharacterScrollList_C* WBP_DisplayCharacterScrollList;              // 0x0448 (size: 0x8)
    class UWBP_IngameMenu_PalBox_PalDetail_C* WBP_IngameMenu_PalBox_PalDetail;        // 0x0450 (size: 0x8)
    class UWBP_Menu_btn_C* WBP_Menu_btn;                                              // 0x0458 (size: 0x8)
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartyPalSlots;                 // 0x0460 (size: 0x10)
    class UPalMapObjectConcreteModelBase* Model;                                      // 0x0470 (size: 0x8)
    FPalUIActionBindData SendSlotInputHandle;                                         // 0x0478 (size: 0x4)
    FPalUIActionBindData ViewDetailInputHandle;                                       // 0x047C (size: 0x4)
    FPalDataTableRowName_UIInputAction SendSlotInput;                                 // 0x0480 (size: 0x8)
    FPalDataTableRowName_UIInputAction ViewDetailInput;                               // 0x0488 (size: 0x8)
    class UPalIndividualCharacterSlot* CachedLastHoveredSlot;                         // 0x0490 (size: 0x8)
    TEnumAsByte<EPalBoxHoveredSlotType> hoverdSlotType;                               // 0x0498 (size: 0x1)

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
}; // Size: 0x499

#endif

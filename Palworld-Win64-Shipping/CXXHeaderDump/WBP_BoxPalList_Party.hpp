#ifndef UE4SS_SDK_WBP_BoxPalList_Party_HPP
#define UE4SS_SDK_WBP_BoxPalList_Party_HPP

class UWBP_BoxPalList_Party_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_PalBox;
    class UWBP_BoxPalList_C* WBP_BoxPalList;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_1;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_2;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_3;
    class UWBP_PalCommonCharacterSlotButton_C* WBP_PalCommonCharacterSlotButton_4;
    TArray<class UWBP_PalCommonCharacterSlotButton_C*> PartySlots;
    FWBP_BoxPalList_Party_COnLeftClickedSlot OnLeftClickedSlot;
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    FWBP_BoxPalList_Party_COnRightClickedSlot OnRightClickedSlot;
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnHoverSlot OnHoverSlot;
    void OnHoverSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnUnhoverSlot OnUnhoverSlot;
    void OnUnhoverSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnCreatedNewSlot OnCreatedNewSlot;
    void OnCreatedNewSlot(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    FWBP_BoxPalList_Party_COnPageUpdated OnPageUpdated;
    void OnPageUpdated(int32 Page);
    FPalDataTableRowName_UIInputAction OverrideLeftPageInputAction;
    FPalDataTableRowName_UIInputAction OverrideRightPageInputAction;

    void Setup Party Slot();
    void GetLastFocusBoxSlot(class UWidget*& TargetWidget);
    void SelectSlot(class UPalIndividualCharacterSlot* Slot, EPalItemSlotPressType PressType);
    void TryMoveToBox(class UPalIndividualCharacterSlot* Slot);
    void GetFirstFocusPartyButton(class UWidget*& Widget);
    void GetPartySlots(TArray<class UWBP_PalCommonCharacterSlotButton_C*>& PartySlots);
    void OnInitialized();
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_0_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_1_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_2_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_3_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_4_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_Party_WBP_BoxPalList_K2Node_ComponentBoundEvent_5_OnUpdatedPage__DelegateSignature(int32 NowPage);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_BoxPalList_Party(int32 EntryPoint);
    void OnPageUpdated__DelegateSignature(int32 Page);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnUnhoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnHoverSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
};

#endif

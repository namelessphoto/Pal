#ifndef UE4SS_SDK_WBP_BoxPalList_HPP
#define UE4SS_SDK_WBP_BoxPalList_HPP

class UWBP_BoxPalList_C : public UPalUIPalBoxBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_BoxPalListBase_C* WBP_BoxPalListBase;
    FWBP_BoxPalList_COnLeftClickedSlot OnLeftClickedSlot;
    void OnLeftClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    FWBP_BoxPalList_COnRightClickedSlot OnRightClickedSlot;
    void OnRightClickedSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalList_COnHoveredSlot OnHoveredSlot;
    void OnHoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalList_COnUnhoveredSlot OnUnhoveredSlot;
    void OnUnhoveredSlot(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    FWBP_BoxPalList_COnUpdatedPage OnUpdatedPage;
    void OnUpdatedPage(int32 NowPage);
    bool CanDragDrop;
    FPalDataTableRowName_UIInputAction NextPageInputAction;
    FPalDataTableRowName_UIInputAction PrevPageInputAction;
    FWBP_BoxPalList_COnCreatedNewSlot OnCreatedNewSlot;
    void OnCreatedNewSlot(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    FWBP_BoxPalList_COnSelectPalBoxPage OnSelectPalBoxPage;
    void OnSelectPalBoxPage(int32 Page);
    FWBP_BoxPalList_COnSorted OnSorted;
    void OnSorted();
    FWBP_BoxPalList_COnUpdateSlot OnUpdateSlot;
    void OnUpdateSlot(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    TSoftObjectPtr<UWBP_PalCharacterSlotButtonBase_C> LastHoveredSlot;

    void GetLastHoveredFocusTarget(class UWidget*& TargetWidget);
    void OnClosedSortWindow(class UPalHUDDispatchParameterBase* Param);
    void Set Enable Page Control Action(bool bIsEnableAction);
    void GetCurrentBoxSlots(TArray<class UWBP_PalCommonCharacterSlotButton_C*>& Slots);
    void FindWidgetBySlot(class UPalIndividualCharacterSlot* Slot, class UWBP_PalCharacterSlotButtonBase_C*& Widget);
    void Setup();
    void Construct();
    void OnUpdatePagePalBoxList(int32 NowPage, const TArray<class UPalIndividualCharacterSlot*>& SlotList);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_2_OnUpdatedPage__DelegateSignature(int32 NowPage);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_3_OnClickedSortButton__DelegateSignature();
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_4_OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_5_OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_6_OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_7_OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_8_OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void BndEvt__WBP_BoxPalList_WBP_BoxPalListBase_K2Node_ComponentBoundEvent_0_OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void Destruct();
    void ExecuteUbergraph_WBP_BoxPalList(int32 EntryPoint);
    void OnUpdateSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* SlotButton);
    void OnSorted__DelegateSignature();
    void OnSelectPalBoxPage__DelegateSignature(int32 Page);
    void OnCreatedNewSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* NewSlot);
    void OnUpdatedPage__DelegateSignature(int32 NowPage);
    void OnUnhoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnHoveredSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnRightClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget);
    void OnLeftClickedSlot__DelegateSignature(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType);
};

#endif

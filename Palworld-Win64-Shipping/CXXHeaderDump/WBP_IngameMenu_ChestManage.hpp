#ifndef UE4SS_SDK_WBP_IngameMenu_ChestManage_HPP
#define UE4SS_SDK_WBP_IngameMenu_ChestManage_HPP

class UWBP_IngameMenu_ChestManage_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_TargetContainer;
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;
    class UWBP_IngameMenu_ChestManage_TakeOut_C* WBP_IngameMenu_ChestManage_TakeOut;
    class UWBP_IngameMenu_ItemSearchList_C* WBP_IngameMenu_ItemSearchList;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UBP_PalInventoryModel_C* InventoryModel;
    FWBP_IngameMenu_ChestManage_COnClickedQuickMoveButton OnClickedQuickMoveButton;
    void OnClickedQuickMoveButton();
    FWBP_IngameMenu_ChestManage_COnClickedPreferenceButton OnClickedPreferenceButton;
    void OnClickedPreferenceButton();
    class UPalUIBaseCampItemDispenserModel* DispenserModel;
    bool TakeOutPanelEnabled;
    TArray<FPalUIActionBindData> TakeOutBindedActions;
    bool LastFocusListSlot;
    bool Updateable;
    FTimerHandle UpdateableTimer;
    bool CurrentInFocusPath;
    bool ForceReset;
    TArray<FPalItemSlotId> FillableSlotIds;

    void UpdateInventorySlot(class UWBP_PalItemSlotButtonBase_C* Slot, const TArray<FName>& ItemList);
    void Refill();
    void EnableUpdate();
    void Unbind();
    void Reset Focus(bool TryFocusItemList);
    void UpdateInventoryGreyout(class UPalItemSlot* Slot);
    void InputMethodChanged(ECommonInputType InputType);
    void OnTakeOutClose();
    void Setup Take Out(FPalItemAndNum ItemAndNum);
    class UWidget* BP_GetDesiredFocusTarget();
    void On Camp Item Stack Info Update(class UPalUIBaseCampItemDispenserModel* Model);
    void OnCancelAction();
    void GetInventoryLastHoveredFocusTarget(class UWidget*& Widget);
    class UWidget* CustomNavi_ToInventorySlot(EUINavigation Navigation);
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void GetInventoryTopFocustTarget(class UWidget*& FocusTarget);
    void Setup(class UBP_PalInventoryModel_C* InventoryModel, class UPalUIBaseCampItemDispenserModel* DispenserModel);
    void Construct();
    void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_12_OnClickedInventorySortButton__DelegateSignature();
    void OnSetup();
    void OnClose();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_0_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_1_OnRightClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ChestManage_TakeOut_K2Node_ComponentBoundEvent_2_OnTakeOutClosed__DelegateSignature();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ChestManage_TakeOut_K2Node_ComponentBoundEvent_3_OnTakeOutConfirmed__DelegateSignature(FPalItemId TakeOutId, int32 TakeOutCount);
    void Destruct();
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_Common_Inventory_K2Node_ComponentBoundEvent_5_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_IngameMenu_ChestManage_WBP_IngameMenu_ItemSearchList_K2Node_ComponentBoundEvent_6_OnSlotHovered__DelegateSignature();
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_WBP_IngameMenu_ChestManage(int32 EntryPoint);
    void OnClickedPreferenceButton__DelegateSignature();
    void OnClickedQuickMoveButton__DelegateSignature();
};

#endif

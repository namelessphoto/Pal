#ifndef UE4SS_SDK_WBP_IngameMenu_Chest_HPP
#define UE4SS_SDK_WBP_IngameMenu_Chest_HPP

class UWBP_IngameMenu_Chest_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_TargetContainer;
    class UBP_PalTextBlock_C* Text_TargetContainerName;
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;
    class UWBP_InventoryEquipment_InvisibleActionButton_C* WBP_InventoryEquipment_ChestBack;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_QuickMove;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort_TargetContainer;
    class UWBP_PalItemScrollList_C* WBP_PalItemScrollList;
    class UBP_PalInventoryModel_C* Model;
    FWBP_IngameMenu_Chest_COnClickedInventorySortButton OnClickedInventorySortButton;
    void OnClickedInventorySortButton();
    FWBP_IngameMenu_Chest_COnClickedQuickMoveButton OnClickedQuickMoveButton;
    void OnClickedQuickMoveButton();
    FWBP_IngameMenu_Chest_COnClickedTargetContainerSortButton OnClickedTargetContainerSortButton;
    void OnClickedTargetContainerSortButton();
    FWBP_IngameMenu_Chest_COnHoveredInventorySlot OnHoveredInventorySlot;
    void OnHoveredInventorySlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_IngameMenu_Chest_COnUnhoveredInventorySlot OnUnhoveredInventorySlot;
    void OnUnhoveredInventorySlot();
    FWBP_IngameMenu_Chest_COnHoveredTargetContainerSlot OnHoveredTargetContainerSlot;
    void OnHoveredTargetContainerSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    FWBP_IngameMenu_Chest_COnUnhoveredTargetContainerSlot OnUnhoveredTargetContainerSlot;
    void OnUnhoveredTargetContainerSlot();
    FWBP_IngameMenu_Chest_COnClickedCloseButton OnClickedCloseButton;
    void OnClickedCloseButton();
    FWBP_IngameMenu_Chest_COnClickedPreferenceButton OnClickedPreferenceButton;
    void OnClickedPreferenceButton();
    FWBP_IngameMenu_Chest_COnChestBackClicked OnChestBackClicked;
    void OnChestBackClicked();

    class UWidget* CustomNavi_ToPreferenceOrCloseButton(EUINavigation Navigation);
    void GetTargetContainerLastHoveredFocusTarget(class UWidget*& Widget);
    void GetInventoryLastHoveredFocusTarget(class UWidget*& Widget);
    class UWidget* CustomNavi_ToTargetContainerSortButton(EUINavigation Navigation);
    class UWidget* CustomNavi_ToCloseButton(EUINavigation Navigation);
    void GetTargetContainerTopFocustTarget(class UWidget*& FocusTarget);
    void Get Inventory Top Focust Target(class UWidget*& FocusTarget);
    void OnLeftClickedTargetContainerSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UBP_PalInventoryModel_C* Model, class UPalItemContainer* TargetContainer);
    void SetTagetContainerDisplayName(FText TargetContainerName);
    void Setup Target Item Container(class UPalItemContainer* TargetContainer);
    void Filtering Inventory by Inventory Type(TArray<EPalPlayerInventoryType>& inventoryType);
    void Construct();
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_QuickMove_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalInvisibleButton_Sort_TargetContainer_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_3_OnHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_PalItemScrollList_K2Node_ComponentBoundEvent_6_OnEndHoveredSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void BndEvt__WBP_IngameMenu_Chest_WBP_Menu_btn_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_8_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_9_OnUnhoveredInventorySlot__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_Common_Inventory_K2Node_ComponentBoundEvent_10_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_IngameMenu_Chest_WBP_InventoryEquipment_InvisibleDropButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_IngameMenu_Chest(int32 EntryPoint);
    void OnChestBackClicked__DelegateSignature();
    void OnClickedPreferenceButton__DelegateSignature();
    void OnClickedCloseButton__DelegateSignature();
    void OnUnhoveredTargetContainerSlot__DelegateSignature();
    void OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnUnhoveredInventorySlot__DelegateSignature();
    void OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnClickedTargetContainerSortButton__DelegateSignature();
    void OnClickedQuickMoveButton__DelegateSignature();
    void OnClickedInventorySortButton__DelegateSignature();
};

#endif

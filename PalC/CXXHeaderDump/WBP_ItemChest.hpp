#ifndef UE4SS_SDK_WBP_ItemChest_HPP
#define UE4SS_SDK_WBP_ItemChest_HPP

class UWBP_ItemChest_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Default_In;
    class UCircularThrobber* CircularThrobber_69;
    class UOverlay* Overlay_WaitRep;
    class UWBP_IngameMenu_Chest_C* WBP_IngameMenu_Chest;
    class UWBP_PalCommonWindow_C* WBP_PalCommonWindow;
    class UBP_PalInventoryModel_C* InventoryModel;
    FPalDataTableRowName_UIInputAction LeftFocusInput;
    FPalDataTableRowName_UIInputAction RightFocusInput;
    FPalDataTableRowName_UIInputAction FastGetInput;
    class UPalItemSlot* CachedLastFocusedInventorySlot;
    class UPalItemSlot* CachedLastFocusedTargetContainerSlot;
    FPalDataTableRowName_UIInputAction AllGetInput;
    TArray<EPalPlayerInventoryType> DisplayInventoryType;
    FPalDataTableRowName_UIInputAction RefillInput;
    FPalContainerId TargetContainerId;
    FPalDataTableRowName_UIInputAction SortInput;

    void RequestStopReplication();
    void RequestStartReplication();
    void OnUpdatePrivateLockPlayerUId(class UPalMapObjectItemChestModel* ConcreteModel);
    void Sort();
    void Refill();
    class UWidget* BP_GetDesiredFocusTarget();
    void AllGet();
    void FastMove();
    void Setup();
    void OnSetup();
    void Construct();
    void ChangeFocus_Inv_Pad();
    void ChangeFocus_Chest_Pad();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_3_OnClickedQuickMoveButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_8_OnClickedInventorySortButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_9_OnHoveredInventorySlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_12_OnClickedTargetContainerSortButton__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_13_OnUnhoveredInventorySlot__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_14_OnHoveredTargetContainerSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_15_OnUnhoveredTargetContainerSlot__DelegateSignature();
    void BndEvt__WBP_ItemChest_WBP_IngameMenu_Chest_K2Node_ComponentBoundEvent_16_OnClickedCloseButton__DelegateSignature();
    void OnClose();
    void OnReadyItemContainer(TScriptInterface<class IPalMapObjectItemContainerAccessInterface> AccessInterface);
    void Destruct();
    void ExecuteUbergraph_WBP_ItemChest(int32 EntryPoint);
};

#endif

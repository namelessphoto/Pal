#ifndef UE4SS_SDK_WBP_InventoryEquipment_TabList_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_TabList_HPP

class UWBP_InventoryEquipment_TabList_C : public UWBP_PanelWidgetChildrenSelectorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_InventoryTab;
    class UCanvasPanel* Canvas_SortButton;
    class UHorizontalBox* HorizontalBox_1;
    class UImage* TabIconBase;
    class UWBP_InventoryEquipment_InventoryTabButton_C* WBP_InventoryEquipment_InventoryTabButton_Essential;
    class UWBP_InventoryEquipment_InventoryTabButton_C* WBP_InventoryEquipment_InventoryTabButton_Inventory;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton_Sort;
    FWBP_InventoryEquipment_TabList_COnClickedSortButton OnClickedSortButton;
    void OnClickedSortButton();

    void OnChangedIndex_Binded(int32 OldIndex, int32 NewIndex, class UWidget* FocusTargetWidget);
    void OnPrev_Binded(int32 OldIndex, int32 NewIndex);
    void OnNext_Binded(int32 OldIndex, int32 NewIndex);
    void RegisterPanelWidget(class UPanelWidget*& PanelWidget);
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_TabList_WBP_PalInvisibleButton_Sort_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Essential_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
    void BndEvt__WBP_InventoryEquipment_TabList_WBP_InventoryEquipment_InventoryTabButton_Inventory_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_TabList(int32 EntryPoint);
    void OnClickedSortButton__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_WBP_PalPlayerInventoryScrollList_HPP
#define UE4SS_SDK_WBP_PalPlayerInventoryScrollList_HPP

class UWBP_PalPlayerInventoryScrollList_C : public UWBP_PalItemScrollList_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPalUIInventoryModel* Model;
    TMap<class EPalPlayerInventoryType, class UWBP_PalItemListBlock_C*> CategoryBlockMap;
    TArray<EPalPlayerInventoryType> InventoryTypeArray;
    FWBP_PalPlayerInventoryScrollList_COnRequestOpenUseItemPanel OnRequestOpenUseItemPanel;
    void OnRequestOpenUseItemPanel(class UPalItemSlot* SelectedSlot);
    bool CanUseSlot;
    FPalDataTableRowName_UIInputAction Handle;
    bool CanQuickEquip;
    bool ShowPrice;
    FWBP_PalPlayerInventoryScrollList_COnTriedEquipSlot OnTriedEquipSlot;
    void OnTriedEquipSlot(class UWBP_PalItemSlotButtonBase_C* SlotButton);

    void GetItemSlotButtons(EPalPlayerInventoryType inventoryType, TArray<class UWBP_PalItemSlotButtonBase_C*>& OutSlotButtonArray);
    void OnTriedEquipSlot_Internal(class UWBP_PalItemSlotButtonBase_C* Widget);
    void Open Use Item Panel(class UWBP_PalItemSlotButtonBase_C* Button);
    void ScrollToCategoryTop(EPalPlayerInventoryType TargetType, class UWidget*& TopFocusTarget);
    void Add Player Inventory Block(EPalPlayerInventoryType inventoryType, class UWBP_PalItemListBlock_C*& createdBlock);
    void ClearFiltering();
    void FilteringFromInventoryType(TArray<EPalPlayerInventoryType>& displayTypes, bool& IsEmptyDisplaySlot);
    void FilteringFromItemTypeB(TArray<EPalItemTypeB>& displayTypesB, bool isEmptySlotDIsplay);
    void FilteringFromItemTypeA(TArray<EPalItemTypeA>& displayTypesA, bool isEmptySlotDIsplay);
    void OnLeftCllicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void Setup(class UPalUIInventoryModel* useModel);
    void Construct();
    void ExecuteUbergraph_WBP_PalPlayerInventoryScrollList(int32 EntryPoint);
    void OnTriedEquipSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* SlotButton);
    void OnRequestOpenUseItemPanel__DelegateSignature(class UPalItemSlot* SelectedSlot);
};

#endif

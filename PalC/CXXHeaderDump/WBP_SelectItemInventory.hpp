#ifndef UE4SS_SDK_WBP_SelectItemInventory_HPP
#define UE4SS_SDK_WBP_SelectItemInventory_HPP

class UWBP_SelectItemInventory_C : public UPalUISelectItemInventoryBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_Common_Inventory_C* WBP_Common_Inventory;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    bool isRequireSelectNum;
    class UWBP_PalItemSlotButtonBase_C* selectedButton;
    class UBP_PalInventoryModel_C* InventoryModel;
    FDataTableRowHandle BgMsgID;

    class UWidget* BP_GetDesiredFocusTarget();
    void OnFocusedSlot(class UWBP_PalItemSlotButtonBase_C* ButtonBase);
    void ComplateSelect(FPalItemSlotId SlotId, int32 selectNum);
    void OnComplateSelectNum(EPalUISelectNumResult resultType, int32 selectedNum);
    void DisplaySelectNumWidget();
    void OnLeftClicked(class UWBP_PalItemSlotButtonBase_C* ButtonBase, EPalItemSlotPressType PressType);
    void OnSetup();
    void BndEvt__WBP_SelectItemInventory_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
    void BndEvt__WBP_SelectItemInventory_WBP_Common_Inventory_K2Node_ComponentBoundEvent_1_OnLeftClickSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Slot, EPalItemSlotPressType PressType);
    void Destruct();
    void ExecuteUbergraph_WBP_SelectItemInventory(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_WBP_InventoryEquipment_InvisibleActionButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_InvisibleActionButton_HPP

class UWBP_InventoryEquipment_InvisibleActionButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_InventoryEquipment_InvisibleActionButton_COnClicked OnClicked;
    void OnClicked();

    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void Construct();
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_InvisibleActionButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_WBP_InventoryEquipment_InventoryTabButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_InventoryTabButton_HPP

class UWBP_InventoryEquipment_InventoryTabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* TabBase;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle MsgID;
    TArray<EPalPlayerInventoryType> BindedInventoryType;
    FWBP_InventoryEquipment_InventoryTabButton_COnClicked OnClicked;
    void OnClicked(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);

    void AnmEvent_Normal();
    void AnmEvent_Focus();
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_InventoryEquipment_InventoryTabButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_InventoryTabButton(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_InventoryEquipment_InventoryTabButton_C* Button);
};

#endif

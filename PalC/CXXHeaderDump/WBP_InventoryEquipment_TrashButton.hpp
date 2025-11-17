#ifndef UE4SS_SDK_WBP_InventoryEquipment_TrashButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_TrashButton_HPP

class UWBP_InventoryEquipment_TrashButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_EnableToDisable;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Icon;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle MsgID;
    FWBP_InventoryEquipment_TrashButton_COnClicked OnClicked;
    void OnClicked();
    class UTexture2D* OverrideTexture;
    bool IsItemDragging;

    void CheckDragging(bool& isDragging);
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void SetEnableButton(bool IsEnable);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_InventoryEquipment_TrashButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void OnUpdateEvent();
    void ExecuteUbergraph_WBP_InventoryEquipment_TrashButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

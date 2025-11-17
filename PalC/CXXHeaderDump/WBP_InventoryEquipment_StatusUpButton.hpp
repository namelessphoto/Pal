#ifndef UE4SS_SDK_WBP_InventoryEquipment_StatusUpButton_HPP
#define UE4SS_SDK_WBP_InventoryEquipment_StatusUpButton_HPP

class UWBP_InventoryEquipment_StatusUpButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_FocusLoop;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Focus;
    class UImage* FocusGrd;
    class UHorizontalBox* HorizontalBox_3;
    class UWBP_PalCommonNewMark_0_C* WBP_PalCommonNewMark_0;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    FWBP_InventoryEquipment_StatusUpButton_COnClicked OnClicked;
    void OnClicked();
    bool IsAlreadyActive;

    void AnmEvent_Active();
    void AnmEvent_Deactive();
    void Construct();
    void BndEvt__WBP_InventoryEquipment_StatusUpButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_InventoryEquipment_StatusUpButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_WBP_PalCommonItemSlot_HPP
#define UE4SS_SDK_WBP_PalCommonItemSlot_HPP

class UWBP_PalCommonItemSlot_C : public UWBP_PalItemSlotBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* Background_circle_b;
    class UImage* Background_Circle_f;
    class UBP_PalTextBlock_C* BP_PalTextBlock_C_135;
    class UWBP_PalCommonItemIcon_C* WBP_PalCommonItemIcon;
    FWBP_PalCommonItemSlot_COnAfterSetEmpty OnAfterSetEmpty;
    void OnAfterSetEmpty();
    FWBP_PalCommonItemSlot_COnAfterUpdateSlot OnAfterUpdateSlot;
    void OnAfterUpdateSlot();

    void OnSetValidSlot_Binded();
    void OnSetEmpty_Binded();
    void OnUpdateSlot_Binded(class UPalItemSlot* TargetSlot);
    void RegisterItemIconWidget(class UWBP_PalItemIconBase_C*& iconWidget);
    void OnInitialized();
    void ExecuteUbergraph_WBP_PalCommonItemSlot(int32 EntryPoint);
    void OnAfterUpdateSlot__DelegateSignature();
    void OnAfterSetEmpty__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_WBP_OptionSettings_TabButton_HPP
#define UE4SS_SDK_WBP_OptionSettings_TabButton_HPP

class UWBP_OptionSettings_TabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    bool IsActive;
    int32 Index;
    FWBP_OptionSettings_TabButton_CSwitchTabTo SwitchTabTo;
    void SwitchTabTo(int32 Index);

    void SetName(FText Name, int32 Index);
    void SetTabActive(bool Active);
    void BndEvt__WBP_OptionSettings_TabButton_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_OptionSettings_TabButton(int32 EntryPoint);
    void SwitchTabTo__DelegateSignature(int32 Index);
};

#endif

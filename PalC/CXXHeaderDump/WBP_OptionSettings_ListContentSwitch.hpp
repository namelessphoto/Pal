#ifndef UE4SS_SDK_WBP_OptionSettings_ListContentSwitch_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContentSwitch_HPP

class UWBP_OptionSettings_ListContentSwitch_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OFFToON;
    class UCanvasPanel* CanvasPanel_OFFHover;
    class UCanvasPanel* CanvasPanel_ONHover;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton_OFF;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton_ON;
    bool CurrentIsOn;
    FWBP_OptionSettings_ListContentSwitch_COnSwitcherChanged OnSwitcherChanged;
    void OnSwitcherChanged(bool IsOn);

    void IsOn(bool& IsOn);
    void Setup(bool IsOn);
    void SWITCH();
    void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_OFF_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentSwitch_WBP_PalCommonButton_ON_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_OptionSettings_ListContentSwitch(int32 EntryPoint);
    void OnSwitcherChanged__DelegateSignature(bool IsOn);
};

#endif

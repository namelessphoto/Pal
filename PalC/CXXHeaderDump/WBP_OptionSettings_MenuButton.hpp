#ifndef UE4SS_SDK_WBP_OptionSettings_MenuButton_HPP
#define UE4SS_SDK_WBP_OptionSettings_MenuButton_HPP

class UWBP_OptionSettings_MenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Name;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FDataTableRowHandle LocalizeMsgID;
    FWBP_OptionSettings_MenuButton_COnClicked OnClicked;
    void OnClicked();
    bool IsFocusing;

    void Construct();
    void BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_MenuButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ReleaseFocus();
    void ExecuteUbergraph_WBP_OptionSettings_MenuButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_WBP_OptionSettings_ClickableButton_HPP
#define UE4SS_SDK_WBP_OptionSettings_ClickableButton_HPP

class UWBP_OptionSettings_ClickableButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Click;
    class UButton* Button_ON;
    class UCanvasPanel* CanvasPanel_Hover;
    FWBP_OptionSettings_ClickableButton_COnClicked OnClicked;
    void OnClicked();

    void BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__WBP_OptionSettings_ListContentSwitch_Button_ON_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_OptionSettings_ClickableButton(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

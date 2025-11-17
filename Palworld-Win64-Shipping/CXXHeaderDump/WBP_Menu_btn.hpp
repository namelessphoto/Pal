#ifndef UE4SS_SDK_WBP_Menu_btn_HPP
#define UE4SS_SDK_WBP_Menu_btn_HPP

class UWBP_Menu_btn_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_push;
    class UWidgetAnimation* Anm_Normal;
    class UWidgetAnimation* Anm_Focus;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Menu_btn_COnButtonClicked OnButtonClicked;
    void OnButtonClicked();

    void AnmEvent_Click();
    void AnmEvent_Hover();
    void AnmEvent_Unhover();
    void Construct();
    void BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Menu_btn_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Menu_btn(int32 EntryPoint);
    void OnButtonClicked__DelegateSignature();
};

#endif

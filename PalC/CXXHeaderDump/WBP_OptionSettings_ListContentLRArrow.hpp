#ifndef UE4SS_SDK_WBP_OptionSettings_ListContentLRArrow_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContentLRArrow_HPP

class UWBP_OptionSettings_ListContentLRArrow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_push;
    class UImage* ArrowHover;
    class UButton* Button_Dummy;
    class UWBP_PalCommonButton_C* WBP_PalCommonButton;
    FWBP_OptionSettings_ListContentLRArrow_COnClicked OnClicked;
    void OnClicked();

    void ClickInternal();
    void Click();
    void BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_OptionSettings_ListContentLRArrow_WBP_PalCommonButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_OptionSettings_ListContentLRArrow(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif

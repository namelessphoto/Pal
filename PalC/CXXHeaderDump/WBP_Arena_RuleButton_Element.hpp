#ifndef UE4SS_SDK_WBP_Arena_RuleButton_Element_HPP
#define UE4SS_SDK_WBP_Arena_RuleButton_Element_HPP

class UWBP_Arena_RuleButton_Element_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_OnToOff;
    class UWBP_PalElementIcon_C* WBP_PalElementIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Arena_RuleButton_Element_COnElementButtonClicked OnElementButtonClicked;
    void OnElementButtonClicked(EPalElementType ElementType);
    EPalElementType Element Type;

    void AnmEvent_Enable();
    void AnmEvent_Restrict();
    void SetupElement(EPalElementType ElementType);
    void SetRestrict(bool IsRestrict);
    void BndEvt__WBP_Arena_RuleButton_Element_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RuleButton_Element(int32 EntryPoint);
    void OnElementButtonClicked__DelegateSignature(EPalElementType ElementType);
};

#endif

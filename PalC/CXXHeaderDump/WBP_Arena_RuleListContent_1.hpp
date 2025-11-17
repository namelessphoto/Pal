#ifndef UE4SS_SDK_WBP_Arena_RuleListContent_1_HPP
#define UE4SS_SDK_WBP_Arena_RuleListContent_1_HPP

class UWBP_Arena_RuleListContent_1_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UImage* Image_ChangeMark;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_1;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_2;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_3;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_4;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_5;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_6;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_7;
    class UWBP_Arena_RuleButton_Element_C* WBP_Arena_RuleButton_Element_8;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    TArray<class UWBP_Arena_RuleButton_Element_C*> ElementButtons;
    TArray<EPalElementType> CurrentRestriction;
    FWBP_Arena_RuleListContent_1_COnElementRestrictionUpdate OnElementRestrictionUpdate;
    void OnElementRestrictionUpdate(TArray<EPalElementType>& RestrictElements);
    bool Is Changeable;
    FWBP_Arena_RuleListContent_1_COnContentHovered OnContentHovered;
    void OnContentHovered(class UWidget* Button);
    FWBP_Arena_RuleListContent_1_COnContentUnhovered OnContentUnhovered;
    void OnContentUnhovered();

    class UWidget* CustomNavigation_ToContent(EUINavigation Navigation);
    class UWidget* CustomNavigation_ToElementButton(EUINavigation Navigation);
    void SetChangeable(bool IsChangeable);
    void SetChangedFlag();
    void Toggle Element Restrict(EPalElementType ElementType);
    void Setup(TArray<EPalElementType>& ElementRestrict, const FSetupRestrictChangedEvent& RestrictChangedEvent);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void BndEvt__WBP_Arena_RuleListContent_1_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleListContent_1_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void Construct();
    void ExecuteUbergraph_WBP_Arena_RuleListContent_1(int32 EntryPoint);
    void OnContentUnhovered__DelegateSignature();
    void OnContentHovered__DelegateSignature(class UWidget* Button);
    void OnElementRestrictionUpdate__DelegateSignature(TArray<EPalElementType>& RestrictElements);
};

#endif

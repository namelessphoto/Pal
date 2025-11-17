#ifndef UE4SS_SDK_WBP_Arena_RuleSetting_PalListButton_HPP
#define UE4SS_SDK_WBP_Arena_RuleSetting_PalListButton_HPP

class UWBP_Arena_RuleSetting_PalListButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_AllowToBan;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UCanvasPanel* CanvasPanel_PalIcon;
    class UImage* Image_Unknown;
    class UBP_PalTextBlock_C* Text_PalName;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_Arena_RuleSetting_PalListButton_COnButtonClicked OnButtonClicked;
    void OnButtonClicked(FName CharacterID);
    FName Character Id;
    bool CurrentHidding;

    void SetHide(bool ShouldHide);
    void Setup(FName CharacterID);
    void AnmEvent_Focus();
    void AnmEvent_NoFocus();
    void AnmEvent_Enable();
    void AnmEvent_Ban();
    void Construct();
    void BndEvt__WBP_Arena_RuleSetting_PalListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleSetting_PalListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_Arena_RuleSetting_PalListButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_Arena_RuleSetting_PalListButton(int32 EntryPoint);
    void OnButtonClicked__DelegateSignature(FName CharacterID);
};

#endif

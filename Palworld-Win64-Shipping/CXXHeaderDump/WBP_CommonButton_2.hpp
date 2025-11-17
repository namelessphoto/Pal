#ifndef UE4SS_SDK_WBP_CommonButton_2_HPP
#define UE4SS_SDK_WBP_CommonButton_2_HPP

class UWBP_CommonButton_2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_OpenFocus;
    class UWidgetAnimation* Anm_Normal;
    class UNamedSlot* IconSlot;
    class UBP_PalTextBlock_C* Text_Main;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_CommonButton_2_COnClicked OnClicked;
    void OnClicked();
    bool Is First Focus Target;
    FWBP_CommonButton_2_COnHovered OnHovered;
    void OnHovered();
    FWBP_CommonButton_2_COnUnhovered OnUnhovered;
    void OnUnhovered();
    FDataTableRowHandle InitializeMsgID;
    bool OverrideHover;
    class UAkAudioEvent* WWiseHoverAudio;
    class UAkAudioEvent* UnhoverAKAudioEvent;
    class UAkAudioEvent* ClickAKAudioEvent;

    void GetFocusTarget(class UWidget*& Widget);
    void Setup(bool isFirstFocusTarget);
    void SetText(FText Text);
    void AnmEvent_Focus();
    void AnmEvent_Normal();
    void Construct();
    void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CommonButton_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void OnInitialized();
    void ExecuteUbergraph_WBP_CommonButton_2(int32 EntryPoint);
    void OnUnhovered__DelegateSignature();
    void OnHovered__DelegateSignature();
    void OnClicked__DelegateSignature();
};

#endif

#ifndef UE4SS_SDK_WBP_CharaCre_ColorSelect_sq_HPP
#define UE4SS_SDK_WBP_CharaCre_ColorSelect_sq_HPP

class UWBP_CharaCre_ColorSelect_sq_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_NormalToFocus;
    class UWidgetAnimation* Anm_push;
    class UWidgetAnimation* Anm_Focus;
    class UWidgetAnimation* Anm_Normal;
    class UCanvasPanel* Canvas_Select;
    class UImage* ColorSelect_Square;
    class UWBP_PalInvisibleButton_C* WBP_PalInvisibleButton;
    FWBP_CharaCre_ColorSelect_sq_COnClicked OnClicked;
    void OnClicked(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    FLinearColor BindedColor;

    void GetBindedColor(FLinearColor& Color);
    void SetColor(FLinearColor NewColor);
    void AnmEvent_Normal();
    void AnmEvent_Focus();
    void AnmEvent_Push();
    void AnmEvent_Unselect();
    void BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void BndEvt__WBP_CharaCre_ColorSelect_sq_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_CharaCre_ColorSelect_sq(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
};

#endif

#ifndef UE4SS_SDK_WBP_CharaCre_ColorSliderWin_HPP
#define UE4SS_SDK_WBP_CharaCre_ColorSliderWin_HPP

class UWBP_CharaCre_ColorSliderWin_C : public UPalUserWidgetOverlayUI
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* CanvasPanel_1;
    class UImage* Image_38;
    class UWBP_CharaCre_ColorSelect_WithPreset_C* WBP_CharaCre_ColorSelect_WithPreset;
    class UWBP_Menu_btn_C* WBP_Menu_btn;
    class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* MyParameter;

    FEventReply OnMouseButtonDown_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnInputMethodChanged(ECommonInputType bNewInputType);
    void OnCancel();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnSetup();
    void BndEvt__WBP_CharaCre_ColorSliderWin_WBP_CharaCre_ColorSelect_WithPreset_K2Node_ComponentBoundEvent_0_OnColorChanged__DelegateSignature(FLinearColor HSV);
    void BndEvt__WBP_CharaCre_ColorSliderWin_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
    void OnInitialized();
    void ExecuteUbergraph_WBP_CharaCre_ColorSliderWin(int32 EntryPoint);
};

#endif

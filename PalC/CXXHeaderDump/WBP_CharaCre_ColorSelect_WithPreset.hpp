#ifndef UE4SS_SDK_WBP_CharaCre_ColorSelect_WithPreset_HPP
#define UE4SS_SDK_WBP_CharaCre_ColorSelect_WithPreset_HPP

class UWBP_CharaCre_ColorSelect_WithPreset_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Dot_0;
    class UImage* Dot_1;
    class UImage* Dot_2;
    class UImage* Dot_3;
    class UImage* Line0;
    class UImage* Line0_1;
    class UNamedSlot* NamedSlot_91;
    class UUniformGridPanel* UniformGridPanel_37;
    class UWBP_CharaCre_ColorSelect_Free_C* WBP_CharaCre_ColorSelect_Free_1;
    class UWBP_CharaCre_ColorSelect_sq_C* WBP_CharaCre_ColorSelect_sq;
    class UImage* WinBase;
    FWBP_CharaCre_ColorSelect_WithPreset_COnColorChanged OnColorChanged;
    void OnColorChanged(FLinearColor HSV);
    int32 RowNum;
    class UWBP_CharaCre_ColorSelect_sq_C* LastClickedButton;

    void GetTopFocusTarget(class UWidget*& Widget);
    void SetColor(FLinearColor NewColor);
    class UWidget* CustomNavi_PresetToCustomColor(EUINavigation Navigation);
    void SetColorForce(FLinearColor NewColor);
    void OnClickedPreset(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
    void Setup(TArray<FLinearColor>& PresetColors);
    void BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_1_OnColorChanged__DelegateSignature(FLinearColor HSV);
    void BndEvt__WBP_CharaCre_ColorSelect_WithPreset_WBP_CharaCre_ColorSelect_Free_1_K2Node_ComponentBoundEvent_0_OnNotifyCustomColorClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_CharaCre_ColorSelect_WithPreset(int32 EntryPoint);
    void OnColorChanged__DelegateSignature(FLinearColor HSV);
};

#endif

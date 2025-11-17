#ifndef UE4SS_SDK_WBP_ColorSlider_HPP
#define UE4SS_SDK_WBP_ColorSlider_HPP

class UWBP_ColorSlider_C : public UPalUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnalogSlider* AnalogSlider_H;
    class UAnalogSlider* AnalogSlider_S;
    class UAnalogSlider* AnalogSlider_V;
    class UCanvasPanel* Canvas_H;
    class UCanvasPanel* Canvas_S;
    class UCanvasPanel* Canvas_V;
    class UImage* Image;
    class UImage* Image_1;
    class UImage* Image_293;
    class UWBP_CharaCre_SliderBase_C* WBP_CharaCre_SliderBase_H;
    class UWBP_CharaCre_SliderBase_C* WBP_CharaCre_SliderBase_S;
    class UWBP_CharaCre_SliderBase_C* WBP_CharaCre_SliderBase_V;
    FWBP_ColorSlider_COnColorChanged OnColorChanged;
    void OnColorChanged(FLinearColor HSV);
    class UMaterialInstanceDynamic* SGradientMaterial;
    class UMaterialInstanceDynamic* VGradientMaterial;
    FLinearColor CurrentHSVColor;
    FLinearColor CurrentLinearColor;

    void GetLinearColor(FLinearColor& LinearColor);
    void GetHSVColor(FLinearColor& HSV);
    void SetColor(FLinearColor NewColor);
    void SetColorForce(FLinearColor NewColor);
    void Set Enable Slider(bool IsEnable);
    void ApplyColorSetting(bool IsTriggerEvent);
    void Construct();
    void BndEvt__WBP_ColorSlider_AnalogSlider_H_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__WBP_ColorSlider_AnalogSlider_S_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__WBP_ColorSlider_AnalogSlider_V_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_WBP_ColorSlider(int32 EntryPoint);
    void OnColorChanged__DelegateSignature(FLinearColor HSV);
};

#endif

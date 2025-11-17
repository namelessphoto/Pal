#ifndef UE4SS_SDK_WBP_Chara_Cre_PartsSizeSlider_HPP
#define UE4SS_SDK_WBP_Chara_Cre_PartsSizeSlider_HPP

class UWBP_Chara_Cre_PartsSizeSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAnalogSlider* AnalogSlider_Main;
    class UProgressBar* ProgressBar_305;
    class UBP_PalTextBlock_C* Text_Slider;
    class UBP_PalTextBlock_C* Text_SliderNum;
    FWBP_Chara_Cre_PartsSizeSlider_COnChangedValue OnChangedValue;
    void OnChangedValue(double Value);
    double MinValue;
    double MaxValue;
    FDataTableRowHandle titleMsgId;

    void SetValueForce(double Size);
    void Construct();
    void BndEvt__WBP_Chara_Cre_SizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void OnInitialized();
    void BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__WBP_Chara_Cre_PartsSizeSlider_AnalogSlider_Main_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_Chara_Cre_PartsSizeSlider(int32 EntryPoint);
    void OnChangedValue__DelegateSignature(double Value);
};

#endif

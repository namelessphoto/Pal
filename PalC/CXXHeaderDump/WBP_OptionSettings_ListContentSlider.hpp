#ifndef UE4SS_SDK_WBP_OptionSettings_ListContentSlider_HPP
#define UE4SS_SDK_WBP_OptionSettings_ListContentSlider_HPP

class UWBP_OptionSettings_ListContentSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_PalTextBlock_C* BP_PalTextBlock_Value;
    class UProgressBar* ProgressBar;
    class USlider* Slider;
    double CurrentValue;
    double Min;
    double Max;
    FWBP_OptionSettings_ListContentSlider_COnValueChanged OnValueChanged;
    void OnValueChanged(double Value);
    bool IsIntegerMode;

    void PlayChangeValueSound();
    void SetValueInt(int32 Value, int32 Min, int32 Max);
    void BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void SetValue(double Value, double Min, double Max);
    void AddPercent(double Percent);
    void AddConstantValue(double Value);
    void BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__WBP_OptionSettings_ListContentSlider_Slider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_OptionSettings_ListContentSlider(int32 EntryPoint);
    void OnValueChanged__DelegateSignature(double Value);
};

#endif

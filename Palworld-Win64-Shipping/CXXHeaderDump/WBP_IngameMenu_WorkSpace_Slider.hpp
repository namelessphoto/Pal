#ifndef UE4SS_SDK_WBP_IngameMenu_WorkSpace_Slider_HPP
#define UE4SS_SDK_WBP_IngameMenu_WorkSpace_Slider_HPP

class UWBP_IngameMenu_WorkSpace_Slider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* HorizontalBox_0;
    class UProgressBar* ProgressBar_305;
    class USlider* Slider;
    class UBP_PalTextBlock_C* Text_Num_Max;
    class UBP_PalTextBlock_C* Text_Num_Min;
    class UWBP_PalKeyGuideIcon_C* WBP_PalKeyGuideIcon;
    FWBP_IngameMenu_WorkSpace_Slider_COnValueChanged OnValueChanged;
    void OnValueChanged(int64 NewCount);
    int64 Current;

    void On Input Method Changed(ECommonInputType Selection);
    float GetPercent();
    void SetupRange(int64 Min, int64 Max);
    void SetCurrentValue(int64 Current);
    void BndEvt__WBP_IngameMenu_WorkSpace_Slider_Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Construct();
    void ExecuteUbergraph_WBP_IngameMenu_WorkSpace_Slider(int32 EntryPoint);
    void OnValueChanged__DelegateSignature(int64 NewCount);
};

#endif

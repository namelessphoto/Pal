#ifndef UE4SS_SDK_WBP_CommonCircularGauge_HPP
#define UE4SS_SDK_WBP_CommonCircularGauge_HPP

class UWBP_CommonCircularGauge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_81;
    FPalGaugeInterpolationCalculator GaugeInterpolationCalculator;

    void SetTargetValue(double Value);
    void ReflectRateToImage();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_WBP_CommonCircularGauge(int32 EntryPoint);
};

#endif

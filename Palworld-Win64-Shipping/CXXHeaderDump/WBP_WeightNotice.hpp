#ifndef UE4SS_SDK_WBP_WeightNotice_HPP
#define UE4SS_SDK_WBP_WeightNotice_HPP

class UWBP_WeightNotice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Full;
    class UWidgetAnimation* Anm_Normal;
    class UProgressBar* ProgressBar_Weight;
    class UBP_PalTextBlock_C* Text_Weight;
    double CachedWeightRate;

    void UpdateVisibility();
    void UpdateWeight(double NowWeight, double MaxWeight);
    void ExecuteUbergraph_WBP_WeightNotice(int32 EntryPoint);
};

#endif

#ifndef UE4SS_SDK_WBP_InGame_Match_HPPal_HPP
#define UE4SS_SDK_WBP_InGame_Match_HPPal_HPP

class UWBP_InGame_Match_HPPal_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Anm_Pinch;
    class UWidgetAnimation* Anm_Death;
    class UWidgetAnimation* Anm_Default;
    class UImage* Image_PalIconBase;
    class UProgressBar* ProgressBar_HPGauge;
    class UProgressBar* ProgressBar_HPGauge_Back;
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;
    class UPalUIDelayGaugeCalculator* DelayGauge;

    void CheckState(double HPPercent, bool IsDead);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void On Update HP Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnInitialized();
    void SetIsRival(bool IsRival);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_InGame_Match_HPPal(int32 EntryPoint);
};

#endif

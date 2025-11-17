#ifndef UE4SS_SDK_WBP_InGame_Match_HPPal_HPP
#define UE4SS_SDK_WBP_InGame_Match_HPPal_HPP

class UWBP_InGame_Match_HPPal_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UWidgetAnimation* Anm_Pinch;                                                // 0x0610 (size: 0x8)
    class UWidgetAnimation* Anm_Death;                                                // 0x0618 (size: 0x8)
    class UWidgetAnimation* Anm_Default;                                              // 0x0620 (size: 0x8)
    class UImage* Image_PalIconBase;                                                  // 0x0628 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge;                                          // 0x0630 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge_Back;                                     // 0x0638 (size: 0x8)
    class UWBP_PalCommonCharacterIcon_C* WBP_PalCommonCharacterIcon;                  // 0x0640 (size: 0x8)
    class UPalUIDelayGaugeCalculator* DelayGauge;                                     // 0x0648 (size: 0x8)

    void CheckState(double HPPercent, bool IsDead);
    void BindFromHandle(class UPalIndividualCharacterHandle* targetHandle);
    void On Update HP Binded(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void OnInitialized();
    void SetIsRival(bool IsRival);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_InGame_Match_HPPal(int32 EntryPoint);
}; // Size: 0x650

#endif

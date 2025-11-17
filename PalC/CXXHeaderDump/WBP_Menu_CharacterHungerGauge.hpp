#ifndef UE4SS_SDK_WBP_Menu_CharacterHungerGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterHungerGauge_HPP

class UWBP_Menu_CharacterHungerGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UCanvasPanel* Canvas_Hunger;                                                // 0x0610 (size: 0x8)
    class UProgressBar* ProgressBar_HungerGauge;                                      // 0x0618 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHunger;                                         // 0x0620 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHunger;                                         // 0x0628 (size: 0x8)
    class UBP_PalTextBlock_C* TextHunger;                                             // 0x0630 (size: 0x8)

    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void Construct();
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Menu_CharacterHungerGauge(int32 EntryPoint);
}; // Size: 0x638

#endif

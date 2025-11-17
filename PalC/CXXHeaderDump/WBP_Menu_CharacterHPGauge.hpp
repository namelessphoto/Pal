#ifndef UE4SS_SDK_WBP_Menu_CharacterHPGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterHPGauge_HPP

class UWBP_Menu_CharacterHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0608 (size: 0x8)
    class UCanvasPanel* Canvas_HP;                                                    // 0x0610 (size: 0x8)
    class UProgressBar* ProgressBar_HPGauge;                                          // 0x0618 (size: 0x8)
    class UBP_PalTextBlock_C* Text_MaxHP;                                             // 0x0620 (size: 0x8)
    class UBP_PalTextBlock_C* Text_NowHP;                                             // 0x0628 (size: 0x8)

    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void Construct();
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Menu_CharacterHPGauge(int32 EntryPoint);
}; // Size: 0x630

#endif

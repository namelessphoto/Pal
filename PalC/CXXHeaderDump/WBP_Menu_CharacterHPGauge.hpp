#ifndef UE4SS_SDK_WBP_Menu_CharacterHPGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterHPGauge_HPP

class UWBP_Menu_CharacterHPGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_HP;
    class UProgressBar* ProgressBar_HPGauge;
    class UBP_PalTextBlock_C* Text_MaxHP;
    class UBP_PalTextBlock_C* Text_NowHP;

    void UpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP);
    void Construct();
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Menu_CharacterHPGauge(int32 EntryPoint);
};

#endif

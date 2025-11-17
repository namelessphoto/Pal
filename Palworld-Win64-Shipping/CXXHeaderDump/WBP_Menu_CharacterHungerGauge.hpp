#ifndef UE4SS_SDK_WBP_Menu_CharacterHungerGauge_HPP
#define UE4SS_SDK_WBP_Menu_CharacterHungerGauge_HPP

class UWBP_Menu_CharacterHungerGauge_C : public UWBP_IndividualParameterBindWidget_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCanvasPanel* Canvas_Hunger;
    class UProgressBar* ProgressBar_HungerGauge;
    class UBP_PalTextBlock_C* Text_MaxHunger;
    class UBP_PalTextBlock_C* Text_NowHunger;
    class UBP_PalTextBlock_C* TextHunger;

    void UpdateHunger(double nowHunger, double nowMaxHunger);
    void Construct();
    void Destruct();
    void OnInitialized();
    void ExecuteUbergraph_WBP_Menu_CharacterHungerGauge(int32 EntryPoint);
};

#endif
